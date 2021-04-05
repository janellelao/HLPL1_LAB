// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"

void swap_v(int a, int b)
{ 
   int temp; 
   temp = a;
   a = b;
   b = temp;
   }
   
void swap_r(int& a, int& b)
{ 
   int temp; 
   temp = a;
   a = b;
   b = temp;
   }

/* void swap_cr(const int& a, const int& b)
{ 
   int temp; 
   temp = a;
   a = b;
   b = temp;
   }
    this function will not compile as it attempts to modify values that are meant to be constant, fixed */
    
 int main()
 {
    int x = 7;
    int y = 9;
    
   // swap_v(x, y); compiles but does not swap
   // swap_v(7, 9); compiles but does not swap
    
      swap_r(x, y); // compiles and swaps!
   // swap_r(7, 9); does not compile 
    
    cout << "x is now " << x << " and y is now " << y << '\n';
    
    const int cx = 7;
    const int cy = 9;
    
  //  swap_v(cx, cy); compiles but does not swap
  //  swap_v(7.7, 9.9); compiles but does not swap
    
  //  swap_r(cx, cy); does not compile, non-const reference to a const brings issues
   // swap_r(7.7, 9.9); does not compile
    
    cout << "cx is now " << cx << " and cy is now " << cy << '\n';
    
    double dx = 7.7;
    double dy = 9.9;
    
  //  swap_v(dx, dy); compiles but does not swap
  //  swap_v(7.7, 9.9); compiles but does not swap
    
 //   swap_r(dx, dy); does not compile, maybe due to conversion? 
   // swap_r(7.7, 9.9); does not compile
    
    cout << "dx is now " << dx << " and dy is now " << dy << '\n';
    
    return 0;
    }
