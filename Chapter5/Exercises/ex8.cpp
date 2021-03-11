/*
 * ex8.cpp ex9.cpp ex10.cpp
 *
 * Write a program that reads and stores a series of integers and then 
 * computes the sum of the first N integers. First ask for N, then read 
 * the values into a vector, then calculate the sum of the first N values.
 *
 * Handle all inputs. For example, make sure to give an error message if 
 * the user asks for a sum of more numbers than there are in the vector.
 *
 */

// inputs: N = # ints, ints for array
#include <iostream>
#include <stdexcept>
#include <vector>

void error(std::string s){
 throw std::runtime_error(s);
}

double sum_first_few(std::vector<double> v, int n){
 // pre condition: n <= v.size()-1
 if(n > v.size())
  error("N is bigger than your array!\n");

 double sum = 0;
 for(int i = 0; i < n; i++){
  sum += v[i];
 }

 return sum;
}

std::vector<double> diff_vector(std::vector<double> &v, int n){
 // pre condition n <= v.size()-1
 if(n > v.size())
  error("N is bigger than your array! \n");

 std::vector<double> diffVec;
 for(int i = 0; i < n; i++){
  diffVec.push_back( v[i+1] -v[i] );
 }

 return diffVec;
}

void printVector(std::vector<double> &v){
 for(int i = 0; i < v.size()-1; i++){
  std::cout << "dv[" << i << "] = " << v[i] << '\n';
 }
}

int main(){
 try{
  int N = 0;
  std::cout << "Enter the number of values you want to sum: ";
  if(!(std::cin >> N))
   error("Not valid");

  std::vector<double> values; 
  double input;
  std::cout << "Please enter your integers (stop by |): ";
  while(std::cin >> input)
   values.push_back(input);

  double output = sum_first_few(values, N);
  std::vector<double> v2 = diff_vector(values, N);
  std::cout << "The sum of the first few " << N << " numbers "
   << " is " << output << '\n';
  printVector(v2);
 
  
 }
 catch(std::runtime_error e){
  std::cout << "Error: " << e.what() << '\n';
 }

}
