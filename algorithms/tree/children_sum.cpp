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

bool isSum(Node *node) {

	if (node == NULL) {
		return false;
	}

	if (node->left == NULL && node->right == NULL) {
		return  true;
	}

	int sum  = 0;
	if (node->left != NULL) {
		sum += node->left->key;
	}

	if (node->right != NULL) {
		sum += node->right->key;
	}

	return (node->key == sum && isSum(node->left) && isSum(node->right));

}


int main() {

#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	Node *root = new Node(30);
	root->left = new Node(20);

	root->right = new Node(10);
	root->right->left = new Node(2);
	root->right->right = new Node(8);

	cout << isSum(root) << endl;


	return 0;


}