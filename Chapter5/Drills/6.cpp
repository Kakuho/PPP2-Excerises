#include <iostream>
#include "std_lib_facilities.h"
int main()
try {
 /* 6
 vector<int> v(10); 			Error: v(5) == 7
 v(5) = 7;				Error: [] instead of ()
 if (v(5)!=7) 
  cout << "Success!\n"
  */

 vector<int> v(10); 
 v[5] = 7; 
 if (v[5]==7) 
  cout << "Success!\n";

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
