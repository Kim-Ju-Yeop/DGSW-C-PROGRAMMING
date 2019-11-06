// »ğÀÔ Á¤·Ä
#include <stdio.h>

void insertion(int arr[], int size) {
	int i, j, insData, print;

	for (i = 1; i < size; i++) {

		insData = arr[i];

		for (j = i - 1; j >= 0; j--) {

			if (arr[j] > insData) {
				arr[j + 1] = arr[j];
			}
			else {
				break;
			}
		}

		arr[j + 1] = insData;

		for (print = 0; print < size; print++) {
			printf("%d ", arr[print]);
		}

		printf("\n");
	}
}

int main() {
	int array[5] = { 1, 2, 3, 4, 5};

	insertion(array, sizeof(array) / sizeof(int));
}