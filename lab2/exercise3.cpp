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

	int arr[10];
	
	int sum, total;
	int roll1, roll2;

	for(int i = 0;i < n; i++){
		
		
		roll1 = rand() % 6 + 1;
		cout<< "You rolled a "<<roll1<<" and ";
		roll2 = rand() % 6 + 1;
		cout << roll2 << endl;
		
		sum = roll1 + roll2;
		arr[sum-1]++;
		cout << sum << " " << endl;
		total += sum;
	}
	cout << "Total value: "<<total << endl;
	int count = 0;
	for(int i = 0; i < 11; i++){
		count = arr[i];
		//cout << i+1 <<": "<< ((count/12) *100) << "%"<<endl;
		cout << i+2 << " rolled: " << arr[i] << endl;
	}

return 0;
}
