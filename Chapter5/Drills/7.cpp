#include <iostream>
#include "std_lib_facilities.h"
int main()
try {
 /* 7
  if (cond) 				Error: unidentified cond
   cout << "Success!\n"; 
  else 
   cout << "Fail!\n";
   */

  if (1) 
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
