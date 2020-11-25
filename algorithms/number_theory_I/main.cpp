#include<iostream>

using namespace std;

int factorial(int data) {
	if ( data == 1 ) {
		return 1;
	}

	return data + factorial(data - 1);
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;
	int y;
	cin >> x >> y;

	cout << x << " --  " << y << endl;

	cout << factorial(x) << endl;
	return 0;


}