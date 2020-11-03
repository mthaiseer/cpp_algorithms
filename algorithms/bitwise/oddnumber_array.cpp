#include<iostream>

using namespace std;


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	/**

		XOR
		1^1 =0
		0^1 =1
		1^0 =1
		0^0 =0

		2 , 3 , 2 ,6 , 3

		0 -000 ^
		2 -010

		R-010^
		3-011

		R-001^
		2-010

		R-011^
		6-110

		R-101
		3-011

		Final result = 110 (6 is ODD)
	**/

	int n;
	cin >> n;

	cout << (0 ^ 2) << endl;

	int result = 0;

	for (int i = 0; i < n; i++) {
		int v;
		cin >> v;
		result ^= v;
	}

	cout << "ODD number is the list is " << result;



	return 0;


}