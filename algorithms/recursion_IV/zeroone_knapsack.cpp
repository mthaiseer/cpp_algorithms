#include<iostream>

using namespace std;

int KS(int N, int C, int weights[], int profits[]) {

	//if all item processed or total capacity is zero
	if (N == 0 || C == 0) {
		return 0;
	}

	int ans = 0;
	int inc = 0;
	int exc = 0;
	//if current weigth less than total capacity
	if (weights[N - 1] < C) {
		//include profit and deduct from current weight from total capacity
		inc = profits[N - 1] + KS(N - 1, C - weights[N - 1], weights, profits);
	}

	//exclude current item and select next item
	exc = KS(N - 1, C, weights, profits);

	//find max
	ans = max(inc, exc);
	return ans;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//total item
	int N = 4;

	//total bag weight
	int C = 7;

	int weights[] =  {1, 2, 3, 5};
	int profits[] = {40, 20, 30, 100};

	int totalProfit  = KS(N, C, weights, profits);

	cout << totalProfit << endl;



	return 0;


}