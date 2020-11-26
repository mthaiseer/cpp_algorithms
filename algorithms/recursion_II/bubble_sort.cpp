#include<iostream>

using namespace std;


void bubbleSort(int *a, int  n) {

	if (n == 1) {
		return;
	}

	for (int i = 0; i < n - 1; i++) {
		if (a[i] > a[i + 1]) {
			swap(a[i], a[i + 1]);
		}
	}
	bubbleSort(a, n - 1);


}

void bubbleSortRec(int *a, int i, int n) {

	if ( i == n - 1) {
		return;
	}

	if (a[i] > a[i + 1]) {
		swap(a[i], a[i + 1]);
		bubbleSortRec(a, i + 1, n);
	}

	bubbleSortRec(a, i, n - 1);

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] =  {12, 2, 6, 1, 20};
	int size = sizeof(arr) / sizeof(int);

	// bubbleSort(a, n);
	bubbleSortRec(arr, 0, size );

	cout << "Printing bubble rec" << endl;

	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}

	return 0;


}