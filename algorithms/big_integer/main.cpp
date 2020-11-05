
#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

void multiply(int *a, int &n, int no) {

	int carry = 0;

	for (int i = 0; i < n; i++) {
		int result  = a[i] * no + carry;
		a[i] = result % 10;
		carry = result / 10;
	}

	while (carry) {
		a[n] = carry % 10;
		carry =  carry / 10;
		n++;
	}


}


void big_factorial(int number) {

	int *arr = new int[10000];
	arr[0] = 1;

	int n = 1;
	for (int i = 2; i <= number; i++) {

		multiply(arr, n, i);
	}

	for (int j =  n - 1; j >= 0; j-- ) {
		cout << arr[j] << "";
	}

	cout << endl;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int n;
	cin >> n;
	big_factorial(n);

	return 0;

}