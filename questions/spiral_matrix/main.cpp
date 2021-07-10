#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<vector<int>> V
	{
		{1, 2, 3, 99},
		{4, 5, 6, 98},
		{7, 8, 9, 97},
		{10, 11, 12, 96}
		/*
			you can change the matrix
		*/
	};

	// int top = 0;
	// int right = V[top].size() - 1;
	// int bottom = V.size()- 1;
	// int left = 0;

	int row = V.size();
	int col = V[0].size();
	int start_row = 0;
	int start_col = 0;

	cout << "End Row: " << row << " " << "Start Row: " << start_row << " " << "End Col: " << col << " " << "Start Col: " << start_col;
	cout << endl;

	while(start_row < row && start_col < col){
		for(int i = start_row; i < col; i++){
			cout << V[start_row][i];
			cout << " ";
		}
		start_row++;
		for(int i = start_row; i < row; i++){
			cout << V[i][col - 1];
			cout << " ";
		}
		col--;
		for(int i = col - 1; i >= start_col; i--){
			cout << V[row-1][i];
			cout << " ";
		}
		row--;
		for(int i = row - 1; i >= start_row; i--){
			cout << V[i][start_col];
			cout << " ";		
		}
		start_col++;

	}

	return 0;
}