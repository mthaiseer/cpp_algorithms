#include<iostream>

using namespace std;

/**
  this method used to calculate a ^ n

  formaula = if n is Odd  =  a  (a ^ n/2) ^2
             if n is even =  (a ^ n/2) ^2

   2 ^ 2 = (2 ^ 2/2) ^ 2 = 2^ 2 = 4

**/

int fast_exponent(int a, int n) {
	if (n == 0  ) {
		return 1;
	}
	int subProblem  = fast_exponent(a, n / 2);
	//if n is odd
	if (n & 1) {
		return a * subProblem * subProblem;
	}
	return subProblem * subProblem;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	int a, n;
	cin >> a >> n;

	int result  =  fast_exponent(a, n);
	cout << result << endl;



}