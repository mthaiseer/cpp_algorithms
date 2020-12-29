#include<iostream>
#include<string>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("../input.txt", "r", stdin);
	freopen("../output.txt", "w", stdout);
#endif

	string s0;
	string s1 = "Hello World!";
	string s2("Hello World");
	string s3(s2);
	string s4 = s3;
	char c[] = {'a', 'b', 'c', '\0'};
	string s5(c);


	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s3 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	//check if string is empty
	if (s0.empty()) {
		cout << "String is empty" << endl;
	}

	//append
	s0.append("I love c++");
	s0 += " and java ";
	cout << s0 << endl;

	//remove
	cout << s0.length() << endl;
	s0.clear();
	cout << s0.length() << endl;

	//compare two strings
	string apple =  "Apple";
	string mango  = "mango";

	cout << apple.compare(mango) << endl;

	//access characters in a string
	cout << s1[0] << endl;

	//substring
	string s6 = "I love apple and banana";
	int idx = s6.find("apple");
	cout << "Index of apple is " << idx << endl;

	//remove a string from sentance
	cout << "Before remove apple : " << s6 << endl;

	s6.erase(idx, 5);
	cout << "after remove apple : " << s6 << endl;


	//WAY TO ITERATE A STRING
	//for loop
	for (int i = 0; i < s6.length(); i++) {
		cout << s6[i] << ":";
	}
	cout << endl;

	//using iterator
	for (auto it = s6.begin(); it != s6.end(); it++) {
		cout << *it << ",";
	}
	cout << endl;

	//for each loop
	for (char c : s6) {
		cout << c << "*";
	}
	cout << endl;


	return 0;


}