#include<iostream>

using namespace std;

/**

   base case : n ==0 || n == 1 then n

  recursive case : return fib(n-1)+ fib(n-2);

**/

int fib(int n) {

	if (n == 0 || n == 1) {
		return n;
	}

	return fib(n - 1) + fib(n - 2);

}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int t;
	cin >> t;

	while (t--) {

		int n;
		cin >> n;

		cout << fib(n) << endl;

	}



	return 0;


}