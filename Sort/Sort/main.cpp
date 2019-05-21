#include<iostream>
#include<cstdlib>
#include"SelectionSort.h"
#include"InsertionSort.h"
#include"BubbleSort.h"
#include"ShellSort.h"

using namespace std;

int main() {
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
	//selectionSortOne(arr, 10);
	//selectionSortTwo(arr, 10);
	//insertionSortOne(arr, 10);
	//insertionSortTwo(arr, 10);
	//bubbleSortOne(arr, 10);
	shellSortOne(arr, 10);
	for (int i = 0; i < 10; i++)
		cout << arr[i] << ", ";
	return 0;
}