#include<iostream>

using namespace std;

/**
   base case : if pointer == size*2
   recursive case :
        if(opening < size) add opening bracket and recursively call opening+1
        if(closing < opening ) add closing bracket and recursively call closing+1

**/

void generateBracket(char a[], int i, int n, int opening, int closing) {

	if (i == 2 * n) {
		a[i] =  '\0';
		cout << a << endl;
		return;
	}

	if (opening < n) {
		a[i] = '(';
		generateBracket(a, i + 1, n, opening + 1, closing);
	}

	if (closing < opening) {
		a[i] = ')';
		generateBracket(a, i + 1, n, opening, closing + 1);
	}

	return;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[100];
	generateBracket(a, 0, 2, 0, 0);

	return 0;


}