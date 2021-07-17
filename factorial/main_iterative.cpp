#include <bits/stdc++.h>

using namespace std;

long long int factorial(int n){
	long long int result = 1;

	for(int i = n; i > 1; i--){
		cout << "Result: " << result << " * " << i << endl; 
		result = result * i;
	}

	return result;
}

int main(){
	int num, result;
	cout << "Enter the number: ";
	cin >> num;
	result = factorial(num);
	cout << "Factorial of number " << num << " is " << result << endl;

	return 0;
}
