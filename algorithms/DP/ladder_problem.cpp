#include<iostream>

using namespace std;



int numberOfWays(int n, int k) {

	if (n == 0) {
		return 1;
	}

	int result = 0;

	for (int i = 1; i <= k; i++) {
		cout << i << " " << n << endl;
		if (n >= 0) {
			int sub = numberOfWays(n - i, k);
			result += sub;
		}
	}
	return result;
}

int numberOfWaysTopDown(int n, int k, int dp[]) {

	if (n  ==  0) {
		return 1;
	}

	if (dp[n] != 0) {
		return dp[n];
	}

	int ways = 0;

	for (int i = 1; i <= k; i++) {
		if (i <= n) {
			int sub = numberOfWaysTopDown(n - i, k, dp);
			ways += sub;
			dp[n] = ways;

		}


	}

	return dp[n];

}

int numberOfWaysBottomUp(int n, int k) {

	int dp[n + 1] {0};

	dp[0] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= k; j++) {

			if (j <= i) {
				dp[i] = dp[i] + dp[i - j];
			}

		}
	}

	for (int i = 0; i <= n; i++) {
		cout << dp[i] << " ";
	}
	cout << "\n";

	return dp[n];

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n = 4;
	int k = 3;
	int dp[n + 1] {0};

	//cout << numberOfWays(n, k);
	//cout << numberOfWaysTopDown(n, k, dp);
	cout << numberOfWaysBottomUp(n, k);

	return 0;


}