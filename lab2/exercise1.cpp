#include <iostream>
using namespace std;

void my_swap(int x, int y){

	int temp;
	temp = x;
	x=y;
	y=temp;
	cout<<x<<" "<<y;
}

int main(){

	cout<<"Please insert two numbers."<<endl;
	int a,b;
	cin>>a>>b;
	my_swap(a,b);
	
	
	return 0;
}
