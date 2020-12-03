#include<iostream>
#include <queue>

using namespace std;


struct Node {
	int key;
	Node *left;
	Node *right;

	Node(int k) {
		key = k;
		left = right = NULL;
	}
};

void printLineByLine(Node *node) {

	if (node == NULL) {
		return;
	}

	queue<Node*> q;
	q.push(node);

	while (!q.empty()) {

		int size = q.size();

		for (int i = 0; i < size; i++) {

			Node *current = q.front();
			q.pop();

			cout << current->key << " ";

			if (current->left != NULL) {
				q.push(current->left );
			}

			if (current->right != NULL) {
				q.push(current->right);
			}
		}
		cout << endl;

	}


}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	Node *root = new Node(10);
	root->left = new Node(20);

	root->right = new Node(50);
	root->right->left = new Node(60);
	root->right->right = new Node(200);

	printLineByLine(root);


	return 0;


}