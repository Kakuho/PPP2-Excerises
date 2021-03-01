// Read a sequence of double values into a vector. 
// Think of each value as the distance between two cities along a given 
// route. 
// Compute and print the total distance (the sum of all distances). 
// Find and print the smallest and greatest distance between two 
// neighboring cities. 
// Find and print the mean distance between two neighboring cities.

#include <iostream>
#include <vector>
#include <algorithm>

double sum(std::vector<double> d){
 double s = 0;
 for(int i = 0; i < d.size(); i++){
  s += d[i]; 
 }
 return s;
}

void small_large(std::vector<double> d, double* s, double* l){
 sort(d.begin(), d.end());
 *s = d[0];
 *l = d[d.size() - 1];
 std::cout << d.size() << '\n';
}


/* reads a value into the vector 
   this one is with input checking */
void read_inputs(std::vector<double> d){
 double val;
 while(std::cin >> val){ 
  d.push_back(val); 
 }
}


/* reads a value into the vector 
   this one is with input checking */
void read_inputsch(std::vector<double> d){
 double val;
 while(1){ 
  std::cin >> val;
  if( std::cin.fail()){
   std::cout << "Your value is not of type double!\n";
   std::cin.clear();
  } else {
   d.push_back(val); 
  }
 }
}

void traverse(std::vector<double> d){
 std::cout << "k \t d[k] \n";
 for(int k = 0; k < d.size(); k++){
  std::cout << k << " \t " << d[k] << " \n";
 }
}

int main(){
 std::vector<double> cities;
 read_inputs(cities);
 traverse(cities);
 // metrics 
 double totalDistance = sum(cities);
 //double small, large; small_large(cities, &small, &large);

 // printing
 /*
 std::cout << "Total distance is: " << totalDistance << '\n';
 std::cout << "Smallest value is: " << small << '\n';
 std::cout << "Largest value is: " << large << '\n';
 */
 
}
