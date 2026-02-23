#include "complex.h"

#include <iostream>
#include <cmath>
using namespace std;

//Default constructor
Complex::Complex(){
	re = 0;
	im = 0;
}
//Constructor with parameters
Complex::Complex(double r, double i){
	re = r;
	im = i;
}

//Methods
	//Getter
		double Complex::GetReal(){
				return re;
			}
		double Complex::GetIm(){
				return im;
			}

	//Setter
		void Complex::SetReal(double r){
			re=r;
		}		
		
		void Complex::SetIm(double i){
			im = i;
		}
		
		void Complex::SetComplex(double r, double i){
			re = r;
			im = i;
		}

		void Complex::Read() {
			double re, im;
			cout<<"\nReal Part: ";
			cin>>re;
			cout<<"Imaginary Part: ";
			cin>>im;
			SetComplex(re,im);
		}
		void Complex::Print() {
			cout<<re<<" + "<<im<<"i";
		}

		double Complex::Modulus() {
			double mod;
			mod = sqrt(re * re + im * im);
			return mod;
		}
		
