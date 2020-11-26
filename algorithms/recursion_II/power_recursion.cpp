#include<iostream>

using namespace std;

/**

  if n is ODD = a * (a ^ n/2) ^ 2
  if n is EVEN =  (a ^ n/2) ^ 2

**/

int power(int a, int n) {
	if (n == 0) {
		return 1;
	}

	int subproblem  = power(a, n / 2);

	if (n & 1) {
		return a * subproblem  * subproblem;
	}

	return subproblem  * subproblem;
}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout << power(10, 5) << endl;

	cout << power(2, 4) << endl;


	return 0;


}