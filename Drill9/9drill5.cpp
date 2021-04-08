// Janelle Pamela Reyes Lao KZPZ24
#include "std_lib_facilities.h"

enum class Month{
    jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
  };
  
  vector<string> months = {"January","February","March","April",
                            "May", "June", "July", "August",
                            "September", "October", "November", "December"};
  
 ostream& operator << (ostream& os, Month m)
  {
     return os << months[int(m)];
} 

class Date{
   
public: 
   Date(int y, Month m, int d);
   
   int year() const {return y;}
   Month month() const {return m;}
   int day() const {return d;}
   
   void add_day(int n);
   void add_month(int n);
   void add_year(int n);

private:
   int y;
   Month m;
   int d;
   };
   
 Date::Date(int yy, Month mm, int dd)
  :y{yy}, m{mm}, d{dd}
{ 
 
   if (d < 1 || d > 31) error("invalid day");
    
   }

void Date::add_day(int n)
{ 
  d += n;
  if (d > 31) d %= 31;
   }

void Date::add_month(int n)
{
  int newM = 0; 
  if ((newM = int(m) +n) > 12)
    { 
       m = Month::jan;
       add_year(1);
       }
  else 
       m = Month(newM);
  }
  
void Date::add_year(int n)
{
  y += n;
  }
  
ostream& operator <<(ostream& os, const Date& d)
{
    return os << '(' << d.year() << ',' << d.month() << ',' << d.day() << ')' ;
  }
   
   
int main()
try { 
    Date today(1978, Month::jun, 25);
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
