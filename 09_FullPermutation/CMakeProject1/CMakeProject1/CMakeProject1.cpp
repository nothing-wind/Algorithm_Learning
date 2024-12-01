// CMakeProject1.cpp: 定义应用程序的入口点。
//

#include "CMakeProject1.h"

using std::cout;
using std::endl;

int main()
{

	vector<int> nums = { 1,2,3 };
	Solution solution;
	vector<vector<int>> result = solution.permute(nums);

	cout << "[";
	for (int i = 0; i < result.size(); i++) {
		cout << " [";
		for (int j = 0; j < nums.size(); j++) {
			cout << result[i][j] << ", ";
		}
		cout << "] ";
	}
	cout<<"]";

	return 0;
}
