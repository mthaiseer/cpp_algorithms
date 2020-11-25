#include<iostream>

using namespace std;

/**
  X and Y have 10 apple
  X have 2 apple more than Y
  Find X and Y

  X+X+2 = 10
  2X+2 = 10 = 2X = 10-2 = 2X =8

  X= 8/2 = 4
  Y = 4+2 =6


**/

void findApples(int noApples, int excess) {

	int netApples = noApples - excess;
	int x = netApples / excess;
	int y = x + 2;

	cout << "Number of apples with X : " << x << endl;
	cout << "Number of apples with Y : " <<  y << endl;


}



int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	findApples(10, 2);
	findApples(20, 2);


	return 0;




}