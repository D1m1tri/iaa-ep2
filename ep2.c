#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(){
	srand(time(NULL));
	int min, total, passo;
	float time;
	printf("menor número testado: ");
	scanf("%i", &min);
	printf("total de números: ");
	scanf("%i", &total);
	printf("passo: ");
	scanf("%i", &passo);
	printf("\n\n");
	float QuickSortTime[total];
	float BubbleSortTime[total];
	for(int d=0; d<total;d++){
		int n = min + d*passo;
		int maxRandom = n;
		int array1[n], array2[n];
		for (int i=0; i < n; i++){
			array1[i] = rand()%1000000;
			array2[i] = array1[i];
		}
		time = Clock(1);
		QuickSort(array1, 0, n);
		QuickSortTime[d] = Clock(0);
		time = Clock(1);
		BubbleSort(array2, n);
		BubbleSortTime[d] = Clock(0);
		printf("%i - 		%.3f		%.3f\n", n,QuickSortTime[d],BubbleSortTime[d]);
	}
	printf("\n\n");
}
