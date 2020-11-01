#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
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

	//stack operations
	//push
	//pop
	//top
	//empty
	stack<int> s;

	for (int i = 0; i < 5; i++) {
		s.push(i);
	}

	while (!s.empty()) {
		cout << s.top() << ",";
		s.pop();
	}



	return 0;

}