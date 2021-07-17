#include <bits/stdc++.h>

using namespace std;

vector<bool> get_it_done(vector<bool> Vec){
	for(int i = 2; i <= sqrt(Vec.size()); i++){
		for(int j = i * 2; j <= Vec.size(); j = j + i){
			Vec[j] = false;
		}
	}

	return Vec;
}

int main(){
	int size;
	vector<bool> result;
	cout << "Enter the number: ";
	cin >> size;
	vector<bool> Vec(size + 1, true);
	Vec[0] = false;
	Vec[1] = false;
	result = get_it_done(Vec);
	for(int i = 0; i < result.size(); i++){
		cout << i << " is prime: " << result[i] << endl;
	}

	return 0;
}
