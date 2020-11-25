#include<iostream>

using namespace std;

int gcd(int a, int b) {

	cout << a << " " << b << endl;

	return b == 0 ?  a : gcd(b, a % b );

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;
	int y;
	cin >> x >> y;



	cout << gcd(x, y) << endl;
	return 0;


}