
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int arr[] {1, 2, 3, 3, 3, 4};
	int n = sizeof(arr) / sizeof(int);

	int input;
	cin >> input;

	bool found =  binary_search(arr, arr + n, input);
	if (found) {
		cout << "Element " << input << " found" << endl;
	} else {
		cout << "Element " << input << " not found" << endl;
	}

	auto lower = lower_bound(arr, arr + n, 3);
	cout << "Lower bound of 3 is " << (lower - arr) << endl;

	auto upper = upper_bound(arr, arr + n, 3);
	cout << "Lower bound of 3 is " << (upper - arr) << endl;





	return 0;

}