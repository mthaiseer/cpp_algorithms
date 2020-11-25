#include<iostream>

using namespace std;

void multiply(int *arr, int &p, int no) {

	int carry = 0;
	for (int i = 0; i < p; i++) {

		int result  = arr[i] * no + carry;
		arr[i] =  result % 10;
		carry = result / 10;

	}

	while (carry) {
		int nextDigit = carry % 10;
		arr[p] = nextDigit;
		carry = carry / 10;
		p++;
	}



}

void factorial(int n) {

	int *arr = new int[10000];
	int size = sizeof(arr) / sizeof(int);

	int ptr = 1;

	for (int i = 0; i < size; i++) {
		arr[i] = 0;
	}

	arr[0] = 1;

	for (int i = 1; i <= n; i++) {
		multiply(arr, ptr, i);
	}

	for (int i = ptr - 1; i >= 0 ; i--) {
		cout << arr[i];
	}



}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	factorial(n);
	return 0;

}