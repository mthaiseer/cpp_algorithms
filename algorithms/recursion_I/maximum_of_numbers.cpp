#include<iostream>

using namespace std;

int maximum(int arr[], int i) {

	if ( i == 0) {
		return arr[0];
	}

	return max(arr[i], maximum(arr, i - 1) );

}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int arr[] = {7, 3, 4, 9, 16, 2};
	int size  = sizeof(arr) / sizeof(int);

	cout << maximum(arr, size - 1) << endl;


	return 0;


}