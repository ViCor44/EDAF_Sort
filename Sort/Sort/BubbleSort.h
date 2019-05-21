#pragma once

#include<iostream>
#include<cstdlib>

using namespace std;

/*--------------------Exemplo 1----------------------*/
template<class T>
void bubbleSortOne(T data[], int n) {
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (data[i] > data[j]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}
}
/*----------------------------------------------------*/