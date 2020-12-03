#include<iostream>

using namespace std;

int countSteps(int n) {
	if (n < 0) {
		return 0;
	}

	if ( n == 0) {
		return 1;
	}

	return countSteps(n - 1) + countSteps(n - 2) + countSteps(n - 3);


}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << countSteps(4) << endl;

	return 0;


}