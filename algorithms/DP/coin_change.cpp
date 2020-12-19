#include<iostream>
#include<climits>

using namespace std;

int coinChangeDP(int coins[], int n, int S) {

	if (S == 0) {
		return 0;
	}

	int dp[S + 1];
	dp[0] = 0;

	for (int i = 1; i <= S; i++) {
		dp[i] = INT_MAX;
	}

	for (int i = 1; i <= S; i++) {

		for (int j = 0; j < n; j++) {

			if (coins[j] <= i) {
				int sub = dp[i - coins[j]];

				if (sub != INT_MAX) {

					dp[i] = min(dp[i], sub + 1);
				}

			}

		}


	}

	for (int i = 0; i <= S; i++) {
		cout << dp[i] << " ";
	}
	cout << "\n";

	return dp[n];

}

int coinChangeRecursion(int coins[], int n, int S) {

	if (S == 0) {
		return 0;
	}

	int result = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (coins[i] <= S) {
			int sub  = coinChangeRecursion(coins, n, S - coins[i]);
			result = min(result, sub + 1);
		}
	}

	return result;

}



int main() {


#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int coins[] {1, 7, 10};
	int S = 15;

	int n = sizeof(coins) / sizeof(int);

	//cout << coinChangeRecursion(coins, n, S) << endl;
	cout << coinChangeDP(coins, n, S) << endl;

	return 0;


}