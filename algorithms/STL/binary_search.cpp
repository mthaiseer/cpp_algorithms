#include<iostream>
#include<algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int arr[] = {1, 3, 5, 6, 8, 9};
	int n = sizeof(arr) / sizeof(int);
	int x;
	cin >> x;

	bool isPresent  = binary_search(arr, arr + n, x);

	if (isPresent) {
		cout << "Element is present";
	} else {
		cout << "Element not found!";
	}
	return 0;


}