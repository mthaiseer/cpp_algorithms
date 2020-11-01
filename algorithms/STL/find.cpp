#include <iostream>
#include <algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {1, 2, 3, 5};
	int n = sizeof(arr) / sizeof(int);
	int input;

	cin >> input;

	//find in an array
	auto location  = find(arr, arr + n, input);

	int index = location - arr;

	//if index is equals to n then item not present
	if (index ==  n) {
		cout << "Element is " << input << " not found" << endl;
	} else {
		cout << "Position of " << input << " is " << index << endl;
	}

	return 0;


}