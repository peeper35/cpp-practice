#include <bits/stdc++.h>

using namespace std;

int main(){
	long number;
	bool flag = true;

	cout << "Enter a number: ";
	cin >> number;

	for(int i = 2; i < number/2; i++){
		if(number % i == 0){
			flag = false;
			break;
		}
	}

	if(flag){
		cout << number <<" Prime Number" << endl;
	}
	else{
		cout << number << " Not Prime Number" << endl;
	}
}