#include <bits/stdc++.h>

using namespace std;

int count_set_bits(int num){
	int count = 0;
	while(num != 0){
		num = num & (num - 1);
		count++;
	}
	return count;
}

int main() {
	int a, b, xor_res, res;
	cout << "Enter two number: ";
	cin >> a >> b;
	// cin >> a;
	xor_res = a ^ b;
	cout << "XOR'ing a and b gives: " << xor_res << endl;
	cout << "Result: " << count_set_bits(xor_res) << endl; 
	return 0;
}
