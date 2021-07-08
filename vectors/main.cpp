#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main()
{
	vector<vector<int>> V

	{
		{1, 2, 3, 4},
		{5, 6, 7, 8},
		{9, 10, 11, 12 }

	};

	for(int i=0; i < V.size(); i++){
		for( int j=0; j < V[i].size(); j++ ){
			cout << V[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}


/*

1 D Array Implementation

int main()
{
	vector<int> V(100, 0);
	for(int i = 0; i <= V.size(); i++){
		cout << V[i];
	}		
	return 0;
}

*/