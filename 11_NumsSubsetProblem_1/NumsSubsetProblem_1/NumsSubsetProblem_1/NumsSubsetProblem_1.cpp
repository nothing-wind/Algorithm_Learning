// NumsSubsetProblem_1.cpp: 定义应用程序的入口点。
//

#include "NumsSubsetProblem_1.h"

using namespace std;

int main()
{
	vector<int> nums = { 1,2,3 };
	Solution solution;
	vector<vector<int>> result = solution.subsets(nums);
	
	cout << "[";
	for (int i = 0; i < result.size(); i++) {
		cout << " [ ";
		for (int j = 0; j < result[i].size(); j++) {
			cout << "\"" << result[i][j] << "\"" << " ";
		}
		cout << "] ";
	}
	cout << "]";
	cout << endl;
	return 0;
}
