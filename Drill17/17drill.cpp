// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"

   // ----- First Part Start ----- 

      // 4. Write a function print_array10(ostream& os, int* a) that prints out the values of a (assumed to have ten elements) to os.
 void print_array10(ostream& os, int* a) 
   {
    for (int i = 0; i<10; ++i)
        os << a[i] << "\n"; 
       }
       
     // 7. Write a function print_array(ostream& os, int* a, int n) that prints out the values of a (assumed to have n elements) to os.
 void print_array(ostream& os, int* a, int n) 
   {
    for (int i = 0; i<n; ++i)
        os << a[i] << "\n";  
        }
        
     // 10. Print vector function
 void print_vector(ostream& os, vector<int> v) 
 {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << "\n";
       }
       

 int main()
      // 1. Allocate an array of ten ints on the free store using new
  try {
       int* teni = new int[10];
      
      // 2. Print the values of the ten ints to cout.
  for (int i = 0; i < 10; ++i)
		 cout << "Int " << i << ": " << teni[i] << endl;

      // 3. Deallocate the array (using delete[]).
  delete[] teni;
  

     // 5. Allocate an array of ten ints on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
    cout << "--step 5--" << endl;
     int* teni2 = new int[10];
    for (int i = 0; i<10; ++i)
        teni2[i] = 100 + i;
    print_array10(cout,teni2);
    delete[] teni2;
    
    // 6. Allocate an array of 11 ints on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
    cout << "--step 6--" << endl;
     int* teni3 = new int[11];
    for (int i = 0; i<11; ++i)
        teni3[i] = 100 + i;
    print_array(cout,teni3,11);
    cout << teni3[11] << endl ;
    delete[] teni3;
    
    // 8. Allocate an array of 20 ints on the free store; initialize it with the values 100, 101, 102, etc.; and print out its values.
    cout << "--step 8--" << endl;
    int* teni4 = new int[20];
    for (int i = 0; i<20; ++i)
        teni4[i] = 100 + i;
    print_array(cout,teni4,20);
    delete[] teni4;

     // 9. added the delete to the arrays
    
     // 10. Do 5, 6, and 8 using a vector instead of an array and a print_vector() instead of print_array().    
   cout << "--step 10--" << endl;
   vector<int> ints;
    for (int i = 0; i<10; ++i)
        ints.push_back(100+i);
    print_vector(cout,ints);

    cout << "\n";
    vector<int> ints2;
    for (int i = 0; i<11; ++i)
        ints2.push_back(100+i);
    print_vector(cout,ints2);

    cout << "\n";
    vector<int> ints3;
    for (int i = 0; i<20; ++i)
        ints3.push_back(100+i);
    print_vector(cout,ints3); 
   
   
   // ----- Second Part Start -----
   
   cout << "--Second Part--" << endl;
     // 1. Allocate an int, initialize it to 7, and assign its address to a variable p1
    int n = 7;
    int* p1 = &n;
    
    // 2. Print out the value of p1 and of the int it points to
    cout << "n: " << n <<  endl;
    cout << "p1: " << p1 << endl;
    
    // 3. Allocate an array of seven ints: initialize it to 1,2,4,8 etc. and assign its address to a variable p2
    int sevi [7] = { 1,2,4,8,16,32,64 };
    int* p2 = sevi;
    
    // 4. Print out the value of p2 and of the array it points to
    cout << "--Part 2 Step 4--" << endl;
    print_array(cout, p2, 7);
    cout << "p2: " << p2 << endl;
    
    // 5. Declare an int* called p3 and initialize it with p2
    int* p3 = p2;
    
    // 6. Assign p1 to p2
    p2 = p1;
    
    // 7. Assign p3 to p2
    p2 = p3;
    
    // 8. Print out the values of p1 and p2 and of what they point to
    cout << "--Part 2 Step 8--" << endl;
    cout << "p1: " << p1 << endl;
    cout << "*p1: " << *p1 << endl;
    cout << "p2: " << p2 << endl;
    cout << "*p2: " << *p2 << endl;
    
    // 9. Deallocate all the memory you allocated from the free store
    // nothing allocated to the free store 
    
    // 10. Allocate an array of ten ints; initialize it to 1,2,4,8 etc and assign its address to a variable p1
    int tenin[10] = { 1,2,4,8,16,32,64,128,256,512 };
	p1 = tenin;
    
    // 11. Allocate an array of ten ints, and assign its address to a variable p2
      int tenin2[10] = { 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = tenin2;
    
    // 12. Copy the values from the array pointed to by p1 into the array pointed to by p2
     for (int i = 0; i<10; ++i)
         p2[i] = p1[i];
    
   // 13. Repeat 10-12 using a vector rather than an array
   cout << "--Part 2 Step 13--" << endl;
   vector<int> v_tenin{ 1,2,4,8,16,32,64,128,256,512 };
	p1 = &v_tenin[0];
       print_vector(cout,v_tenin);
   vector<int> v_tenin2{ 10,20,40,80,160,320,640,1280,2560,5120 };
	p2 = &v_tenin2[0];
	for (int i = 0; i < 10; ++i)
		p2[i] = p1[i];
       print_vector(cout,v_tenin2); 
}
    catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
    catch (...) {
    cerr << "exception\n";
}