//Dallan Byrne
//15372301

#include <iostream>
#include <algorithm>
#include <iterator>
using namespace std;

void reverse(double array[], int size){

	for(int j =size; j > 0; j--){
		cout << array[j-1] << endl;
		
	}
}

int main(){

	cout << "Insert sequence length" << endl;
	int n;	
	cin >> n;
	
	double arr[n];
	cout << "Insert a sequence of doubles" << endl;
	for(int i = 0; i < n; i++ ){

		cin >> arr[i];
	}
	
	reverse(arr,n);
	//reverse(begin(arr), end(arr));
	
	return 0;
}
