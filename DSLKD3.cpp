#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	Node *next;	
};

int main(){
	// khoi tao con tro head va 4 nut
	
	Node *head = NULL;
	Node *one = NULL;
	Node *two = NULL;
	Node *three = NULL;
	Node *four = NULL;
	// khoi tao 4 node
	one = new Node();
	two = new Node();
	three = new Node();
	// gan lan luot gia tri
	one -> data = 5;
	head = one;
	two -> data = 3;
	one->next = two;
	three -> data = 7;
	two->next = three;
	four-> data =1;
	three->next =four;
	
	// cho co tro four tro vao nullptr
	four -> next = NULL;
	// in ra ket qua
	while(head != NULL){
		cout << head ->data <<" ";
		head = head -> next;
		// tim node co gia tri l� 1
		while (head!=NULL){ pos++;
		if(head->data=1)
		flag=true;
	}	cout<<"t�m th�y"<<1<<"vi tr�"<<pos<<endl;
	}
		head=head->next;
	
	if(!flag){
		cout<<"gia tri"<<1<<"kh�ng c�"<<endl;
	}	
}
