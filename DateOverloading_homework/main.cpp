// Date class test program.
#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Date.h" // Date class definition

int main()
{
   Date d1; // defaults to January 1, 1900
   Date d2( 12, 27, 1992 ); // December 27, 1992
   Date d3( 0, 99, 8045 ); // invalid date

   cout << "d1 is " << d1 << "\nd2 is " << d2 << "\nd3 is " << d3;
   cout << "\n\nd2 += 7 is " << ( d2 += 7 );

   d3.setDate( 28, 02, 1992 );
   cout << "\n\n  d3 is " << d3;
   cout << "\n++d3 is " << ++d3 << " (leap year allows 29th)";

   Date d4( 13, 07, 2002 );

   cout << "\n\nTesting the prefix increment operator:\n"
      << "  d4 is " << d4 << endl;
   cout << "++d4 is " << ++d4 << endl;
   cout << "  d4 is " << d4;

   cout << "\n\nTesting the postfix increment operator:\n"
      << "  d4 is " << d4 << endl;
   cout << "d4++ is " << d4++ << endl;
   cout << "  d4 is " << d4 << endl;

  //new::
   cout << "\n\nTesting the prefix decrement operator:\n"
       << "  d4 is " << d4 << endl;
   cout << "--d4 is " << --d4 << endl;
   cout << "  d4 is " << d4;

   cout << "\n\nTesting the postfix decrement operator:\n"
       << "  d4 is " << d4 << endl;
   cout << "d4-- is " << d4-- << endl;
   cout << "  d4 is " << d4 << endl;

   cout << "\n\nTesting input operator >> :\n";
   Date d5;
   int dd, mm, yyyy;
   cout << "Enter dd-mm-yy:\n";
   cin >> dd >> mm >> yyyy;
   d5.setDate(dd, mm, yyyy);
   cout << d5;

   return 0;
} // end main


