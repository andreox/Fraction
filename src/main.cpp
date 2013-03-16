#include "fraction.h"
#include <iostream>

using namespace std ;


int main( int argc , char** argv ) {

	Fraction f1( 2 , 2) ;
	Fraction f2( 2 , 3) ;

	f1 = f1+f2 ;
	cout << f1.Numerator << "/" << f1.Denominator << endl ;

	f1 = f1-f2 ;
	cout << f1.Numerator << "/" << f1.Denominator << endl ;


	return 0 ;

}