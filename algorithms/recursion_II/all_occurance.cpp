#include<iostream>

using namespace std;

int allOcc(int *a, int key, int i, int n, int *result, int j) {

	if (i == n ) {
		return j;
	}

	if (a[i] == key ) {
		result[j] = i;
		return allOcc(a, key, i + 1, n, result, j + 1);
	}

	return allOcc(a, key, i + 1, n, result, j);
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {0, 7, 3, 7, 3};
	int result[100];

	int size = sizeof(arr) / sizeof(int);

	int key = 7;

	int cnt = allOcc(arr, key, 0, size, result, 0);

	for (int i = 0; i < cnt; i++) {
		cout << result[i] << " ";
	}

	return 0;


}