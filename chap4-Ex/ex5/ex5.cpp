/*
 * Write a program that performs as a very simple calculator. 
 * Your calculator should be able to handle the four basic math 
 * operations — add, subtract, multiply, and divide — on two input values. 
 * Your program should prompt the user to enter three arguments: 
 * two double values and a character to represent an operation. 
 * If the entry arguments are 35.6, 24.1, and '+', the program output 
 * should be The sum of 35.6 and 24.1 is 59.7.
 */

#include <iostream>

int main(){
 double x1, x2;
 double result = 0;
 char ops;
 std::cout << "Enter your values and your operator like so, 1 2 +\n";
 std::cin >> x1 >> x2 >> ops;

 /* Checking operator */
 switch(ops){
  case '+':
   result = x1 + x2;
   break;
  case '-':
   result = x1 - x2;
   break;
  case '/':
   result = x1/x2;
   break;
  case '*':
   result = x1*x2;
   break;
  default:
   std::cout << "Sorry not  operation I know\n";
   break;
 }

 std::cout << x1  << " " << ops << " " << x2 << " = " << result << '\n';
}
