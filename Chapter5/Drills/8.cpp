#include <iostream>
#include "std_lib_facilities.h"
int main()
try {
 /* 8
 bool c = false; 			Logic Error: we need it to be true
 if (c) 
  cout << "Success!\n"; 
 else 
  cout << "Fail!\n";
  */

 bool c = true; 
 if (c) 
  cout << "Success!\n"; 
 else 
  cout << "Fail!\n";

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
