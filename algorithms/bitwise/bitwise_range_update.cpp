#include<iostream>

using namespace std;

/**

Mission statement: clear all last ith bit to 0
example 15 =        1111
clear last 3 bits = 1000

1. create all 1s either ~0 or -1 = 1111
2. shift 1 position  = 1111 << 3 = 1000 (mask)
3. n & mask
   1111 &  5
   1000    mask
  -------
   1000 ANS  8


**/
int clearLastIBits(int n, int i) {
	int mask = (~0 << i);
	//int mask = (-1 << i);
	return n & mask;
}

/**

	Source : (N) 11111111111111 => 11111111110001 (clear from 1 to 3 bit position)

	STEP 1 : Create a

			11111111111111 => clear all bit till 3 => 11111111110000
	          ~0 = 11111111111111<< (3+1) =  11111111110000

	          a= 11111111110000

	STEP 2: create b
            00000000000000 => 00000000000011

            (1 << 1) = 11111111111111 << 1 = 11111111111100
            11111111111100 - 1 = 00000000000011

            B = 00000000000011

    STEP 3 : mask =  a| b =

	STEP 4: N & mask

**/

int cleanBitsFromIToJ(int n, int left, int right) {

	int ones = ~0;
	int a = (ones << left + 1);
	int b = (1 << right) - 1;
	int mask = a | b;

	return n & mask;

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//INPUT 15 3
	//output 8


	// int n, i;

	// cin >> n >> i;

	// cout << clearLastIBits(n, i) << endl;

	int n = 31;
	int right = 1;
	int left = 3;

	int result  =  cleanBitsFromIToJ(n, left, right);

	cout << result << endl;


	return 0;

}