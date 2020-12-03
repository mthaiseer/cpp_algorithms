#include<iostream>

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

int height(Node *node) {

	if (node == NULL) {
		return 0;
	}

	return max(height(node->left), height(node->right)) + 1;

}

int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


	Node *root = new Node(10);
	root->left = new Node(20);
	root->right = new Node(30);
	root->right->left = new Node(40);
	root->right->right = new Node(50);

	cout << height(root) << endl;

	return 0;


}