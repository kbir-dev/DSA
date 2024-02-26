#include<iostream>
using namespace std;

class array{
  int a[10];
  int n;
  public:
  array(){
      n = 0;
  }
  void insertAtLoc(int elmt,int loc);
  void display ();  
};

void array::insertAtLoc(int elmt,int loc){
		for(int i = n; i>=loc; i--){  //shifting elements to right from location
			a[i+1] = a[i];
	    }
	    a[loc]=elmt;
		n++;
} 

void array :: display(){
	for(int i = 0;i<n;i++){
		cout<<a[i]<<" ";
	}
}

int main(){
	array obj1;
	obj1.insertAtLoc(10,0);
	obj1.display();
	cout<<endl;
	obj1.insertAtLoc(30,1);
	obj1.display();
	cout<<endl;
	obj1.insertAtLoc(60,2);
	obj1.display();
	cout<<endl;
	obj1.insertAtLoc(40,1);
	obj1.display();
	cout<<endl;
	obj1.insertAtLoc(150,0);
	obj1.display();
	cout<<endl;
	return 0;
}
