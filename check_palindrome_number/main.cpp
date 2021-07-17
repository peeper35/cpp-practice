#include <bits/stdc++.h>

using namespace std;

int get_palindrome(int n){
	int reverse = 0, last_digit;
	int num = n;

	while(num > 0){
		last_digit = num % 10;
		reverse = (reverse * 10) + last_digit;
		num = num / 10;
	}

	return reverse;
}

int main(){
	int num, result;
	cout << "Enter the number: ";
	cin >> num;
	result = get_palindrome(num);
	cout << "Palindrome of number " << num << " is " << result << endl;
	
	return 0;
}
