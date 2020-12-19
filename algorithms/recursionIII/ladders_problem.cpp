#include<iostream>
#include<string>

using namespace std;

int numberOfSteps(int n) {

	if ( n < 0) {
		return 0;
	}

	if ( n == 0) {
		return 1;
	}



	return  numberOfSteps(n - 3) + numberOfSteps(n - 2) + numberOfSteps(n - 1);
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;

	cout << numberOfSteps(n);

	return 0;


}