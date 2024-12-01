// sort_algorithm.cpp: 定义应用程序的入口点。
//
#include <iomanip>
#include <stdio.h>
#include "sort_algorithm.h"

using namespace std;

int BubbleSort(int numArray[], uint32_t size)
{
	if (numArray == nullptr || size <= 0)
	{
		cout << "input patameter eror: numArray is nullptr or size = " << size << "(<= 0)" << endl;
		return -1;
	}

	int temp = 0;
	
	for (uint32_t i = 0; i < size - 1; i++) {
		bool  swap = false;
		for (uint32_t j = 0; j < size - i - 1; j++)
		{
			if (numArray[j] > numArray[j + 1]) {
				temp = numArray[j + 1];
				numArray[j + 1] = numArray[j];
				numArray[j] = temp;
				swap = true;
			}
		}
		if (swap == false) {
			break;
		}
	}
	return 0;
}

void PrintArr(int arr[], uint32_t size)
{
	if (arr == nullptr || size <= 0)
	{
		cout << "input patameter eror: arr is nullptr or size = " << size << "(<= 0)" << endl;
		return ;
	}
	for (uint32_t i = 0; i < size; i++) {
		cout << left << setw(4) << arr[i] << " ";
	}
	cout << endl;
	cout << endl;
	return;
}

int SelectSort(int numArray[], uint32_t size)
{
	if (numArray == nullptr || size <= 0)
	{
		cout << "input patameter eror: numArray is nullptr or size = " << size << "(<= 0)" << endl;
		return -1;
	}

	for (uint32_t i = 0; i < size - 1; i++) {
		int k = 0;
		for (uint32_t j = 0; j < size - i - 1; j++)
		{
			if (numArray[k] >= numArray[j + 1]) {
			}
			else {
				k = j + 1;
			}
		}
		int temp = numArray[size - 1 - i];
		numArray[size - 1 - i] = numArray[k];
		numArray[k] = temp;
	}
	return 0;
}

int InsertSort(int numArray[], uint32_t size)
{
	if (numArray == nullptr || size <= 0)
	{
		cout << "input patameter eror: numArray is nullptr or size = " << size << "(<= 0)" << endl;
		return -1;
	}

	for (uint32_t i = 1; i < size; i++) {
		int value = numArray[i];
		int position = i;
		//for (uint32_t j = i - 1; j >= 0; j--)
		//{
		//	if (numArray[j] > value) {
		//		numArray[j + 1] = numArray[j];
		//	}
		//	else {
		//		position = j;
		//		break;
		//	}
		//}
		while (position >= 0 && numArray[position - 1] > value) {
			numArray[position] = numArray[position - 1];
			position--;
		}
		numArray[position] = value;
	}
	return 0;
}

int MergeRecursionSort(int numArray[], uint32_t size)
{
	if (numArray == nullptr || size <= 0)
	{
		cout << "input patameter eror: numArray is nullptr or size = " << size << "(<= 0)" << endl;
		return -1;
	}
	int *temp = new int[size];
	InternalRecusionSort(temp, numArray,  0, size - 1);
	return 0;
}

void InternalRecusionSort(int* temp, int numArray[], uint32_t left, uint32_t right)
{
	if (left < right) {
		int middle = (left + right) / 2;
		InternalRecusionSort(temp, numArray, left, middle);
		InternalRecusionSort(temp, numArray, middle + 1, right);
		MergeArray(temp, numArray, middle, left, right);
	}
}

void MergeArray(int* temp, int numArray[], uint32_t middle, uint32_t left, uint32_t right)
{
	int i = left;
	int j = middle + 1;
	int k = 0;

	while (i <= middle && j <= right) {
		temp[k++] = numArray[i] <= numArray[j] ? numArray[i++] : numArray[j++];
	}
	while (i <= middle) {
		temp[k++] = numArray[i++];
	}
	while (j <= right) {
		temp[k++] = numArray[j++];
	}
	for (int i = left; i <= right; i++)
	{
		numArray[i] = temp[i - left];
	}
}

int MergeIterationSort(int *numArray0, uint32_t size)
{
	
	int numArray[10] = { 13, 108, 25, 19, 229, 35982, -100, -10, 0 - 1 };
	if (numArray0 == nullptr || size <= 0)
	{
		cout << "input patameter eror: numArray is nullptr or size = " << size << "(<= 0)" << endl;
		return -1;
	}
	int leftMin, leftMax, rightMin, rightMax;
	for (int i = 1; i < size; i *= 2) {
		//cout << "1111111111111" << endl;
		//system("pause");
		int temp[10] = {0};
		for (leftMin = 0; leftMin < size; leftMin = rightMax) {
			rightMin = leftMax = leftMin + i;
			rightMax = rightMin + i;
			//cout << "222222222222" << endl;
			//system("pause");
			if (rightMax > size) {
				rightMax = size;
			}
			int next = 0;
			while (leftMin <leftMax && rightMin < rightMax)
			{
				//cout << "33333333" << endl;
				//system("pause");
				if (numArray[leftMin] < numArray[rightMin]) {
					temp[next++] = numArray[leftMin++];
				}
				else {
					temp[next++] = numArray[rightMin++];
				}
			}
			int k = 0;
			while (leftMin < leftMax) {
				numArray[rightMax - k - 1] = numArray[leftMin++];
				//cout << "44444444444" << endl;
				//system("pause");
			}
			int kk = 0;
			while (next > 0) {
				numArray[leftMax-i +kk ] = temp[kk];
				next--;
				kk++;
				//cout << "555555555" << endl;
				//system("pause");
			}
		}
	}
	PrintArr(numArray, 10);
	return 0;
}

static uint32_t Partition(int *arr, uint32_t low, uint32_t high)
{
	int pivot = arr[low];
	while (low < high) {
		while (low < high && arr[high] >= pivot) --high;
		arr[low] = arr[high];
		while (low < high && arr[low] <= pivot) ++low;
		arr[high] = arr[low];
	}
	arr[low] = pivot;
	return low;
}

static void qsort(int* arr, uint32_t low, uint32_t high)
{
	int piovtIndex = Partition(arr, low, high);
	qsort(arr, low, piovtIndex - 1);
	qsort(arr, piovtIndex + 1, high);
}

int QuickSort(int numArray[], uint32_t size)
{
	if (numArray == nullptr || size <= 0)
	{
		cout << "input patameter eror: numArray is nullptr or size = " << size << "(<= 0)" << endl;
		return -1;
	}
	qsort(numArray, 0, size - 1);

	return 0;
}

.10..3