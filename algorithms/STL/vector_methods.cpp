#include<iostream>
#include<vector>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	vector<int> d{1, 2, 3, 4, 5};

	//adding item to vector/push_back
	d.push_back(100);

	//remove and get item from last
	d.pop_back();

	//insert element at position 3
	d.insert(d.begin() + 3, 100);

	//insert element at position 3 repeat 5 times
	d.insert(d.begin() + 3, 5, 100);

	//erase some elements from vector
	//erase from position 2
	d.erase(d.begin() + 2);

	//erase elements from position 2 to 5;
	d.erase(d.begin() + 2, d.begin() + 5);

	//size and capacity
	cout << d.size() << endl;
	cout << d.capacity() << endl;

	for (int x : d) {
		cout << x << " ";
	}

	//clear all the elements
	d.clear();

	//check empty
	if (d.empty()) {
		cout << "Vector is empty" << endl;
	}

	//back and front
	d.push_back(10);
	d.push_back(11);
	d.push_back(12);
	cout << d.front() << endl;
	cout << d.back() << endl;

	//use reserve to initialize capacity at begining

	vector<int> v;
	v.reserve(1000); //size 1000 will be reserved and avoid unncessesary expansion
	cout << v.capacity() << endl;

	return 0;
}