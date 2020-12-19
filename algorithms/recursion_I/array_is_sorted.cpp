#include<iostream>

using namespace std;

bool isAscSorted(int a[], int i) {

	if (i == 0) {
		return true;
	}

	return (a[i] > a[i - 1] && isAscSorted(a, i - 1));
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int a[] = {1, 2, 3, 4, 5, 6, 7};
	int size = sizeof(a) / sizeof(int);

	cout << isAscSorted(a, size - 1) << endl;


	return 0;


}