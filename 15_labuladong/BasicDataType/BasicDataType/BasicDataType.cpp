// BasicDataType.cpp: 定义应用程序的入口点。
//

#include "BasicDataType.h"
#include<iostream>
#include<cmath>

using namespace std;
using std::endl;

int main()
{
	int a[1];
	memset(a, 127, sizeof(a));

	int b = pow(2, 7) - 1;

	cout << b << endl;

	return 0;
}
