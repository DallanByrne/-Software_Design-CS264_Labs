#include <iostream>
#include <string>
#include <iomanip>
#include <complex>
#include <cmath>

using namespace std;

#ifndef MyComplex_h
#define MyComplex_h


class MyComplex{
	private:
		
		
	public:
		MyComplex();
		double real;
		double imagin;
		MyComplex(double , double);

		double getReal();
		void setReal(double);
		double getImage();
		void setImage(double);
		void print();

		MyComplex Add(const MyComplex &z);
		MyComplex Subtract(const MyComplex &z);
		MyComplex Multiply(const MyComplex &z);
};

#endif
