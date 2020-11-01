#include <iostream>
#include <algorithm>
#include <string>

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

	int n;
	string names[100];

	cin >> n;
	cin.get();


	for (int i = 0; i < n; i++) {
		getline(cin, names[i]);
	}

	sort(names, names + n);

	for (int i = 0; i < n; i++) {
		cout << names[i] << endl;
	}

	cout << "----Sort based on legth using custom comparitor" << endl;

	sort(names, names + n, compareByLength);

	for (int i = 0; i < n; i++) {
		cout << names[i] << endl;
	}


	return 0;


}