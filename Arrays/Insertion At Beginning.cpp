//Insertion At Beginning

#include<iostream>
using namespace std;

class array{
	int n;
	int a[5];
	public:
		array(){
			n=0;
		}
		void insertAtBeg(int element);
		void display();
};

void array :: insertAtBeg(int element){
	if(n!=0){
		for(int i=n-1;i>=0;i--){ //Shifting Elements to Right 
			a[i+1]=a[i];
		}
	}
	a[0] = element; //Insertion at Beginning
	n++; 
}

void array :: display(){
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	array obj1;
	obj1.insertAtBeg(10);
	obj1.display();
	cout<<endl;
	obj1.insertAtBeg(20);
	obj1.display();
	cout<<endl;
	obj1.insertAtBeg(30);
	obj1.display();
	cout<<endl;
	obj1.insertAtBeg(40);
	obj1.display();
	cout<<endl;
	obj1.insertAtBeg(50);
	obj1.display();
	cout<<endl;
}
