#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
	public:
	int data;
	node* next;
    node(int val){
		data = val;
		next = NULL;
	}		
};

void InsertAtHead(node* &head, int val){
	node* n = new node(val);
	n->next = head;
	head = n;
}

void display(node* head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* head = NULL;
	InsertAtHead(head,1);
	InsertAtHead(head,2);
	InsertAtHead(head,3);
	display(head);
	return 0;
}
	
