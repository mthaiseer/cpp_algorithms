#include<iostream>

using namespace std;

long long fibonacci(int n) {

	if (n == 0 || n == 1 ) {
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
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
		cout << fibonacci(n) << endl;

	}



	return 0;


}