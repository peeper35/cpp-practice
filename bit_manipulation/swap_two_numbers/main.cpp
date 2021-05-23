#include <bits/stdc++.h>

using namespace std;

void swap(int num1, int num2){
	cout << "Number 1 is " << num1 << "," << "Number 2 is " << num2 << endl;
	num1 = num1 ^ num2;
	num2 = num1 ^ num2;
	num1 = num1 ^ num2;
	cout << "Swapped - Number 1 is " << num1 << "," << "Number 2 is " << num2 << endl;
}

int main() {
	int num1, num2;
	cout << "Enter two numbers: ";
	cin >> num1 >> num2;
	swap(num1, num2);
	return 0;
}