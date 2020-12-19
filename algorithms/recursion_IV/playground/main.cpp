#include<iostream>

using namespace std;

void generateBracket(char *a, int n, int idx, int open, int close) {

	if (idx  == 2 * n) {
		a[idx] = '\0';
		cout << a << endl;
		return;
	}

	if (open < n) {
		a[idx] = '(';
		generateBracket(a, n, idx + 1, open + 1, close);
	}

	if (close < open) {
		a[idx] = ')';
		generateBracket(a, n, idx + 1, open, close + 1 );
	}

}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[10];
	int numberOfBrackets = 10;
	generateBracket(a, numberOfBrackets, 0, 0, 0);



	return 0;


}