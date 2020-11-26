#include<iostream>

using namespace std;

int  toDigit(char *a, int n) {

	if (n == 0) {
		return 0;
	}

	int digit  = a[n - 1] - '0';
	int subProb = toDigit(a, n - 1);

	return  subProb * 10 + digit;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif



	char s[] = "1234";
	int size = 4;

	int x = toDigit(s, size);
	cout << x << endl;

	return 0;


}