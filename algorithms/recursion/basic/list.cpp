#include <iostream>
#include <algorithm>
#include <string>
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
//list is doubly linked list in c++
	//push_back
	//push_front
	//pop_back
	//pop_front
	//insert
	//erase
	//remove
	//sort
	//reverse

	list<string> fruits{"banana", "apple", "kiwi"};

	//push to back
	fruits.push_back("guava");

	//push to front
	fruits.push_front("grape");

	//sort
	fruits.sort();

	//reverse
	fruits.reverse();

	//get from back
	fruits.pop_back();

	//pop from front
	fruits.pop_front();


	for (string f : fruits) {
		cout << f << ",";
	}

	cout << endl;


	//delete an item using erase
	auto it = fruits.begin();
	it++; //move to desired index
	it++;
	//remove index 2
	fruits.erase(it);

	auto it1 = fruits.begin();
	it1++;

	fruits.insert(it1, "lemon" );

	//iterator
	for (auto i =  fruits.begin(); i != fruits.end(); i++) {
		cout << *i << ",";
	}



	return 0;

}