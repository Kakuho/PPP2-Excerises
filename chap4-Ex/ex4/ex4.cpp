#include <iostream>

void get_input(char c){
 std::cin >> c;
}

void out(int n){
 std::cout << "Is your value less than " << n << "? (y/n)";
}

int main(){
 int n; 
 char ans;
 std::cout << "Enter an integer between 1 and 100, i shall guess\n";
 std::cin >> n;
 std::cout << " Is your value less than 50? (y/n)" << std::endl;
 get_input(ans);
 if(ans == 'y'){
  // n < 50
  std::cout << "Is your value less than 25? (y/n)";
  get_input(ans);
  if(ans == 'y'){
   // n < 25
   std::cout << "Is your value less than 17? (y/n)";
   get_input(ans);
   if(ans == 'y'){
    // n < 17
    std::cout << "Is your value less than 8? (y/n)";
    get_input(ans);
    if(ans == 'y'){
     // n < 8
     std::cout << "Is your value less than 4? (y/n)";
     get_input(ans);
     if(ans == 'y'){
      // n < 4
      out(2);
      get_input(ans);
      if(ans == 'y'){
       std::cout << "You value is 1\n";
      } else {
       std::cout << "Your value is 2\n";
     }
    } else if(ans == 'n'){
     // n > 4
    }
   }
  }
 }
 

 return 0;
}
