

#include <iostream>

using namespace std;

class node {
public:
	int data;
	node *next;
	node(int d) {
		data = d;
		next = NULL;
	}


};
void insert_at_head(node*&head, int data) {
	if (head == NULL) {
		head = new node(data);
		return ;
	}
	node *n = new node(data);
	n -> next = head;
	head = n;

}
void insert_at_tail(node*& head, int data) {
	if (head == NULL) {
		head = new node(data);
		return ;
	}
	node *tail = head;
	while (tail -> next != NULL) {
		tail = tail -> next;
	}
	node *n = new node(data);
	tail -> next = n;

}
node* take_input() {
	int d;
	cin >> d;
	node *head = NULL;
	while (d != -1) {
		insert_at_tail(head, d); // insert_at_head(head,d);
		cin >> d;
	}
	return head;

}

void print(node*head) {
	while (head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}
ostream& operator<<(ostream &os, node* head) {
	print(head);
	return os;
}
istream& operator>>(istream &is, node*&head) {
	head = take_input();
	return is;
}

int main() {
	node*head1;
	node*head2;
	cin >> head1 >> head2;
	cout << head1 << head2;
}



