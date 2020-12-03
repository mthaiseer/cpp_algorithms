#include<iostream>

using namespace std;

int mySqrt(int x, int start, int end, int ans) {

	if (start > end) {
		return ans;
	}

	int mid = (end + start) / 2;

	long long sq = (long long)mid * mid;

	if (((long long)mid * (long long)mid) >= INT_MAX) {
		end = mid;
		return mySqrt(x, start, end, ans);

	}

	if (sq == x) {
		return mid;
	}

	if (sq > x) {
		end = end - 1;
		return mySqrt(x, start, end, ans);
	}

	if ( sq <  x) {
		ans = mid;
		start = start + 1;
		return mySqrt(x, start, end, ans);
	}

	return -1;
}
int mySqrt(int x) {

	return mySqrt(x, 0, x, 0);

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	cout << mySqrt(2147395599) << endl;


	return 0;


}