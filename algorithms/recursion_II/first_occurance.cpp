#include<iostream>

using namespace std;

int firstOccurence(int *a, int x, int start, int end) {

	if ( end == 0) {
		return -1;
	}

	if (a[start] == x) {
		return start;
	}

	return firstOccurence(a, x, start + 1, end - 1);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 5, 6, 3, 5};
	int x = 5;

	int size = sizeof(arr) / sizeof(int);

	cout << firstOccurence(arr, x, 0, size - 1) << endl;

	return 0;


}