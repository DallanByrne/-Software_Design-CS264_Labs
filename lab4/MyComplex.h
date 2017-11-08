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
		
		double getReal()
		void setReal(double)
		double getImage()
		void setImage(double)
		
		MyComplex Add(const MyComplex &z)
		MyComplex Subtract(const MyComplex &z)
		MyComplex Multiply(const MyComplex &z)

		
	};

#endif
