
#include <iostream>
#include<algorithm>
#include <string>

using namespace std;

//compare helper function
bool compare(string s1, string s2) {

	//if both have same length, sort lexically
	if (s1.length() == s2.length()) {
		s1 > s2;
	}
	//sort by length
	return (s1.length() > s2.length());
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int n;
	cin >> n;
	cin.get();

	string names[100];

	for (int i = 0; i < n; i++) {
		getline(cin, names[i] );
	}
	//sort with custom comparitor
	sort(names, names + n, compare);

	for (int i = 0; i < n; i++) {
		cout << names[i] << endl;
	}



	return 0;

}