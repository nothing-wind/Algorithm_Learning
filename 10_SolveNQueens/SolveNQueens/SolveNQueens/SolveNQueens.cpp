// SolveNQueens.cpp: 定义应用程序的入口点。
//

#include "SolveNQueens.h"

using namespace std;

int main()
{
	Solution solution;
	vector<vector<string>> result = solution.solveNQueens(4);
	cout << "[";
	for (int i = 0;  i < result.size(); i++) {
		cout << " [ ";
		for (int j = 0; j < 4; j++) {
			cout <<"\"" << result[i][j] << "\"" << " ";
		}
		cout << "] ";
	}
	cout << "]";
	cout << endl;
	return 0;
}
