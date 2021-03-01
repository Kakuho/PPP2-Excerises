/*
 * Write a program that performs as a very simple calculator.
 * Your calculator should be able to handle the four basic math
 * operations — add, subtract, multiply, and divide — on two input values.
 * Your program should prompt the user to enter three arguments:
 * two double values and a character to represent an operation.
 * If the entry arguments are 35.6, 24.1, and '+', the program output
 * should be The sum of 35.6 and 24.1 is 59.7.
 *
 * Program should be able to read numberic and word values converting 
 * them into digits,
 */

/* 
 * Need to learn how to pass strings into functions
 */

#include <iostream>
#include <vector>

/*
 * Gets input from the user keyboard and then return the numberic
 * values of them
 */
void get_inputs(std::string s1, std::string s2, char op){

 std::cout << s1 <<"|"<< s2 << "|" << op;
}

int calculate(int x1, int x2, char ops){
 switch(ops){
  case '+':
   return x1 + x2;
   break;
  case '-':
   return x1 - x2;
   break;
  case '/':
   while(x2 == 0){
      std::cout << "Your dividing by zero! Enter your value again: ";
      std::cin >> x2;
   } return x1/x2;
   break;
  case '*':
   return x1*x2;
   break;
  default:
   while( ops != '+' || ops != '-' || ops != '/' || ops != '*'){
   std::cout << "Sorry not  operation I know\n";
   std::cin >> ops;
   }
  return 0;
   break;
 }
}

int main(){
 std::vector<std::string> numbers = {"zero", "one", "two",
             "three", "four", "five", "six", "seven", "eight", "nine", 
	      "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

  std::string s1, s2;
  int n1,n2;
  char ops;


  while(1){
  std::cout << "Enter your value like so, 1, 2, +\n";
  std::cin >> s1 >> s2 >> ops;
   int ono = 10;
   // digit = 9 + digitword
   // converting strings into numbers;
   // Testing s1
   while(ono == 10){
    ono = 0;
    for(int i = 0; i < 10; i++){
     //std::cout << numbers[i] << "|" << numbers[i+10] << '\n';
     if( s1 == numbers[i] || s1 == numbers[i+10]){
      n1 = i;
     } else {
      ono++;
     }
     if(ono == 10){
      std::cout << s1 << "is not a number i know, Enter again";
      std::cin >> s1;
     }
    } // end of fof
   }

   ono = 10;
   // testing s2
   while(ono == 10){
    ono = 0;
    for(int i = 0; i < 10; i++){
     //std::cout << numbers[i] << "|" << numbers[i+10] << '\n';
     if( s2 == numbers[i] || s2 == numbers[i+10]){
      n2 = i;
     } else {
      ono++;
     }
     if(ono == 10){
      std::cout << s2 << "is not a number i know, Enter again";
      std::cin >> s2;
     }
    } // end of fof
   }

  int result = calculate(n1,n2,ops);
  std::cout << s1  << " " << ops << " " << s2 << " = " << result << '\n';
  }
}
