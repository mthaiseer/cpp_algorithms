#include<iostream>

using namespace std;


/** if last bit is set then its ODD by & 1
101 & (5)
001
----
001

110 &(6)
001
---
000


**/
bool checkOddOrEven(int d) {
	return (d & 1) == 0 ?  0 : 1;
}

/**
  To check ith i << 1 then & number
  0001 <<2

1111 &
0010
----
0010 ==1

1101
0010
-----
0000 ==0
**/
int getBit(int n, int i) {
	int mask = 1 << i;
	return (n & mask) > 0 ? 1 : 0;
}
/**
  5 = 101 |
      010 (1 postion 0<< 1 = 010)
     ------
      111  = 7
**/
int setBit(int n, int i) {
	int mask = 1 << i;
	int bit = n | mask;
	return bit;
}

/**

	statement: clean bit at 2 (5 become 1 )
	000101


	000001 <<2nd bit
	000100 ~ negate

=   111011

	000101 & (5)
	111011   (negate result )
	---------
	000001

**/
int clearBit(int n, int i) {

	int mask = ~(1 << i);
	return  n & mask;

}

/**
	Update bit at give position with 0 or 1

	1. clear bit at position
	2. shit v position by i and OR

	Statement = 0101 -> update 3rd position with 1 == 1101

	1. clear position 3
	   0001 << 3 = 1000
	   ~ 1000    = 0111

	     0101 &
	     0111
	    -------
	     0101 (cleared_n)
	2. shift v (0 or 1) by 3 (i) and OR with result
	    v = 1
	    0001<< 3 = 1000

	    0101 | (cleared_n)
	    1000
	   -------
	    1101 == 13

**/
void  updateBit(int &n, int i, int v) {

	int mask  =  ~(1 << i);
	int cleared_n = n & mask;
	n = cleared_n | (v << i);

}




int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	//Check ODD or EVEN
	// cout << "Is 7 is ODD " << checkOddOrEven(7) << endl;
	// cout << "Is 2 is even : " << checkOddOrEven(2) << endl;

	//check ith bit set
	// int n;
	// cin >> n;
	// cout << "2nd bit of " << n << " is  : " << getBit(n, 2) << endl;

	// int setB = setBit(n, 1);
	// cout << "Set bit of 5 at 1 : " << setB << endl;

	//Clear bit
	// int i, n;
	// cin >> n >> i;
	// cout << "clean 5 of bit at " << i << " :" << clearBit(n, i) << endl;

	//Update bit
	//INPUT: 5 3 1
	int n, i, v;
	cin >> n >> i >> v;


	cout << "Update " << n << " by " << i << " position with " << v << endl;
	updateBit(n, i, v);

	cout << n << endl;

	return 0;


}