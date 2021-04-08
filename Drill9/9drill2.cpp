// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"

struct Date {
   int y, m, d;
   Date(int y, int m, int d);
   void add_day(int n);
   };
 
Date::Date(int yy, int mm, int dd)
  :y{yy}, m{mm}, d{dd}
{ 
   if (m < 1 || m > 12) error("invalid month");
   if (d < 1 || d > 31) error("invalid day");
    
   }

void Date::add_day(int n)
{ 
  d += n;
  if (d > 31) d %= 31;
   }

ostream& operator <<(ostream& os, const Date& d)
{
    return os << '(' << d.y << ',' << d.m << ',' << d.d << ')' ;
  }
   
   
int main()
try { 
    Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);
    
    cout << "today is: " << today << '\n';
    cout << "tomorrow is: " << tomorrow << '\n';
    
     // Date invalid_date;
     // init_day(invalid_date, 2004, 13, -5);
     return 0;
  }
 
catch(exception& e) {
   cerr << e.what() << '\n';
   return 1;
   }
  
catch(...)
{
   cerr << "Unknown error!\n";
   return 2;
   } 
