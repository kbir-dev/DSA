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

void InsertAtEnd(node* &head, int val){
	node* n = new node(val);
	if(head==NULL){
		head = n;
		return;
	}
	node* temp = head;
	while(temp->next!=NULL){
		temp = temp->next;
	}
	temp->next = n;
}

void deletion(node* &head,int val){
	node* temp = head;
	while(temp->next->data!=val){
		temp = temp->next;
	}
	node* toDelete = temp->next;
	temp->next = temp->next->next;
	
	delete toDelete;
}

void display(node* &head){
	node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp = temp->next;
	}
	cout<<"NULL"<<endl;
}

int main(){
	node* head = NULL;
	InsertAtEnd(head,1);
	InsertAtEnd(head,2);
	InsertAtEnd(head,3);
	deletion(head,2);
	display(head);
	return 0;
}
	
