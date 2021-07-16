#include <bits/stdc++.h>

using namespace std;

void mergeSort(vector<int> Arr, int start, int end){
	int i = start;
	int j = end;
	int mid = (start + end) / 2;
	if(i < j && mid < j){
	cout << "#Debug: " << i << " " << j << " " << mid << endl;
	mergeSort(Arr, i, mid);
	mergeSort(Arr, mid + 1, j);
	}
}

int main(){
	vector<int> V { 5, 7, 1, 3, 9 };
	int start = 0;
	int end = V.size();
	mergeSort(V, start, end);	
	return 0;
}
