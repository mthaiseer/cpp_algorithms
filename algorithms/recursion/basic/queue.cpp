#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <queue>
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
	  push()
	  pop()
	  empty()
	  top()
	**/

	//max priority queue, max heap by default
	priority_queue<int> mpq;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;

		mpq.push(no);
	}

	//read priority queue
	while (!mpq.empty()) {
		cout <<  mpq.top() << ",";
		mpq.pop();
	}

	cout << endl;

	//min priority queue
	priority_queue<int, vector<int>, greater<int>> minpq;


	cin >> n;
	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;

		minpq.push(no);
	}

	//read priority queue
	while (!minpq.empty()) {
		cout <<  minpq.top() << ",";
		minpq.pop();
	}


	return 0;

}