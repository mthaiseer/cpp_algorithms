
#include <iostream>
#include <algorithm>
#include <string>
#include <map>
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

	/**
	  Map
	**/


	//insert
	map<string, int> m;

	//insert method 1
	m.insert(make_pair("Banana", 100));

	//insert method 2
	pair<string, int> p;
	p.first = "Apple";
	p.second = 200;

	m.insert(p);

	//insert method 3
	m["kiwi"] = 300;

	//find approch 1
	string fruit;
	cin >> fruit;

	auto it = m.find(fruit);

	if (it != m.end()) {
		cout << "price of fruit is " << fruit << " is " << m[fruit] << endl;
	} else {
		cout << "Fruit not found" << endl;
	}

	//erase
	m.erase(fruit);

	//find approch 2
	if (m.count(fruit)) {
		cout << "Approch 2 Price of fruit is " << m[fruit] << endl;
	} else {
		cout << "Fruit not found " << endl;
	}

	//iterate map
	for ( auto i : m) {
		cout << i.first << ":" << i.second << endl;
	}

	//iterate using iterator
	cout << "Iertate through iterator" << endl;
	for (auto i = m.begin(); i != m.end(); i++) {
		cout << i -> first << "::" << i -> second << endl;
	}





	return 0;

}