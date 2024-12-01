// CompleteBinaryHeap.cpp: 定义应用程序的入口点。
//

#include "CompleteBinaryHeap.h"

using namespace std;

int main()
{
	CompleteBinaryHeap<int> cHeap(5, [](const int& a, const int& b) {return a < b; });
	cHeap.Push(4);
	cHeap.Push(10);
	cHeap.Push(-100);
	cHeap.Push(1000);
	cHeap.Push(20);
	cHeap.Push(2);

	cout << "heap size: " << cHeap.GetSize() << endl;
	cout << "sorted heap: ";
	for (int i = 0; i < 6; i++) {
		cout << cHeap.Pop() << "  ";
	}
	cout << endl;
	cout << "Hello CMake." << endl;
	return 0;
}
