#include<iostream>

using namespace std;


int allOccurance(int *a, int i, int n, int *out, int j, int k) {

	if (i == n) {
		return j;
	}

	if (a[i] == k ) {
		cout << "Found at " << i << endl;
		out[j] = i;
		return allOccurance(a, i + 1, n, out, j + 1, k);
	}

	return allOccurance(a, i + 1, n, out, j, k);


}
int lastOccurance(int *a, int i, int k) {
	//go deep into array
	if (i == 0) {
		return -1;
	}

	int sub_problem = lastOccurance(a + 1, i - 1, k);

	if (sub_problem == -1) {
		if (a[0] == k) {
			return 0;
		} else {
			return -1;
		}
	}

	return sub_problem + 1;
}

int firstOccurance(int *a, int i, int k) {
	if (i == 0) {
		return -1;
	}

	if (a[0] == k) {
		return 0;
	}

	int sub = firstOccurance(a + 1, i - 1, k);

	if (sub == -1) {
		return -1;
	}

	return i + 1;
}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 4, 5, 7, 8, 7};
	int size = sizeof(arr) / sizeof(int);

	int data;
	cin >> data;

	//cout << firstOccurance(arr, size, data) << endl;
	//cout << lastOccurance(arr, size, data) << endl;

	int out[100];

	int cnt = allOccurance(arr, 0, size , out, 0, data);
	for (int i = 0; i < cnt; i++) {
		cout << out[i] << " ";
	}

	return 0;


}