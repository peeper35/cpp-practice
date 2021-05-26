#include <bits/stdc++.h>

using namespace std;

int main(){
	long number;
	bool flag = true;

	cout << "Enter a number: ";
	cin >> number;

	for(int j = 1; j <= number; j++ ){
		bool flag = true;

		for(int i = 2; i < j/2; i++){
			if(j%i == 0){
				flag = false;
				break;
			}
		}

		if(flag){
			cout << j <<" Prime Number" << endl;
		}
		else{
			cout << j << " Not Prime Number" << endl;
		}
	}
}