// BinaryHeap.cpp: 定义应用程序的入口点。
//

#include "BinaryHeap.h"

using namespace std;

int main()
{
	vector<int> array = { 5, 10, 4, 4, 3, 19, 2, 1 };

	BinaryHeap binaryHeap(array.size());

	for (int i = 0; i < array.size(); i++) {
		binaryHeap.Push(array[i]);
	}

	cout << "the origin array: ";
	for (int i = 0; i < array.size(); i++) {
		cout << array[i] << " ";
	}
	cout << endl;

	cout << "the sorted array: ";
	for (int j = 0; j < array.size(); j++) {
		cout << binaryHeap.Pop() << " ";
	}

	cout << endl;

	return 0;
}
