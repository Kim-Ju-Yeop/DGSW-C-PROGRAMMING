// 배열 인덱스 값 찾아내기 예제
#include <stdio.h>
int main() {
	int arr[] = { 1,3,7,11,15,17,21,24,25,29,31,34,38,42,46,50,52,58,66,72 };
	int idx;

	idx = binarySearch(arr, sizeof(arr) / sizeof(int), 55);

	if (idx == -1) {
		printf("탐색 실패");
	}
	else {
		printf("타겟 저장 인덱스 : %d", idx);
	}
	return 0;
}

int binarySearch(int arr[], int len, int target) {
	int first = 0;
	int last = len - 1;
	int mid;

	while (first <= last) {

		mid = (first + last) / 2;

		if (target == arr[mid]) {
			return mid;
		}
		else {
			if (target < arr[mid]) {
				last = mid - 1;
			}
			else {
				first = mid + 1;
			}
		}
	}
	return -1;
}
