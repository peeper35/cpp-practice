#include <bits/stdc++.h>

using namespace std;


void even_or_odd(int num){	
	if(num & 1){
		cout << "Number " << num << " is odd number" << endl;
	} else {
		cout << "Number " << num << " is even number" << endl;
	}
}

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;
	even_or_odd(num);
	return 0;
}
