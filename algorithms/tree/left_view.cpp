#include<iostream>
#include<queue>

using namespace std;

int maxlevel = 0;



struct Node {
	int key;
	Node *left;
	Node *right;

	Node(int k) {
		key = k;
		left = right = NULL;
	}
};

void leftViewIterative(Node *node) {

	if (node == NULL) {
		return;
	}

	queue<Node*> q;
	q.push(node);

	while (!q.empty()) {
		int size = q.size();

		for (int i = 0; i < size; i++) {

			Node *n = q.front();
			q.pop();
			if ( i == 0) {
				cout << n->key << " ";
			}

			if (n->left != NULL) {
				q.push(n->left);
			}

			if (n->right != NULL) {
				q.push(n->right);
			}


		}
	}




}

void leftViewRecursive(Node *node, int level) {
	if (node == NULL) {
		return;
	}

	if (maxlevel < level) {
		cout << node->key << " ";
		maxlevel = level;
	}

	leftViewRecursive(node->left, level + 1);
	leftViewRecursive(node->right, level + 1);
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

	cout << "Recursive solution " << endl;

	leftViewRecursive(root, 1);
	cout << "\n";

	cout << "Iterative solution " << endl;
	leftViewIterative(root);


	return 0;


}