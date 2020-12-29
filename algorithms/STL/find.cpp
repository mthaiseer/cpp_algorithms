#include<iostream>
#include<algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 4, 5, 7};
	int n = sizeof(arr) / sizeof(int);

	int x;
	cin >> x;

	auto it  = find(arr, arr + n, x);

	int index = it - arr;

	if (index == n) {
		cout << "Item not found" << endl;
	} else {
		cout << "Item found at index " << index << endl;
	}

	return 0;
}