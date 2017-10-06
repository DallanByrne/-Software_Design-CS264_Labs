#include <iostream>
using namespace std;

int gcd(int x, int y){
	
	int m;
	if(x>y){
		m=y;
	}else
		m=x;
	
	for(m;m>0;m--){

		if(x%m==0 && y%m==0){
			return m;
		}
	}
	
	return 0;
}

int main(){
	
	cout<<"Please insert two numbers."<<endl;
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<endl;
}
