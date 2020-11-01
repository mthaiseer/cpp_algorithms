
#include <iostream>
#include <string>

using namespace std;

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	string s0;
	string s1 ("Hello");
	string s2 = "Hello world";
	char carr[] = {'a', 'b', 'c', '\0'};
	string s4(carr);

	string s5(s4);

	cout << s0 << endl;
	cout << s1 << endl;
	cout << s2 << endl;
	cout << s4 << endl;
	cout << s5 << endl;

	//empty
	if (s0.empty()) {
		cout << "s0 is empty " << endl;
	}

	//append, ++
	s0.append("I am appended");
	cout << "After append : " << s0 << endl;

	s0 = s0 += " again added";
	cout << "again append : " << s0 << endl;


	//clear /length
	cout << "S0 length " << s0.length() << endl;
	s0.clear();
	cout << "S0 length " << s0.length() << endl;

	//comapre s0.compare(s1), >, < operators
	string mango = "mango";
	string apple = "apple";

	//+ve mango is greater than apple lexically
	int i = mango.compare(apple);
	cout << i << endl;

	//-ve apple lesser than mango lexically
	i = apple.compare(mango);
	cout << i << endl;

	//0 if both are same
	i = apple.compare(apple);
	cout << i << endl;

	//S[i] to access charAt
	cout << "1st char in s2 : " << s2[1] << endl;

	//find index s0.find("india")/remove string from word
	string toremove = "my";
	string mystring  = "i love my india";
	int findex = mystring.find(toremove);
	cout << "Index of " << toremove << " is " << findex << endl;
	mystring.erase(findex,  toremove.size());
	cout << "after erase : " << mystring << endl;


	//ierate characters / using iterator it.begin, it.end()/foreach

	//with for loop
	for (int i = 0; i < mystring.size(); i++) {
		cout << mystring[i] << ":";
	}
	cout << endl;

	for (auto i = mystring.begin(); i != mystring.end(); i++) {
		cout << *i << ":";
	}
	cout << endl;

	for (char c : mystring) {
		cout << c << ":";
	}
	cout << endl;

	return 0;

}