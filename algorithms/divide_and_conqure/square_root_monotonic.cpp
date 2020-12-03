#include<iostream>

using namespace std;

/**

 	N = 50

 	50+0/2 = 25^2 > 50
 	25+0 /2 = 12^2 > 50
 	11+0 /2 = 5 ^2 < 50   mark 5 as potantial answer
	6+11/2 = 8 ^ 2 > 50
	6 +7/2 = 6 ^2 < 50
	7+7/2  = 7 ^ 2 < 50

	exit start > end and 7 is the answer




**/
int squareRoot(int start, int end,  int n, int result) {

	if (start > end) {
		return result;
	}

	int mid = (end + start) / 2;

	//cout << start << " " << end << endl;


	if ( mid * mid == n) {
		return mid;
	}

	if (mid * mid < n) {
		result = mid;
		return squareRoot(mid + 1, end, n, result);
	}


	return squareRoot(start, mid - 1, n, result);

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int x;
	cin >> x;

	cout << squareRoot(0, x, x,  0);

	return 0;


}