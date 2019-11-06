// 선택정렬
#include <stdio.h>

void selection(int arr[], int size) {
	
	int i, j, temp, maxIdx;
	int print;

	for (i = 0; i < size - 1; i++) {
			maxIdx = i;
		
		for (j = i + 1; j < size; j++) {
			if (arr[j] < arr[maxIdx]) {
				maxIdx = j;
			}
		}

		temp = arr[i];
		arr[i] = arr[maxIdx];
		arr[maxIdx] = temp;

		for (print = 0; print < size; print++) {
			printf("%d ", arr[print]);
		}
		printf("\n");
	}
}


int main() {
	
	int array[5] = { 3,2,4,5,1 };

	selection(array, sizeof(array) / sizeof(int));
}
