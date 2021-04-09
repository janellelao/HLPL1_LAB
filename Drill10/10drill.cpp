// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"

// 10.1 defining data type
struct Point{
   int x;
   int y;
   };
 
// 10.2 allows inputting of points  
istream& operator >> (istream& is, Point& p)
{
  char ch1; 
   if (is >> ch1 && ch1 != '(') {
        is.unget();
        is.clear(ios_base::failbit);
        return is;
    }

    char ch2;
    char ch3;
    int x;
    int y;
    is >> x >> ch2 >> y >> ch3;
    if (!is || ch3 != ')') {
        if (is.eof()) return is;
        error("invalid point");
    }
    p.x = x;
    p.y = y;
    return is;
  }
   
// 10.3 allows printing of points
ostream& operator << (ostream& os, Point& p)
{ 
   return os << '(' << p.x << "," << p.y << ')' << '\n';
   
   }

   
int main()
try { 
     // 10.2 prompt user and store points in vector
     cout << "Enter seven pairs of (x,y) points please!\n" ;
         
     
     vector<Point> original_points;
     
     while (original_points.size() < 7) {
        Point p;
        cin >> p;
        original_points.push_back(p);
        }
        
      // 10.3 print out the points
      for (Point p : original_points)
         cout << p << '\n';
         
         
      // 10.4 open ofstream to output points onto a file
      string ofname= "mydata.txt";
      ofstream ofs{ofname}
        
      if (!ofs) error("cannot open output file", ofname);
   
      for (Point p: original_points)
        ofs << p << '\n'; 
        ofs.close()
         
      // 10.5 close ofstream open ifstream, store points in vector called processed points
      vector<Point> processed_points;
   
      string ifname= "mydata.txt";
      ifstream ifs{ifname};
     
      if (!ifs) error("cannot open input file", ifname);
   
      for (Point p : processed_points)
        cout << p << '\n';
   
   
      
      // 10.7 compare the two vectors?
    if (original_points.size() != processed_points.size())
        cout << "Something's wrong!\n";  
      }
      
catch(exception& e)
{
    cerr << e.what() << '\n';
    return 1;
}
