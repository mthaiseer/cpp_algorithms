#include<iostream>
#include <string>

using namespace std;

string digit[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

void printDigit(int n) {

	if ( n == 0 ) {
		return;
	}

	printDigit(n / 10);
	cout << digit[n % 10] << " ";

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	printDigit(20448);

	return 0;


}