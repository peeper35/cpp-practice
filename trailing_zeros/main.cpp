#include<bits/stdc++.h>

using namespace std;

int zeros(int n){
	int result = 0;
	for(int i = 5; i <= n; i = i * 5){
		result = result + (n / i);
	}
	return result;
}

int main(){
	int num, result;
	cout << "Enter the number: ";
	cin >> num;
	result = zeros(num);
	cout << "Trailing zeros in " << num << " is " << result << endl;

	return 0;
}
