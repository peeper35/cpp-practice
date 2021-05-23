#include <bits/stdc++.h>

using namespace std;

int main(){
	int a, b, xor_res;
	int count = 0, res;
	cout << "Enter two numbers: ";
	cin >> a >> b;
	xor_res = a ^ b;
	cout << "XOR'ing a and b gives: " << xor_res << endl;

	while(xor_res != 0){
		if(xor_res & 1 == 1){
			count++;
		}
		xor_res = xor_res >> 1;
	}

	cout << "Result: " << count << endl;
}
