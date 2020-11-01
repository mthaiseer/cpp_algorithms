#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <list>
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



	/*

	//initialize verctor
	vector<int> a;
	//intialize vector with 5 element and all are initialized with 10;
	vector<int> b(5, 10);
	//copy another vector into new vector
	vector<int> c(b.begin(), b.end());
	//intialize with value
	vector<int> d{1, 2, 3, 4, 5};

	//how to traverse through vector using for loop
	for (int i = 0; i < d.size(); i++) {
		cout << d[i] << ",";
	}
	cout << endl;

	//iterate through iterator
	for (auto it = d.begin(); it != d.end(); it++) {
		cout << *it << ",";
	}
	cout << endl;

	//using for loop
	for (int x : d) {
		cout << x << ",";
	}
	cout << endl;

	//how to accept user input to a vector
	int size {};
	vector<int> data;

	cout << "Enter N value :";
	cin >> size;

	for (int j = 0; j < size; j++) {
		int i;
		cin >> i;
		data.push_back(i);
	}

	for (int x : data) {
		cout << x << ",";
	}
	cout << endl;

	*/

	/*******************************************
	   Vector methods
	********************************************/

	//declare vector
	vector<int> mydata {1, 2, 3, 4};

	//adding item to last
	mydata.push_back(10);

	//pop_back remove value from end
	mydata.pop_back();

	//insert at given poisition
	mydata.insert(mydata.begin() + 2, 200);

	//insert at given position + repeat 3 times
	mydata.insert(mydata.begin() + 2, 3, 200);

	//erase from an index
	mydata.erase(mydata.begin() + 2);

	//erase number of elements
	mydata.erase(mydata.begin() + 2, mydata.begin() + 4);

	//size and capacity
	cout << mydata.size() << endl; //number of elements
	cout << mydata.capacity() << endl; //total allocated space in amortized

	//clear all elememnts
	//mydata.clear();


	for (int x : mydata) {
		cout << x << ",";
	}
	cout << endl;



	return 0;



}