#include<iostream>

using namespace std;

//char keypad[][3] = {"", "ABCD", "DEFG"};

void generateKeyPad() {

	int digit  = 2;

	for (int k = 0; keypad[digit][k] != 0; k++) {
		cout << keypad[digit][k];
	}

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	generateKeyPad();

	return 0;


}