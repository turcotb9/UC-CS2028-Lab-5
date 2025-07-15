#include "SearchUtils.h"

int SearchUtils::BSIt(int arr[], int size, int target) {
	//Index Numbers
	int low = 0;
	int high = size - 1;

	while (low <= high) {
		int mid = (low + high) / 2;

		if (arr[mid] == target) {
			return mid;
		}
		else if (arr[mid] < target) {
			low = mid + 1;
		}
		else {
			high = mid - 1;
		}
	}
	return -1;
}

int SearchUtils::BSRec(int arr[], int low, int high, int target) {
	if (low > high) {
		return -1;
	}

	int mid = (low + high) / 2;

	if (arr[mid] == target) {
		return mid;
	}
	else if (arr[mid] < target) {
		return BSRec(arr, mid + 1, high, target);
	}
	else {
		return BSRec(arr, low, mid - 1, target);
	}
}