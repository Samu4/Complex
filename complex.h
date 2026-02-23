#ifndef COMPLEX_H
#define COMPLEX_H
#include <string>

using namespace std;

class Complex{
private:
	double re;
	double im;
	
public:
	// Default constructor
	Complex();
	
	//Constructor with parameters
	Complex(double r, double i);
	
	//Methods
		//Getter
			double GetReal();
			
			double GetIm();
			
		//Setter
			void SetReal(double r);
			
			void SetIm(double i);
			
			void SetComplex(double r, double i);
						
		
		//Get complex number from user
			void Read();
			
		//Outputs the complex number in the form (a, bi)
			void Print();
		
		//Gets the modulus of the complex number |Zi|
			double Modulus();
};

#endif
