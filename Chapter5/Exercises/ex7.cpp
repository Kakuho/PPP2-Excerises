/*
 * ex7.cpp
 *
 * Create a function that prints out the roots of a quadratic equation, 
 * given a, b, c. When the program detects an equation with no real 
 * roots, have it print out a message.
 *
 */
#include <iostream>
#include <stdexcept>
#include <cmath>

void error(std::string s){
 throw std::runtime_error(s);
}


double plusRoot(double a, double b, double c){
 //pre condition: b^2 - 4ac >= 0
 double inSqrt = b*b - 4.0 * a * c;
 if(inSqrt < 0)
  error("Sorry, Non real roots!");

 double x = (-b + sqrt(inSqrt))/(2*a);
 return x;
}

double minusRoot(double a, double b, double c){
 //pre condition: b^2 - 4ac >= 0
 double inSqrt = b*b - 4.0 * a * c;
 if(inSqrt < 0)
  error("Sorry, Non real roots!");

 double x = (-b - sqrt(inSqrt))/(2*a);
 return x;
}

void checker(double a, double b, double c, double x){
 double val = a*x*x + b*x + c;
 std::cout << "When we sub " << x 
           << " into our quadratic: " << val << '\n';
}

int main(){
 try{
  double a = 1;
  double b = -4;
  double c = 4;

  double x1 = plusRoot(a, b, c);
  double x2 = minusRoot(a, b, c);
  std::cout << "For\t" << a << "X^2 + " << b << "X + " << c << "\n";
  std::cout << "x1 = " << x1 << "\t x2 = " << x2 << "\n";
  
  checker(a, b, c, x1);
  checker(a, b, c, x2);

 }
 catch(std::runtime_error e){
  std::cout << "Error: " << e.what() << '\n';
 }
 
}
