#include<iostream>
#include<list>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	//initialization
	list<int> l;
	list<int> l1 {1, 2, 3, 4};
	list<string> fruits {"Mango", "Pineapple", "mango"};

	//adding end of list
	fruits.push_back("Guava");

	//iteration
	for (auto i : fruits) {
		cout << i << "-->";
	}
	cout << endl;

	//sort
	fruits.sort();
	for (auto i : fruits) {
		cout << i << "-->";
	}
	cout << endl;

	//reverse
	fruits.reverse();
	for (auto i : fruits) {
		cout << i << "-->";
	}
	cout << endl;

	//adding to front
	fruits.push_front("kiwi");
	for (auto i : fruits) {
		cout << i << "-->";
	}
	cout << endl;

	//remove element from front
	cout << fruits.front() << endl; //print first element
	fruits.pop_front();
	for (auto i : fruits) {
		cout << i << "-->";
	}

	cout << endl;

	//using iterators to access elements
	for (auto it = fruits.begin(); it != fruits.end(); it++) {
		cout << *it << "**";
	}



	return 0;

}