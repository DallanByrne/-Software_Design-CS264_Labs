#include <iostream>
#include <string>
#include <iomanip>
#include <complex>
#include <cmath>

using namespace std;

#ifndef MyComplex_h
#define MyComplex_h


class MyComplex(){
	private:
		double real;
		double imagin;
		
	public:
		complex();
		
		complex(double, double);
};

#endif