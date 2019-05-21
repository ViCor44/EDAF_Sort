#include<iostream>
#include<cstdlib>
#include"SelectionSort.h"

using namespace std;

/*--------------------Exemplo 1----------------------*/
template<class T>
void selectionSortOne(T data[], int n) {

	int least, i, j;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1, least = i; j < n; j++)
			if (data[j] < data[least])
		least = j;
		swap(data[least], data[i]);
	}
}
/*---------------------------------------------------*/

/*--------------------Exemplo 2----------------------*/
template<class T>
void selectionSortTwo(T data[], int n) {

	for (int i = 0; i < n; i++) {
		int smallest = data[i];
		int smallestIndex = i;

		for (int j = i; j < n; j++) {
			if (data[j] < smallest) {
				smallest = data[j];
				smallestIndex = j;
			}
		}
		swap(data[i], data[smallestIndex]);
	}
}
