// Date class member-function definitions.
#include <iostream>
#include "Date.h"

// initialize static member at file scope; one classwide copy
const int Date::days[] = 
   { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// Date constructor
Date::Date( int d, int m, int y ) //Date::Date( int m, int d, int y ) 
{ 
   setDate( d, m, y ); 
} // end Date constructor

// set month, day and year
void Date::setDate( int dd, int mm, int yy )
{
   month = ( mm >= 1 && mm <= 12 ) ? mm : 1;
   year = ( yy >= 1900 && yy <= 2100 ) ? yy : 1900;

   // test for a leap year
   if ( month == 2 && leapYear( year ) )
      day = ( dd >= 1 && dd <= 29 ) ? dd : 1;
   else
      day = ( dd >= 1 && dd <= days[ month ] ) ? dd : 1;
} // end function setDate

// overloaded prefix increment operator 
Date &Date::operator++()
{
   helpIncrement(); // increment date
   return *this; // reference return to create a lvalue
} // end function operator++

// overloaded postfix increment operator; note that the  
// dummy integer parameter does not have a parameter name
Date Date::operator++( int )
{
   Date temp = *this; // hold current state of object
   helpIncrement(); 

   // return unincremented, saved, temporary object
   return temp; // value return; not a reference return
} // end function operator++

// add specified number of days to date
const Date &Date::operator+=( int additionalDays )
{
   for ( int i = 0; i < additionalDays; i++ )
      helpIncrement();

   return *this; // enables cascading
} // end function operator+=

// if the year is a leap year, return true; otherwise, return false
bool Date::leapYear( int testYear ) const
{
   if ( testYear % 400 == 0 || 
      ( testYear % 100 != 0 && testYear % 4 == 0 ) )
      return true; // a leap year
   else
      return false; // not a leap year
} // end function leapYear

// determine whether the day is the last day of the month
bool Date::endOfMonth( int testDay ) const
{
   if ( month == 2 && leapYear( year ) )
      return testDay == 29; // last day of Feb. in leap year
   else
      return testDay == days[ month ];
} // end function endOfMonth

//determine whether the day is the first day of a month
bool Date::startOfMonth(int day) const
{
    return day == 1;
} // end function endOfMonth


//prefix --
Date& Date::operator--()
{
    helpDecrement();
    return *this;
}

// postfix --
Date Date::operator--(int)
{
    Date temp = *this;
    helpDecrement();
    return temp;
}

// function to help increment the date
void Date::helpIncrement()
{
   // day is not end of month
   if ( !endOfMonth( day ) )
      day++; // increment day
   else 
      if ( month < 12 ) // day is end of month and month < 12
      {
         month++; // increment month
         day = 1; // first day of new month
      } // end if
      else // last day of year
      {
         year++; // increment year
         month = 1; // first month of new year
         day = 1; // first day of new month
      } // end else
} // end function helpIncrement

void Date::helpDecrement()
{
    if (!startOfMonth(this->day)) {
        this->day--;
    }
    else if (this->month == 1) {//if is 01.01.2000 -> 31.12.1999
        this->month = 12;
        this->year--;
        this->day = 31;
    }
    else if(this->month == 3 && leapYear(this->year))
    { // check if is leap year
     
            this->day = 29;
        }
}


// overloaded output operator
ostream &operator<<( ostream &output, const Date &d )
{
   static std::string monthName[ 13 ] = { "", "01", "02",
      "03", "04", "05", "06", "07", "08",
      "09", "10", "11", "12" };
   output << d.day << "-" << monthName[ d.month ] << "-" << d.year;
   return output; // enables cascading
} // end function operator<<

// overloaded input operator
istream& operator>>(istream & input,  Date & d)
{
    int dd, mm, yy;
    input >> dd;
    input >> mm;
    input >> yy;
    d.setDate(dd, mm, yy);
    return input; // enables cascading
} // end function operator>>
