#include<bits/stdc++.h>

using namespace std;

long int factorial(int n){
	if (n == 1 || n == 0){
		// always return 1 if n greater than or equals to 1, because 0! is 1 and 1! is 1. Recursive function has to return something to move forward
		return 1;
	} else if( n == 2){
		// always return 2 if n == 2, because 2! is always 2, this will make the contribution to make the recursive function little faster
		return 2;
	}
	
	return n * factorial(n-1);
}

int main(){
	int result, num;
	cout << "Enter the number: ";
	cin >> num;
	result = factorial(num);
	cout << "Factorial of number " << num << " is " << result <<  endl;

	return 0;
}
