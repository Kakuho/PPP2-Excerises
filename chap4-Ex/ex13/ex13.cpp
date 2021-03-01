/* includes ex15 */

#include <iostream>
#include <vector>

int main(){
 int n;
 std::cout << "Please give me a value: ";
 std::cin >> n;
 
 std::vector<int> primes;
 while(primes.size() != n){
  std::vector<int> numbers;
  // We shall use 0 to indicate not marked and 1 to indicate marked
  for(int i = 2; i < m; i++){
   numbers.push_back(0);
  }
  
  // we need to find the next one unmarked
  for(int i = 2; i < m; i++){
   if(numbers[i] == 0){
    primes.push_back(i);
    for(int j = i*i; j < m; j += i){
     numbers[j] = 1;
    }
   }
  }
 }

 for(int  i = 2; i < primes.size(); i++){
  if(primes[i] == 0){
   std::cout << i << '\n';
  }
 }

}
