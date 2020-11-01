#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

bool compareByLength(string s1, string s2) {
	if (s1 == s2) {
		//if length is equal the lexically sort
		return s1 < s2;
	}
	return s1.length() > s2.length();
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	char text[100] =  "today is a rainy day";

	cout << "Original text is : " << text << endl;

	char* cptr = strtok(text, " ");

	//first element in the token
	cout << "First element in token is :: " << cptr << endl;

	//rest of the tokens
	while (cptr != NULL) {
		cptr = strtok(NULL, " ");
		cout << cptr << endl;
	}


	return 0;


}