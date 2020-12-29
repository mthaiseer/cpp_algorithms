#include<iostream>

using namespace std;

int maxsumSpaceOptimized(int arr[], int n) {

	int result = 0;
	int maxsofar = -1;

	for (int i = 0; i < n; i++) {

		result = result + arr[i] < 0 ? 0 : result + arr[i];
		maxsofar = max(maxsofar, result);
	}

	return maxsofar;

}

int maxSum(int arr[], int n) {

	int dp[n] {0};

	//initialize first element in array 0 if arr[0] < 0
	if (arr[0] < 0) {
		arr[0] = 0;
	}

	int maxSoFar = -1;
	for (int i = 1; i < n; i++) {
		dp[i] = arr[i] + dp[i - 1];

		//discard -ve numbers
		if (dp[i] < 0) {
			dp[i] = 0;
		}

		maxSoFar = max(maxSoFar, dp[i]);


	}

	for (int i = 0; i < n; i++) {
		cout << dp[i] << " ";
	}
	cout << "\n";

	return maxSoFar;


}



int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	int arr[n];

	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;

		arr[i] = no;
	}

	cout << maxSum(arr, n) << endl;

	cout << "Optimized version " << endl;
	cout << maxsumSpaceOptimized(arr, n) << endl;


	return 0;



}