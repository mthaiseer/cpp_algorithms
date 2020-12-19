#include<iostream>
#include<climits>

using namespace std;

int minSteptoOne(int n, int dp[]) {


	if ( n == 1) {
		return 0;
	}

	int op1, op2, op3;

	op1 = op2 = op3 = INT_MAX;

	if (dp[n] != 0) {
		return dp[n];
	}

	if ( n % 3 == 0) {
		op1 = minSteptoOne(n / 3, dp) + 1;
	}

	if ( n % 2 == 0) {
		op2 = minSteptoOne(n / 2, dp) + 1;
	}



	op3 = minSteptoOne(n - 1, dp) + 1;


	dp[n] =   min(min(op1, op2), op3);

	return dp[n];



}

int minSteptoOneDP(int n) {

	int dp[100] {0};

	for (int i = 2; i <= n; i++) {

		int op1, op2, op3;

		op1, op2, op3 = INT_MAX;

		if (i % 3 == 0) {
			op1 = dp[i / 3];
		}

		if (i % 2 == 0) {
			op2 = dp[i / 2];
		}

		op3 = dp[i - 1];

		int min_val  = min(min(op1, op2), op3) + 1;

		dp[i] = min_val + 1;

	}

	for (int i = 0; i <= n; i++) {
		cout << dp[i] << " ";
	}

	return dp[n];

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	int dp[n + 1] {0};


	//cout << minSteptoOne(n, dp);
	cout << minSteptoOneDP(n);



	return 0;


}