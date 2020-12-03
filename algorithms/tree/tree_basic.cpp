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

void inorder(Node *root) {
	if (root == NULL) {
		return;
	}

	inorder(root -> left);
	cout << root->key << "->";
	inorder(root->right);
}


void preorder(Node *root) {
	if (root == NULL) {
		return;
	}
	cout << root->key << "->";
	preorder(root -> left);
	preorder(root->right);
}


void postorder(Node *root) {
	if (root == NULL) {
		return;
	}

	postorder(root -> left);
	postorder(root->right);
	cout << root->key << "->";
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

	cout << "In order******" << endl;
	inorder(root);

	cout << "Pre order ********" << endl;
	preorder(root);

	cout << "post order ********" << endl;
	postorder(root);



}