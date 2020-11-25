
#include<iostream>

using namespace std;

/**
 To check value is odd, check last bit 1 or 0

  5 & 1 = 101 & 001 = 001 ODD
  4 & 1 = 100 & 001 = 000 EVEN

**/
bool checkOddOrEven(int n) {
	return (n & 1 );
}
/**
  Get bit at position use & by with 1
   get bit of 5 at 1st position

   101 &
   001
  ----
   001 = means 1st poistion of 5 is 0

**/
int getBit(int n, int i) {

	int mask = (1 << i);
	int result  = n & mask;
	return result == 0 ? 0 : 1;
}

/**
  Set bit of 101 at 1 position = 111
   1. mask 1 << ith position 1 = 001<< 1= 010
   2 101 ^ 010 = 111

**/
int setBit(int n, int i) {

	int mask = (i << i);
	int result = (n ^ mask);
	return result;

}
/**
   111 clear bit at 1 = 101

   1. create  a mask 101 = 001<< 1 = 010~ = 101
   2. 111 & 101 (mask)  = 101

**/
int clearBit(int n, int i) {

	//create mask of
	int mask = (1 << i); //010
	mask = ~mask; //101
	int result = n & mask;//111 & 101 = 101
	return result; //101

}

/**
  Step 1 : clear bit a pos
  Step 2: create mask bit << pos
  Step 3 : n ^ mask

  Example : 101 => update bit at 1 to 1 = 111



**/
int updateBitAt(int n, int bit, int pos) {

	n = clearBit(n, pos);
	int mask = bit << pos;
	int result = n ^ mask;
	return result;

}

/**
   Step 1: create mask 111111 and pos=3 = 111000
   Step 2 : n ^ mask

   111111 = 111000

   111111 ^
   111000
   -------
   111000


**/

int clearBitsAtLastNPos(int n, int pos) {


	int mask = -1 << pos;

	int result = n &  mask;
	return result;
}

int clearRangeItoJ(int n, int left, int right) {
	return 0;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	//ODD or EVEN
	cout << "Is 5 is odd " << checkOddOrEven(5) << endl;
	cout << "Is 4 is odd " << checkOddOrEven(4) << endl;

	//GET bit
	//5 = 101
	cout << "1st bit of 5 is " << getBit(5, 1) << endl;
	// 7 = 111
	cout << "1st bit of 7 is " << getBit(7, 1) << endl;

	//Set bit
	// 5(101) set bit at 1st position = 111 = 7
	cout << "Set bit of 5 at 1st position " << setBit(5, 1) << endl;

	//clear bit -> clear bit 7 at 1 = 111 = 101
	cout << "Clear bit of 7 ast 1st position become 5:  " << clearBit(7, 1) << endl;

	//update bit at
	//update 5 at position 1 to 1 = 101 => 111 (7)

	cout << "Update bit of 5 at position 1 is : " << updateBitAt(5, 1, 1) << endl;

	//clear last n bits
	cout << "Clear last 3 bits of 64 " << clearBitsAtLastNPos(63, 3) << endl;


}