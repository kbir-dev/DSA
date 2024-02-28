//Deletion From End

#include<iostream>
using namespace std;

class array{
	int n; 
	int arr[5];
	public:
		array(){
			n=5;
		}
		void input();
		void deleteFromEnd();
		void display();
};

void array :: input(){
	for(int i = 0; i<n;i++){
		cin>>arr[i];
	}
}

void array :: deleteFromEnd(){
	n--;
}

void array :: display(){
	for(int i = 0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	array obj1;
	obj1.input();
	obj1.display();
	obj1.deleteFromEnd();
	obj1.display();
	obj1.deleteFromEnd();
	obj1.display();
	obj1.deleteFromEnd();
	obj1.display();
	obj1.deleteFromEnd();
	obj1.display();
	return 0;
}
