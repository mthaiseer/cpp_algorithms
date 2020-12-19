#include<iostream>
#include<string>

using namespace std;


bool isPalindrome(string text, int i, int j) {

	if (i > j) {
		return true;
	}

	return (text[i] == text[j] && isPalindrome(text, i + 1, j - 1));

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	string text = "malayalam";
	cout << isPalindrome(text, 0, text.length() - 1) << endl;


	text = "some";
	cout << isPalindrome(text, 0, text.length() - 1) << endl;


	return 0;


}