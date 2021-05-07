// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"


    // Print function for convenience 
template<class Iter>
void print(Iter f, Iter e, const string& s)
{
    cout << s << ": { ";
    while (f!=e) {
        cout << *f << ' ';
        ++f;
    }
    cout << "}\n";
}

    // 6. write a simply copy() operation
    // that copies [f1,e1) to [f2,f2+(e1–f1)) and returns f2+(e1–f1) just like the standard library copy function. Note that if f1==e1 the sequence is empty 
template<typename Iter1, typename Iter2>
Iter2 mcopy(Iter1 f1, Iter1 e1, Iter2 f2)
   {
	while (f1 != e1)
	{
		*f2 = *f1;
		++f1;
		++f2;
	}

	return f2;
    }
  
int main()
 try { 
    
    // 1. Define an array of ints with the ten elements { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 }.
    array<int, 10> intA = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    print(intA.begin(), intA.end(), "intA");
    
    // 2. Define a vector<int> with those ten elements.
    vector<int> intV = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    print(intV.begin(), intV.end(), "intV");
    
    // 3. Define a list<int> with those ten elements.
    list<int> intL = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9,};
    print(intL.begin(), intL.end(), "intL");
    
    
    // 4. Define a second array, vector, and list, each initialized as a copy of the first array, vector, and list, respectively.
    
    array<int, 10> intAC = intA;
    print(intAC.begin(), intAC.end(), "intAC");
    
    vector<int> intVC = intV;
    print(intVC.begin(), intVC.end(), "intVC");
    
    list<int> intLC = intL; 
    print(intLC.begin(), intLC.end(), "intLC");
    
    // 5. Increase the value of each element in the array by 2; increase the value of each element in the vector by 3; increase the value of each element in the list by 5.
    for (int& i : intA)
       i += 2;
    print(intA.begin(), intA.end(), "intA + 2");
       
    for (int& i : intV)
       i += 3;
    print(intV.begin(), intV.end(), "intV + 3");
       
    for (int& i : intL)
       i += 5; 
    print(intL.begin(), intL.end(), "intL + 5");  
    
    // 7. Use your copy() to copy the array into the vector and to copy the list into the array.
    mcopy(intA.begin(), intA.end(), intV.begin());
    print(intV.begin(), intV.end(), "intA values copied to intV");
    
    mcopy(intL.begin(), intL.end(), intA.begin());
    print(intA.begin(), intA.end(), "intL values copied to intA");
    
    /* 8. Use the standard library find() to see if the vector contains the value 3 and print out its
position if it does;  */
   vector<int> :: iterator vit; 
   vit = find(intV.begin(), intV.end(), 3);
     if (vit != intV.end())
       cout << "intV 3 has the position " << vit-intV.begin() << endl; 
       
     else 
       cout << "No such value found!\n";
       
   /* use find() to see if the list contains the value 27 and print out its position if
it does. */
   list<int> :: iterator lit; 
   lit = find(intL.begin(), intL.end(), 27); 
     if (lit != intL.end())
       {
          int adr = 0; 
     for (list<int> :: iterator iter = intL.begin(); iter != lit ; ++iter)
         ++adr;  
       cout << "intL 27 has the position " << adr << endl; 
       }
     else  
       cout << "No such value found!\n";
    }
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}
