#include<iostream>

using namespace std;

int  pivot(int a[], int start, int end) {

	if (start > end) {
		return -1;
	}

	int mid = (end + start) / 2;

	if (a[mid] < a[mid - 1] && a[mid] < a[mid + 1]) {
		return mid;
	}

	if (a[mid ] > a[mid + 1] ) {
		return pivot(a, mid + 1 , end);
	}

	return pivot(a, start, mid - 1);

}

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

	int a[] = {5, 6, 1, 2, 3, 4};
	int n = sizeof(a) / sizeof(int);

	int p = pivot(a, 0, n);

	int x;
	cin >> x;

	if (x == a[p]) {
		return p;
	}

	cout << "PIVOT : " << p << endl;

	int result  = binarySearch(a, 0, p - 1, x);
	if (result == -1) {
		result = binarySearch(a, p + 1, n, x);
	}

	cout << result << endl;


	return 0;


}