#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};

int main(){
	// khoi tao con tro head va 3 nut
	
	Node *head = NULL;
	Node *one = NULL;
	Node *two = NULL;
	Node *three = NULL;
	// gan lan luot gia tri
	one -> data = 1;
	head = one;
	two -> data = 2;
	one->next = two;
	three -> data = 3;
	two->next = three;
	// cho co tro three tro vao nullptr
	three -> next = NULL;
	// in ra ket qua
	while(head != NULL){
		cout << head->data <<" ";
		head = head -> next;
	}
}

