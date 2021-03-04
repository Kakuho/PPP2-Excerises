#include <iostream>
#include "std_lib_facilities.h"
int main()
try {
 /* 5
 string res = 7; 			Error: no conversion from str to 
 			 		       int
 vector<int> v(10); 
 v[5] = res; 
 cout << "Success!\n";
  */

 int res = 7; 
 vector<int> v(10); 			// We can also set V to be str
 v[5] = res; 
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
