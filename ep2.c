#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
	int n;
	scanf("%i", &n);
	int maxRandom = n;
	int array1[n], array2[n];
	for (int i=0; i < n; i++){
		scanf("%i", &array1[i]);
		array1[i] = array2[i];
		printf("process %i complete\n", i+1);
	}
	float time;
	printf("\n --- Starting QuickSort... ---\n");
	time = Clock(1);
	QuickSort(array1, 0, n);
	time = Clock(0);
	printf("QuickSort ended:\n\n");
	printf("QuickSort time:  %.2fms\n", time);
	printf("\n --- Starting Bubblesort... ---\n");
	time = Clock(1);
	BubbleSort(array2, n);
	time = Clock(0);
	printf("Bubblesort ended:\n\n");
	printf("BubbleSort time: %.2fms\n", time);
}
