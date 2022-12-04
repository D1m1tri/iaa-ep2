#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
	srand(time(NULL));
	int n;
	float time;
	scanf("%i", &n);
	int maxRandom = n;
	int array1[n], array2[n];
	printf(" - Creating 2 arrays with %i interger(s) each...\n", n);
	time = Clock(1);
	for (int i=0; i < n; i++){
		array1[i] = rand()%1000000;
		//scanf("%i", &array1[i]);
		array2[i] = array1[i];
		//printf("process %i complete\n", i+1);
	}
	time = Clock(0);
	printf(" - Process complete: Took %2fms.");
	printf("\n --- Starting QuickSort... ---\n");
	time = Clock(1);
	QuickSort(array1, 0, n);
	float QuickSortTime = Clock(0);
	printf("\n --- Starting Bubblesort... ---\n");
	time = Clock(1);
	BubbleSort(array2, n);
	float BubbleSortTime = Clock(0);
	printf("\n\n - QuickSort took %.2fms\n", QuickSortTime);
	printf(" - BubbleSort took %.2fms\n", BubbleSortTime);
}
