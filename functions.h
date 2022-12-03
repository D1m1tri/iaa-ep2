#include <time.h>
void swap(int *a, int *b){
	int t = *a;
	*a = *b;
	*b = t;
}

int particao(int array[], int min, int max){
	int pivot = array[max];
	int i = min;
	for(int j = min; j < max; j++){
		if (array[j] < pivot){
			swap(&array[j], &array[i]);
			i++;
		}
	}
	swap(&array[i], &array[max]);
	return i;
}

void QuickSort(int array[], int min, int max){
	if(min < max){
		int pivot = particao(array, min, max);
		QuickSort(array, min, pivot-1);
		QuickSort(array, pivot+1, max);
	}
}

void BubbleSort(int array[], int n){
	for (int i = 1; i < n; i++){
		for (int j = 0; j < n-i; j++){
			if (array[j] < array[j+1]){
				swap(&array[j], &array[j+1]);
			}
		}
	}
}

float Clock(int reset){
	static clock_t start, end;
	if (reset == 1){
		start = clock();
	}
	end = clock();
	return 1000*(((float)(end-start))/CLOCKS_PER_SEC);
}
