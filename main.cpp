#include <iostream>
#include "complex.h"

using namespace std;

int main() {
	
	//Objects
		Complex z1, z2;
	
	cout<<"Insert the first complex number: ";
	
	z1.Read();
	
	cout<<"\nz1 = ";
	z1.Print();
	cout<<"\nModulus of z1: |z1| = "<< z1.Modulus();
	
	
	return 0; 
}
