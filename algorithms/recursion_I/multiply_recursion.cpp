#include<iostream>

using namespace std;

int multiply(int n, int d) {

	if (d == 1) {
		return n;
	}

	return n + multiply(n, d - 1);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout << multiply(2, 10) << endl;

	return 0;


}