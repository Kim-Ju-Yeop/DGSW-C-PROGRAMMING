// 버블정렬
#include <stdio.h>

void bubble(int arr[], int size) {
	
	int i, j, temp; 
	int print;
	
	for (i = 0; i < size - 1; i++) {

		for (j = 0; j < (size - i) - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}

		for (print = 0; print < size; print++) {
			printf("%d ", arr[print]);
		}

		printf("\n");
	}
}

int main() {

	int array[5] = { 3,2,4,5,1 };

	bubble(array, sizeof(array) / sizeof(int));
}
