#include<iostream>

using namespace std;

int waysToTile(int n) {

	if ( n <= 3) {
		return 1;
	}

	return waysToTile(n - 1) + waysToTile(n - 4);

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << waysToTile(4);

	return 0;


}