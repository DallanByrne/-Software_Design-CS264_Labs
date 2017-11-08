#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>
#include <ctime>
using namespace std;


int main(){

	srand(time(NULL));

	int n;
	cout << "Please enter an integer value: ";
	cin >> n;

	int arr[11];
	
	for(int i =0; i< 11; i++ ){

		arr[i]=0;	//Fills the array with 0s
	}
	
	int sum, total;
	int roll1, roll2;

	for(int i = 0;i < n; i++){
		
		
		roll1 = rand() % 6 + 1;		//First dice roll
		cout<< "You rolled a "<<roll1<<" and ";
		roll2 = rand() % 6 + 1;		//Second dice roll
		cout << roll2 << endl;
		
		sum = roll1 + roll2;	//Add them
		arr[sum-2]++;		//to the array
		cout << sum << " " << endl;
		total += sum;
	}
	
	cout << "Total value: "<<total << endl;
	double count = 0;
	for(int i = 0; i < 11; i++){
		count = arr[i];
		//cout << i+1 <<": "<< ((count/12) *100) << "%"<<endl;
		cout << i+2 << " rolled: " << ((count/n)*100) << "%" << endl;
	}

return 0;
}