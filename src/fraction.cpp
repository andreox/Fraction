#include "fraction.h"
#include <iostream>
#include <string>

using namespace std ;

Fraction::Fraction( int n , int d ) {

	try {

		if ( n == 0 ) throw "Error! Numerator 0" ;
		if ( d == 0 ) throw "Error! Denominator 0 " ;

		Fraction::Numerator = n ;
		Fraction::Denominator = d ;

	}

	catch ( string error ) {

		cout << error << endl ;

	}

}

int Fraction::MCD( int a , int b ) {

	if ( b == 0 ) return a ;

	int r = a % b ;
	if ( r == 0 ) return b ;
	while ( r != 0 ) {

		a = b ;
		b = r ;
		r = a % b ;

	}

	return b ;

}

int Fraction::MCM( int a , int b ) {

	return ((a*b)/MCD(a,b)) ;

}

Fraction Fraction::operator+( Fraction f1 ) {

	Fraction f2( 1 , 1 ) ;
	int MCM = f2.MCM( f1.Denominator , Denominator ) ;

	f2.Denominator = MCM ;
	f2.Numerator = ((MCM/Denominator)*Numerator) + ((MCM/f1.Denominator)*f1.Numerator) ;


	return f2 ;

}

Fraction Fraction::operator-(Fraction f1) {

	Fraction f2( 1 , 1 ) ;
	int MCM = f2.MCM( f1.Denominator , Denominator ) ;

	f2.Denominator = MCM ;
	f2.Numerator = ((MCM/Denominator)*Numerator) - ((MCM/f1.Denominator)*f1.Numerator) ;

	return f2 ;

}

Fraction Fraction::operator*(Fraction f1) {

	Fraction f2( 1 , 1 ) ;

	f2.Denominator = f1.Denominator * Denominator ;
	f2.Numerator = f1.Numerator * Numerator ;

	return f2 ;

}

Fraction Fraction::operator/(Fraction f1) {

	Fraction f2( 1 , 1 ) ;

	f2.Denominator = Denominator*f1.Numerator ;
	f2.Numerator = Numerator*f1.Denominator ;

	return f2 ;

}

Fraction Fraction::operator^( int n ) {

	Fraction f2( 1 , 1 ) ;
	int d = Denominator , num = Numerator ;

	for ( int i = 1 ; i < n ; i++ ) {

		d *= d ;
		num *= num ;

	}

	f2.Denominator = d ;
	f2.Numerator = num ;

	return f2 ;

}

void Fraction::Print( ) {

	cout << Numerator << "/" << Denominator << endl ;

}