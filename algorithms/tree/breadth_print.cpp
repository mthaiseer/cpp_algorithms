#include<iostream>
#include<queue>

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

void breathFirst(Node *node) {


	if (node == NULL) {
		return;
	}

	queue<Node*> q;
	q.push(node);

	while (!q.empty()) {

		Node *n = q.front();
		cout << n->key << " ";

		q.pop();

		if (n->left != NULL) {
			q.push(n->left);
		}

		if (n->right != NULL) {
			q.push(n->right);
		}



	}


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
	root->right->right = new Node(80);

	breathFirst(root);


	return 0;


}