// ForIteration.cpp: 定义应用程序的入口点。
//

#include "ForIteration.h"

using namespace std;
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main()
{
	vector<int> a = { 0,1,2,3,4,5 };
	for (auto x : a) {
		x++;
	}
	
	cout << "未取引用：";
	for (auto x : a) {
		cout << x << "  ";
	}
	cout << endl;

	for (auto &x : a) {
		x++;
	}

	cout << "取引用：";
	for (auto x : a) {
		cout << x << "  ";
	}
	cout << endl;

	cout << "Hello CMake." << endl;
	return 0;
}
