#pragma once

#include<iostream>
#include<cstdlib>

using namespace std;

/*--------------------Exemplo 1----------------------*/
template<class T>
void insertionSortOne(T data[], int n) {
	for (int i = 1, j; i < n; i++) {
		T tmp = data[i];
		for (j = i; j > 0 && tmp < data[j - 1]; j--)
			data[j] = data[j - 1];
		data[j] = tmp;
	}
}
/*---------------------------------------------------*/

/*--------------------Exemplo 2----------------------*/
template<class T>
void insertionSortTwo(T data[], int n) {
	int i,  index;
	T value;
	for (int i = 0; i < n; i++) {
		value = data[i];
		index = i;
		while (index > 0 && data[index - 1] > value)
		{
			data[index] = data[index - 1];
			index--;
		}
		data[index] = value;
	}
}
/*---------------------------------------------------*/