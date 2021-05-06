// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"

      /*---Array Drill---*/
      
   // 1. Define a global int array ga of ten ints initialized to 1, 2, 4, 8, 16, etc
   int ga[10] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512};
   
   // 2. Define a function f() taking an int array argument and an int argument indicating the number of elements in the array.
   void f(int a[], int n)
      {
      
   // 3a. define a local int array la of ten ints
   int la[10];
   
   // 3b. copy the values from ga into la
   for (int i = 0; i < n; ++i)
     la[i] = ga[i];
   
   // 3c. print out the elements of la
   for (int i = 0; i < n; ++i)
   cout << la[i] << endl;
   cout << "^^Elements of la^^" << endl; 
   
   // 3d. Define a pointer p to int and initialize it with an array allocated on the free store with the same number of elements as the argument array.
   int *p = new int[n];
   
   // 3e. Copy the values from the argument array into the free-store array.
   for (int i = 0; i < n; ++i) 
      p[i] = a[i];
   
   // 3f. Print out the elements of the free-store array.
   for (int i = 0; i < n; ++i)
   cout << p[i] << endl;
   
   // 3g. Deallocate the freestore array
   delete[] p;
   
   }
   
  // function for 4b
 int fac(int n) { 
    return n > 1 ? n*(fac(n-1)) : 1; 
   }

int main()
try { 
   
   // 4a. Call f() with ga as its argument.
    f(ga, 10);
    cout << "^^Int Array^^" << endl;
   
   // 4b. Define an array aa with ten elements, and initialize it with the first ten factorial values (1, 2*1, 3*2*1, 4*3*2*1, etc.).
    int aa[10] = { };
    for (int i = 0; i < 10; ++i)
        aa[i] = fac(i + 1);
    
   // 4c. Call f() with aa as its argument
   f(aa, 10); 
   cout << "^^Factorial Array^^" << endl;
  }
   
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}
      