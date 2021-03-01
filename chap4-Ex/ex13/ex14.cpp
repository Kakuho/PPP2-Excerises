 /*
  * Create a program to find all the prime numbers between 1 and 100. 
  * There is a classic method for doing this, called the 
  * “Sieve of Eratosthenes.” If you don’t know that method, get on the 
  * web and look it up. Write your program using this method.
  */
#include <iostream>
#include <vector>

int main(){
 int n = 100;
 std::vector<int> nums;
 for(int i = 2; i < n ; i++){
  nums.push_back(1);
 }

 for(int i = 2; i < n/2.0; i++){
  if(nums[i] == 1){
   for( int j = i*i; j < n; j += i){
    nums[j] = 0;
   }
  }
 }

 for(int k = 0; k < n; k++){
  if(nums[k] == 1){
   std::cout << k << '\n';
  }
 }

}
