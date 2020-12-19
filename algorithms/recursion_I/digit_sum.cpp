#include<iostream>

using namespace std;

int findSum(int d, int ans) {

	if ( d == 0) {
		return ans;
	}

	return findSum(d / 10, ans += d % 10);

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << findSum(567, 0) << endl;


	return 0;


}