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

void printByLine(Node *node) {

	if (node == NULL) {
		return;
	}
	queue<Node*> q;
	q.push(node);
	q.push(NULL);

	while (q.size() > 1) {

		Node *node = q.front();
		q.pop();
		if (node == NULL) {
			cout << endl;
			q.push(NULL);
			continue;
		} else {
			cout << node->key << " ";
		}

		if (node->left != NULL) {
			q.push(node->left);
		}

		if (node->right != NULL) {
			q.push(node->right);
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
	root->right->right = new Node(100);

	printByLine(root);



	return 0;


}