
#include<iostream>

using namespace std;

/**
  Find odd number
  3 6 3 5 4 5 4 = 6

  XOR operator cancel out common numbers
  a ^ b ^ a = b
**/

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n ;

	/**
	7
	3 6 3 5 4 5 4
	ANS : 6
	**/

	int no;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		cin >> no;
		ans ^= no;
	}

	cout << "Odd number is " << ans << endl;

}