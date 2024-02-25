#include<iostream>
using namespace std;

class array{
  int a[10];
  int n;
  public:
  array(){
      n = 0;
  }
  void insertAfter(int elmtAfter,int elmt);
  void insertAtEnd(int element);
  int LinearSearch(int key, int elmtAfter); 
  void display ();
};

void array::insertAfter(int elmtAfter,int elmt){ 
	   //searching elmtAfter using Linear Search
	   int loc = LinearSearch(elmtAfter, elmtAfter); 
	   if(loc != -1){
	   	    for(int i = n; i > loc; i--){ //Shifting to Right
	   			a[i] = a[i - 1]; 
		    }
		    a[loc + 1] = elmt;
		    n++;
	   }
}

void array :: insertAtEnd(int element){
	a[n] = element; //Insertion at End
	n++; 
}

int array :: LinearSearch(int key, int elmtAfter) { // Corrected the parameter list
    for(int i = 0; i < n; i++) {
        if(a[i] == elmtAfter) { // Corrected the array name
            return i;
        }
    }
    return -1;
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
	obj1.insertAfter(10,20);
	obj1.display();
	cout<<endl;
	obj1.insertAfter(20,30);
	obj1.display();
	cout<<endl;
	obj1.insertAfter(20,50);
	obj1.display();
	cout<<endl;
	obj1.insertAfter(30,60);
	obj1.display();
	cout<<endl;
	obj1.insertAfter(10,100); // This will insert 100 after the last inserted element with value 10
	obj1.display();
	cout<<endl;
}

