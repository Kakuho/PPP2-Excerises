// ex2.cpp
// If we define the median of a sequence as “a number so that exactly as 
// many elements come before it in the sequence as come after it,” 
// fix the program in §4.6.3 so that it always prints out a median. 
// Hint: A median need not be an element of the sequence.
#include<iostream>
#include<vector>

int main(){
 std::vector<double> temps;
 for (double temp; std::cin>>temp; )
  temps.push_back(temp);

 double sum = 0;
 for (double x : temps) sum += x;
 std::cout << "Average temperature: " << sum/temps.size() << '\n';

 // compute median temperature:
 double median = 0;
 int nlow = 0; 
 int nhigh = 1;

 while(nlow != nhigh){
  int lows = 0;
  int highs = 0;

  for(int i = 0; i < temps.size(); i++){
   if(temps[i] <= median){
     lows++ ;  
     std::cout << lows << '\n';
   } else if(temps[i] >= median){
     highs++ ;
     std::cout << highs << '\n';
   } else;
   nlow = lows;
   nhigh  = highs;
   std::cout << nlow << " " << nhigh << '\n';
  }

 }
}
