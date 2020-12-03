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

int size(Node *node) {

	if (node == NULL) {
		return 0;
	}

	return 1 + (size(node->left) + size(node->right));
}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *root = new Node(10);
	root->left = new Node(20);

	root->right = new Node(30);
	root->right->left = new Node(70);
	root->right->right = new Node(100);

	cout << size(root) << endl;


	return 0;


}