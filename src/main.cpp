#include "fraction.h"
#include <iostream>

using namespace std ;


int main( int argc , char** argv ) {

	Fraction f1( 2 , 2) ;
	Fraction f2( 2 , 3) ;

	f1.Print() ; cout << " + " ; f2.Print() ; cout << " = " ;
	f1 = f1+f2 ;
	f1.Print() ; cout << endl ;

	f1.Print() ; cout << " - " ; f2.Print() ; cout << " = " ;
	f1 = f1-f2 ;
	f1.Print() ; cout << endl ;

	f1.Print() ; cout << " * " ; f2.Print() ; cout << " = " ;
	f1 = f1*f2 ;
	f1.Print() ; cout << endl ;

	f1.Print() ; cout << " / " ; f2.Print() ; cout << " = " ;
	f1 = f1/f2 ;
	f1.Print() ; cout << endl ;

	cout << "(" ; f1.Print() ; cout << ")³" ; cout << " = " ;
	f1 = f1^3 ;
	f1.Print() ; cout << endl ;

	f1.Reduce() ;
	f1.Print() ; cout << endl ;

	return 0 ;

}
