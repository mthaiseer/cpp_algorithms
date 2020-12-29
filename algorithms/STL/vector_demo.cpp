#include<iostream>
#include<vector>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	//how to initialize a vector
	vector<int> a;
	vector<int> b(5, 10);
	vector<int> c(b.begin(), b.end());
	vector<int> d{1, 2, 3, 4, 5, 6};

	//iterate vector
	for (int i = 0; i < c.size(); i++) {
		cout << c[i] << "-";
	}
	cout << endl;

	//iterator
	for (auto i = d.begin(); i != d.end(); i++) {
		cout << *i << "*";
	}
	cout << endl;

	for (auto x : b) {
		cout << x << ",";
	}

	//how to dynamically build an array
	int n;
	cin >> n;
	vector<int> user;

	for (int i = 0; i < n; i++) {
		int no;
		cin >> no;
		user.push_back(no);
	}

	cout << endl;

	for (int x : user) {
		cout << x << "&";
	}
	cout << endl;




	return 0;


}