class Fraction {

	public :
		int Numerator , Denominator ;

		Fraction( int , int ) ;

		Fraction operator+( Fraction ) ;
		Fraction operator-( Fraction ) ;
		Fraction operator*( Fraction ) ;
		Fraction operator/( Fraction ) ;
		Fraction operator^(int) ;
		void Reduce() ;
		int MCD( int , int ) ;
		int MCM( int , int ) ;
		void Print( ) ;

};


