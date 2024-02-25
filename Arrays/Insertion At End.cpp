//Insertion At End

#include<iostream>
using namespace std;

class array{
	int n;
	int a[5];
	public:
		array(){
			n=0;
		}
		void insertAtEnd(int element);
		void display();
};

void array :: insertAtEnd(int element){
	a[n] = element; //Insertion at End
	n++; 
}

void array :: display(){
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	array obj1;
	obj1.insertAtEnd(10);
	obj1.display();
	cout<<endl;
	obj1.insertAtEnd(20);
	obj1.display();
	cout<<endl;
	obj1.insertAtEnd(30);
	obj1.display();
	cout<<endl;
	obj1.insertAtEnd(40);
	obj1.display();
	cout<<endl;
	obj1.insertAtEnd(50);
	obj1.display();
	cout<<endl;
}
