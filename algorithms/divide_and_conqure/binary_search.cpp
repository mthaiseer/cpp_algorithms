#include<iostream>

using namespace std;

int binarySearch(int a[], int start, int end, int x) {

	if (start > end) {
		return -1;
	}

	int mid  = (end + start) / 2;

	if (a[mid] == x) {
		return mid;
	}

	if (x > a[mid]) {
		return binarySearch(a, mid + 1, end, x);
	}

	return binarySearch(a, start, mid - 1, x);



}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 3, 4, 8, 9, 10};
	int n = sizeof(a) / sizeof(int);

	cout << binarySearch(a, 0, n - 1, 4) << endl;
	cout << binarySearch(a, 0, n - 1, 100) << endl;

	return 0;


}