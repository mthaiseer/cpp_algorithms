
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	/**
	* Multimap
	**/

	multimap<char, string> mm;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char c;
		string s;

		cin >> c >> s;
		mm.insert(make_pair(c, s));
	}

	//query selected part of data
	auto it1 = mm.lower_bound('b');
	auto it2 = mm.upper_bound('d');

	for (auto it3 = it1; it3 != it2; it3++) {
		cout << it3->second << ",";
	}
	cout << endl;


	//iterate multimap
	for (auto i : mm) {
		cout << i.first << "  -> " << i.second << endl;
	}

	//find key and remove value

	cout << "Erasing colgate " << endl;

	auto k = mm.find('c'); //find colgate
	if (k->second == "colgate") {
		mm.erase(k);
	}


	//iterate multimap
	for (auto i : mm) {
		cout << i.first << "  -> " << i.second << endl;
	}
	cout << endl;


	return 0;

}