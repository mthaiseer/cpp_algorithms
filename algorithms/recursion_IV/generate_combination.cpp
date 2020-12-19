#include<iostream>

using namespace std;


void generate(char a[], char b[], int i, int j) {

	//base case
	if (a[i] == '\0') {
		b[j] = a[i];
		cout << b << endl;
		return;
	}

	b[j] = a[i];
	//include
	generate(a, b, i + 1, j + 1);

	//exclude
	generate(a, b, i + 1, j);




}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char a[] = "abc";
	char b[100];

	generate(a, b, 0, 0);



	return 0;


}