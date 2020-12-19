#include<iostream>
#include<string>

using namespace std;

int numberOfSteps(int n) {


	int dp[n];
	dp[0] = 1;

	for (int i = 1; i <= n; i++) {

		int sum  = 0;

		if (i - 1 >= 0) {
			sum += dp[i - 1];
		}

		if (i - 2 >= 0) {
			sum += dp[i - 2];
		}

		if (i - 3 >= 0) {
			sum += dp[i - 3];
		}

		dp[i] = sum;

	}

	int size = sizeof(dp) / sizeof(int);

	for (int i = 0; i <= size; i++) {
		cout << dp[i] << " ";
	}

	cout << endl;

	return dp[n];


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << numberOfSteps(n);

	return 0;


}