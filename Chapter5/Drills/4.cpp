#include <iostream>
#include "std_lib_facilities.h"
int main()
try {
// 4 
// cout << success << '\n';          	Error: unidentified sucess
  
  cout << "success" << '\n';

 keep_window_open(); 
 return 0;
}
catch (exception& e) {
 cerr << "error: " << e.what() << '\n'; 
 keep_window_open();
 return 1;
}
catch (...) {
 cerr << "Oops: unknown exception!\n"; 
 keep_window_open();
 return 2;
}
