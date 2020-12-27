#include <bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
};
int main()
{
	Node* first = new Node();
	Node* Second = new Node();
	Node* third = new Node();
	Node* four = new Node();
	Node* five = new Node();
	Node* Six = new Node();
	Node* Seven = new Node();
	Node* Eight = new Node();
	Node* Nine = new Node();

	first->left = Second;
	first->data = 5;
	first->right= third;
	
	Second->left = four;
	Second->data = 8;
	Second->right = five;
	
	third->left = NULL;
	third->right = NULL;
	third->data = 13;
	
	four->left = Six;
	four->right = Seven;
	four->data = 22;
	
	five->left = Eight;
	five->right = Nine;
	five->data = 78;
	
	Eight->data = 55;
	Eight->left=NULL;
	Eight->right= NULL;
	
	Nine->data = 63;
	Nine->left = NULL;
	Nine->right = NULL;
	
}
