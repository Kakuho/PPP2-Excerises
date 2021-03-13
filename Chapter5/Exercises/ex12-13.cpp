/*
 * ex12.cpp ex13.cpp
 *
 * Implement a guessing game called Bulls and Cows. The program has a 
 * vector of four different integers in the range 0 to 9 
 * and it is the user’s task to discover those numbers by repeated guesses.
 *
 * The response should be Bull if the user got one digit right and in the 
 * right position and Cow if one digit is right but in the wrong position 
 * 
 * The guessing continues until the user gets four bulls, that is, 
 * has the four digits correct and in the correct order.
 *
 * 13 - use randint and seed_randint(n) to generate random numbers
 */
#include <iostream>
#include <random>
#include<std_lib_facilities.h>

void enter_guess(vector<int> &v){
 std::cout << "Enter your guess below;\n";
 int input = 0;
 for(int i = 0; i < 4; i++){
  // We need to check the inputs are between 0 and 9
  std::cin >> input;
  // managing input
  while(input > 9 || input < 0){
   std::cout << input << " is not a digit! please enter again: ";
   std::cin >> input;
   v[i] = input;
   // print so far - make thing easier
   std::cout << "You've entered: \n";
   for(int j = 0; j <= i; j++){
    std::cout << " " << v[j];
   }
   std::cout << " so far \n";
  }
  // putting into our vector
  v[i] = input;
 }
}

char end_game(){
 char ans = 0;
 std::cout << "End game? (y/n): ";
 std::cin >> ans;
 while( ans != 'y' && ans != 'Y' && ans != 'n' && ans != 'N'){
  std::cout <<ans<< " is not a valid response! Please enter again (y/n):";
  std::cin >> ans;
 }
 return ans;
}


void print_vector(vector<int> v){
 for(int i = 0; i < 4; i++){
  std::cout << "v[" << i << "] = " << v[i] << '\n';
 }
}

void printBC(int b, int c){
 std::cout << b << " bull and " << c << " cow\n";
}

void get_numbers(vector<int> &v, int &n1, int &n2, int &n3, int &n4, int n){
 std::cout << "Enter your seed: ";
 std::cin >> n;
 seed_randint(n);
 n1 = randint(9);
 n2 = randint(9);
 n3 = randint(9);
 n4 = randint(9);
}

int main(){
 vector<int> nums = {2,2,3,3};
 int n = 0;
 vector<int> guess = {0, 0, 0, 0};
 int bulls = 0;
 int cows = 0;
 char end = 'n';
 /* flag for determining wheter we have finished iteration of vector */
 int out;

 //print_vector(nums);
 // start of game
 while( end  == 'n' || end == 'N' ){
  get_numbers(nums, nums[0], nums[1], nums[2], nums[3], n);
  do{
   bulls = 0; cows = 0;
   enter_guess(guess);
   // find bulls 
   for(int k = 0; k < nums.size(); k++){
    if(nums[k] - guess[k] == 0){
     bulls += 1;
    }
   }

   // find cows
   for(int j = 0; j < nums.size(); j++){
    out = 0;
    for(int k = 0; k < guess.size(); k++){
     if(nums[j] - guess[k] == 0 && out == 0){
      cows += 1;
      out = 1;
     }
    }
   }

   // Finalise round
   cows -= bulls;
   printBC(bulls, cows);
  } while(bulls != 4);
  std::cout << "You got it!\n\n";
  end = end_game();
 }
}

