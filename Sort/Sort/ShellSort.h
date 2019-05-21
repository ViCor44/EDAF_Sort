#pragma once

#include<iostream>
#include<cstdlib>

using namespace std;

/*--------------------Exemplo 1----------------------*/
template<class T>
void shellSortOne(T data[], int n) {
	for (int gap = floor(n / 2); gap > 0; gap /= 2) {
		for (int i = gap; i < n; i++) {
			int j;
			T temp = data[i];
			for (j = i; j >= gap && data[j - gap] > temp; j -= gap) {
				data[j] = data[j - gap];
			}
			data[j] = temp;
		}
	}
}
/*------------------------------------------------------*/

