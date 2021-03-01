/*
 * The number that appears the most times in a sequence is called the mode.
 * Create a program that finds the mode of a set of positive integers.
 */
#include <iostream>
#include <vector>
#include <algorithm>

int main(){
 int n;
 std::vector<int> numbers;
 std::cout << "enter a sequence of numbers";
 while(std::cin >> n){
  numbers.push_back(n);
 }
 
 // sort vector first
 sort(numbers.begin(), numbers.end());
 std::vector<int> counters(numbers[numbers.size() -1]);
 int currentCounter = 0;

 for(int i = 0; i < counters.size(); i++){
  counters[i] = 0;
 }
 // find mode
 for(int i = 0; i <= numbers[numbers.size()-1]; i++){
  for(int j = 0; j < numbers.size()-1 ; j++){
    if(numbers[j] == i){
     currentCounter++;
     counters[i] = currentCounter;
    }
   }
   std::cout << i << '\t' << counters[i] << '\n';
   currentCounter = 0;
  }
 // Greatest number of counters
 int greatest = 0;
 for(int i = 0; i <= numbers[numbers.size()-1]; i++){
  if(i < counters.size() - 1 && counters[i] < counters[i+1]){
   greatest = i+1;
  }
 }
 std::cout << "Mode is " << greatest << '\n';
}
