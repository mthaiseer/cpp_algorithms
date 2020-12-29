#include<iostream>
#include<algorithm>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int arr[] = {1, 3, 5, 5, 5, 5, 6, 8, 9};
	int n = sizeof(arr) / sizeof(int);
	int x;
	cin >> x;

	auto lb = lower_bound(arr, arr + n, x);
	cout << lb - arr << endl;


	auto up = upper_bound(arr, arr + n, x);
	cout << up - arr << endl;

	cout << "Total occurance of " << x << "  is :" << (up - lb);
	return 0;


}