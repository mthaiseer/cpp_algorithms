#include <iostream>
#include <algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 3, 3, 5};
	int n = sizeof(arr) / sizeof(int);
	int input;

	cin >> input;

	//binary search return boolean is its present
	//auto location  = find(arr, arr + n, input);
	bool isPresent = binary_search(arr, arr + n, input);
	cout << "Is " << input << " is present " << isPresent << endl;

	//lower bound return index of >= first occurance
	int* lb = lower_bound(arr, arr + n, input);
	cout << "Lower bound of " << input << " is at " << (lb - arr) << endl;

	//upper bound return index of > last occurance
	int* up = upper_bound(arr, arr + n, input);
	cout << "Lower bound of " << input << " is at " << (up - arr) << endl;

	//if we substract upper bound - lower, we get number of occurances

	cout << "Number of occurances of " << input << " is " << (up - lb) << endl;


	return 0;


}