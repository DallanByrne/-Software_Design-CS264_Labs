#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>
#include <ctime>
#include "MyComplex.h"

using namespace std;
/*
class MyComplex{
	
	MyComplex::MyComplex{
			this->real = 0;
			this->imagin = 0;
	}
	
	MyComplex(realNum, imaginNum){
		this->real = realNum;
		this->imagin = imaginNum;
	}

	double MyComplex::getReal(){	return this->real;	}

	double MyComplex::getImage(){	return this->imagin;	}

	void MyComplex::setReal(realNum)
	{
		this->real = num;
	}

	void MyComplex::setImage(imaginNum)
	{
		this->imagin = imaginNum;
	}

	void MyComplex::print(){
		cout<< this->real << "+" << this->imagin <<"i";
	}

	MyComplex::MyComplex Add(const MyComplex &z){
		real = new double(*z.real);
		imagin = z.imagin;
	}
	
};
*/
int main(){

	MyComplex num1(3,7);
	/*MyComplex num2();

	num1.setReal(4);
	num1.setImage(2);

	num2 = setReal(4);
	num2 = setImage(2);
	
	MyComplex res = num1.Add(num2);*/
	//num1.print();
return 0;
}
