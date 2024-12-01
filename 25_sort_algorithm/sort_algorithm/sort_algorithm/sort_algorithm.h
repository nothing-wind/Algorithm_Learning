// sort_algorithm.h: 标准系统包含文件的包含文件
// 或项目特定的包含文件。

#pragma once

#include <iostream>

int BubbleSort(int numArray[], uint32_t size);
int SelectSort(int numArray[], uint32_t size);
int InsertSort(int numArray[], uint32_t size);

void InternalRecusionSort(int* temp, int numArray[], uint32_t left, uint32_t right);
void MergeArray(int* temp, int numArray[], uint32_t middle, uint32_t left, uint32_t right);
int MergeRecursionSort(int numArray[], uint32_t size);
int MergeIterationSort(int numArray[], uint32_t size);

void PrintArr(int arr[], uint32_t size);

// TODO: 在此处引用程序需要的其他标头。
