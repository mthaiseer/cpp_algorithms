#include<iostream>

using namespace std;

int bs(int *arr, int x, int start, int end) {

	if (start > end) {
		return -1;
	}

	int mid = (end + start) / 2;

	if (arr[mid] == x) {
		return mid;
	}

	if (x < arr[mid]) {
		return bs(arr, x, start, mid - 1);
	}

	return bs(arr, x, mid + 1, end);

}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 4, 5, 6};
	int x;
	cin >> x;

	int size = sizeof(arr) / sizeof(int);


	int index = bs(arr, x, 0, size - 1 );

	cout << index << endl;


	return 0;


}