#include<iostream>

using namespace std;

bool isSorted(int *arr, int n) {

	if ( n == 0) {
		return true;
	}

	if (arr[n] > arr[n - 1]  && isSorted(arr, n - 1)) {
		return true;
	}

	return false;

}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 4, 5};
	int size = sizeof(arr) / sizeof(int);

	cout << isSorted(arr, size - 1) << endl;


	return 0;


}