/* ex2 ex3 ex4 ex5 ex6
 *
 * The following program takes in a temperature value and converts it 
 * from a set of values
 * 
 * ex2 		- fix errors
 * ex3/ex4	- make a check that values never go below absolute zero
 * ex5 		- add convert from Kelvin to Celsius
 * ex6 		- add conversion from Celsius to Farenheit, 
 *		   and conversion from Farenheit to Celsius.
 */
#include <iostream>

void error(std::string s){
 throw std::runtime_error(s);
}

// converts Celsius to Kelvin
double ctok(double c) {
 // precondition: c >= -273.15
 if(c < -273.15) error("We can't have less than -273.15ºC!");

 double k = c + 273.15;
 return k;
}

double ktoc(double k){
 // precondition: k >= 0
 if(k < 0) error("Can't have less than 0K!");

 double c = k - 273.15;
 return c;
}

double ctof(double c){
 // precondition c >= -273.15
 if(c < -273.15) error("We can't have less than -273.15ºC!");

 double f = (9*c)/5.0 + 32.0;
 return f;
}

double ftoc(double f){
 // precondition f >= -459.67
 if(f < -459.67) error("We can't have less than -459.67F!");

 double c = 5.0/(9.0)*(f - 32);
 return c;
}

void getUnit(char &u){
 //post condition: u = k,c,f
 // setting conversion
 std::cout << "The unit to be converted from (c,k,f): ";
 std::cin >> u;
 if(u != 'k' && u != 'c' && u != 'f') 
  error("We can only convert from k,c,f");
}

void getPostunit(char &u2){
 std::cout << "The unit to convert to (c,k,f): ";
 std::cin >> u2;
 if(u2 != 'k' && u2 != 'c' && u2 != 'f')
  error("We can only convert from k,c,g");
}

void getValue(double &d){
 std::cout << "Please enter your value: ";
 std::cin >> d;
}

double result(char preU, char postU, double val){
 // our function converts from (c,k), (k,c), (c,f), (f,c)
 if(preU == 'c' && postU == 'k')      
  return ctok(val);
 else if(preU == 'k' && postU == 'c') 
  return ktoc(val);
 else if(preU == 'c' && postU == 'f') 
  return ctof(val);
 else if(preU == 'f' && postU == 'c') 
  return ftoc(val);
 else
  error("We can't convert those!");
}


int main() {
 try{
  char preUnit = 'c';
  getUnit(preUnit);

  char postUnit = '0';
  getPostunit(postUnit);

  double val = 0;				
  getValue(val);
  
  double convertedVal = result(preUnit, postUnit, val);
  std::cout << convertedVal << '\n';
 }
 catch(std::runtime_error& e) {
  std::cout << "Error: " << e.what() << '\n';
 }
}
