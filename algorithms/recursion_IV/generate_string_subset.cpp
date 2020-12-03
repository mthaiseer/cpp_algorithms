#include<iostream>
#include<string>

using namespace std;

void generate(string data, string substring = "", int index = 0) {

	if (index == data.length()) {
		cout << substring << endl;
		return;
	}

	generate(data, substring, index + 1);
	generate(data, substring + data[index], index + 1);


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	generate("ABC");
	return 0;
}