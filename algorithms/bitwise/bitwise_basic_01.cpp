#include<iostream>

using namespace std;

/**

 AND &
 1 & 1  = 1
 0 & 1 = 0
 0 & 1 = 1
 0 & 0 = 0


 OR |
 1 | 1 = 1
 0 | 1 = 1
 1 | 0 = 1
 0 | 0 = 0

 XOR ^
 1 ^ 1 = 0
 0 ^ 1 = 1
 1 ^ 0 = 1
 0 ^ 0 = 1

 NOT ~
 ~ 1= 0
 ~ 0 = 1


 5 ^ 5 = 101 ^ 101 = 0
 5 ^ 7 ^ 5 = 7 (eliminate )

 << left shift (multiply by 2 )
  000 101 << 1 = 001 010 = 5 * 2 = 10
  000 101 << 2 = 101 000 = 5 * 2^2

  >> right shift ( divide by 2)





**/


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	cout << (5 & 4 ) << endl;
	cout << (5 ^ 7 ^ 5) << endl;

	cout << (5 << 1) << endl; //5 * 2 =10
	cout << (5 << 2) << endl; //5 * 2^2 =20

	cout << (10 >> 1) << endl; //10 / 2 = 5
	cout << (10 >> 2) << endl; // 10 / 2^2 = 10/4 =2


}