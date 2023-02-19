#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node *next;	
};

// tao Node
Node *createNode(int x){
	Node *newNode  = new Node();
	newNode ->data = x;
	newNode -> next =NULL;
	return newNode;
}

// them node vao dau
void push(Node **head, int x){
	Node *newNode = new Node();
	newNode ->data = x;
	newNode ->next = *head;
	*head = newNode;
}

// them node vao cuoi
void append(Node **head, int x){
	Node *newNode = new Node();
	newNode -> data = x;
	newNode -> next = NULL;
	if(*head == NULL){
		*head = newNode;
	}
	else{
		Node *tmp = *head;
		while(tmp -> next != NULL){
			tmp = tmp ->next;
		}
		tmp->next = newNode;
	}
}
// them node vao vi tri pos
void insert(Node **head, int x,int pos){
	Node *newNode = new Node();
	newNode ->data = x;
	Node *tmp = *head;
	for(int i = 0; i< pos-2;i++){
		tmp = tmp->next;
	}
	newNode -> next = tmp->next;
	tmp->next = newNode;
}
// xoa node dau
void popFront(Node **head){
	if(*head == NULL) return;
	else{
		Node *tmp = *head;
		*head = (*head) -> next;
		delete tmp;
	}
}
// xoa node cuoi
void popBack(Node **head){
	if(*head == NULL) return;
	else{
		Node *tmp = *head;
		while(tmp->next->next != NULL){
			tmp = tmp->next;
		}
		tmp -> next = NULL;
	}
}
// tra ve kich thuoc cua list
int size(Node *head){
	int dem = 0;
	while(head != NULL){
		dem ++;
		head = head ->next;
	}
	return dem;
}
// xoa vi tri pos
void erase(Node **head, int pos){
	int n = size(*head);
	if(pos < 1 || pos > n) return;
	else{
		Node *tmp = *head;
		pos -=2;
		while(pos--){
			tmp = tmp ->next;
		}
		Node *k = tmp->next;
		tmp->next = k->next;
		delete k;
	}
}
// in ra list
void duyet(Node *head){
	while(head != NULL){
		cout << head->data <<" ";
		head = head->next;
	}
	cout << endl;
}


bool findx(Node *head, int value){
	while(head != NULL){
		if(head->data == value){
			return true;
		}
		head = head->next;
	}
	return false;
}
void timle(Node *head){
	while(head != NULL){
		int tmp = head->data;
		if(tmp&1){
			cout << tmp <<" ";
		}
		head = head->next;
	}
	cout << endl;
}

int main(){
	Node *head = NULL;
	append(&head,5);
	append(&head,3);
	append(&head,7);
	append(&head,1);
	cout <<"danh sach ban dau la: "; 
	duyet(head);
	// them node
	cout <<"them 4 vao nut thu 3" << endl;
	insert(&head,4,3);
	duyet(head);
	cout <<"Tim kiem 1 trong list" << endl;
	if(findx(head,1)){
		cout <<"YES"<<endl;
	}
	else{
		cout <<"NO" << endl;
	}
	cout << "Them so 999 vao dau list" << endl;
	push(&head,999);
	duyet(head);
	cout <<"Them 10000 vao cuoi list" << endl;
	append(&head,10000);
	duyet(head);
	// duyet le
	cout <<"duyet cac so le" << endl;
	timle(head);
	cout <<" danh sach sau khi thuc hien cac thao tac tren" << endl;
	duyet(head);
	// thuc hien xoa
	cout << "xoa dau list" << endl;
	popFront(&head);
	duyet(head);
	cout <<"xoa cuoi list" << endl;
	popBack(&head);
	duyet(head);
	cout <<"Xoa vi tri 2" << endl;
	erase(&head,2);
	duyet(head);
	
}

