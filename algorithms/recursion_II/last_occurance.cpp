#include<iostream>

using namespace std;


int lastOccurance(int *a, int x, int n) {
	if (n == 0) {
		return -1;
	}

	if (a[n] ==  x) {
		return n;
	}

	return lastOccurance(a, x, n - 1);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 5, 6, 3, 5};
	int x = 3;

	int size = sizeof(arr) / sizeof(int);

	cout << lastOccurance(arr, x,  size - 1) << endl;


	return 0;


}