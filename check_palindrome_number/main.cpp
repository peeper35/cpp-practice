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
	cout << "Reverse of number " << num << " is " << result << endl;
	
	if(result == num){
		cout << "Number is palindrome" << endl;
	} else {
		cout << "Number is not palindrome" << endl;
	}

	return 0;
}
