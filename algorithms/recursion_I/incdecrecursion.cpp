#include<iostream>

using namespace std;

/**

 PRINT : 1 2 3 4 5

**/
void inc(int n) {

	if (n == 0) {
		return;
	}
	inc(n - 1);
	cout << n << " ";
}

/**

 PRINT : 5 4 3 2 1

**/
void dec(int n) {

	if (n == 0) {
		return;
	}

	cout << n << " ";
	inc(n - 1);



}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n = 5;
	inc(n);
	cout << endl;
	dec(n);



	return 0;


}