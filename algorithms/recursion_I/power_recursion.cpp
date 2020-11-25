#include<iostream>

using namespace std;

int pow(int a, int n) {

	if (n == 1) {
		return a;
	}

	return a * pow(a , n - 1);

}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << pow(10, 3) << endl;


	return 0;


}