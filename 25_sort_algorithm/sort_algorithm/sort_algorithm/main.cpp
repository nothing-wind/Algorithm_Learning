#include "sort_algorithm.h"

using namespace std;

int main()
{
	int arr1[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	int ret = BubbleSort(arr1, 10);
	if (ret != 0) {
		cout << "arr1 sort failed!"<< endl;
		return -1;
	}
	else {
		PrintArr(arr1, 10);
	}

	int arr2[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	ret = SelectSort(arr2, 10);
	if (ret != 0) {
		cout << "arr2 sort failed!" << endl;
		return -1;
	}
	else {
		PrintArr(arr2, 10);
	}

	int arr3[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	ret = InsertSort(arr3, 10);
	if (ret != 0) {
		cout << "arr3 sort failed!" << endl;
		return -1;
	}
	else {
		PrintArr(arr3, 10);
	}

	int arr4[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	ret = MergeRecursionSort(arr4, 10);
	if (ret != 0) {
		cout << "arr4 sort failed!" << endl;
		return -1;
	}
	else {
		PrintArr(arr4, 10);
	}

	//int arr5[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	//ret = MergeIterationSort(arr5, 10);
	//if (ret != 0) {
	//	cout << "arr5 sort failed!" << endl;
	//	return -1;
	//}
	//else {
	//	//PrintArr(arr5, 10);
	//}

	int arr5[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	ret = MergeRecursionSort(arr5, 10);
	if (ret != 0) {
		cout << "arr5 sort failed!" << endl;
		return -1;
	}
	else {
		PrintArr(arr5, 10);
	}

	return 0;
}