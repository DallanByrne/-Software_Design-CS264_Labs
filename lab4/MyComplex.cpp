#include <iostream>
#include <iomanip>
#include <complex>
#include <cmath>
#include "MyCompilex.h"

class MyComplex{
	
	MyComplex::MyComplex(){
			this->real = 0;
			this->imagin = 0;
	}
	
	MyComplex::MyComplex(realNum, imaginNum){
		this->real = realNum;
		this->imagin = imaginNum;
	}

	double MyComplex::getReal(){	return this->real;	}

	double MyComplex::getImage(){	return this->imagin;	}

	void MyComplex::setReal( realNum)
	{
		this->real = num;
	}

	void MyComplex::setImage( imaginNum)
	{
		this->imagin = imaginNum;
	}

	void MyComplex::print(){
		cout<< getReal() << "+" << getImage() <<"i"<< endl;
	}

	MyComplex::MyComplex Add(const MyComplex &z){
		real = new double(*z.real);
		imagin = z.imagin;
	}
	
};
