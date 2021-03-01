/*
 * Make a vector holding the ten string values "zero", "one", . . . "nine".
 * Use that in a program that converts a digit to its corresponding 
 * spelled-out value; e.g., the input 7 gives the output seven. 
 *
 * Have the same program, using the same input loop, convert spelled-out 
 * numbers into their digit form; e.g., the input seven gives the output 7.
 */
#include <iostream>
#include <vector>

int main(){
 std::vector<std::string> numbers = {"zero", "one", "two", 
             "three", "four", "five", "six", "seven", "eight", "nine",
	     "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

 std::string s;
 int n;
 int counter = 20;
 std::cout << "Provide me with a digit: ";
 while(counter == 20){
  counter = 10;
  std::cin >> s;
  for(int i = 0; i < 10; i++){
   if( s == numbers[i] || s == numbers[i + 10]){
    std::cout << s << " is " <<  numbers[i] <<"  "<< numbers[i+10] << '\n';
    n = i;
   } else {
    counter++;
   }
  }
  if(counter == 20){
   std::cout << s << " is not a digit! Enter again: " << '\n';
  }
 }
  return 0;
}
