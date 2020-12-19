#include<iostream>

using namespace std;

bool findPath(char grid[10][10], int i, int j, int m, int n, int solution[][10]) {

	//if we reached last column, we found path
	if (i == m && j == n) {

		//mark last cell has path
		solution[m][n] = 1;
		//print path
		for (int k = 0; k <= m; k++) {
			for (int l = 0; l <= n; l++) {
				cout << solution[k][l] << " ";
			}
			cout << "\n";
		}

		cout << endl;

		return true;
	}

	//if row or column exceed limit return false
	if (i > m || j > n) {
		return false;
	}

	//if cell blocked, then return false
	if (grid[i][j] == 'X') {
		return false;
	}

	//assume current cell is valid
	solution[i][j] = 1;

	//move to right
	bool rightMove = findPath(grid, i, j + 1, m, n, solution);
	//else move to down
	bool downMove = findPath(grid, i + 1, j, m, n, solution);

	//backtrack, mark solution matrix path invalid
	solution[i][j] = 0;

	if (rightMove || downMove) {
		return true;
	}

	return false;



}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	int solution[10][10] = {0};

	char maze[10][10] = {
		"0000",
		"00X0",
		"000X",
		"0X00"
	};

	int m = 4;
	int n = 4;

	bool pathexists = findPath(maze, 0, 0, m - 1, n - 1, solution);
	if (pathexists) {
		cout << "Path exists" << endl;
	} else {
		cout << "No path available" << endl;
	}

	return 0;
}