//Deletion from Beginning

#include<iostream>
using namespace std;


void deleteFromBeg(int arr[],int length){
	for(int i = 0; i<length; i++){
		 arr[i]=arr[i+1];	 	//shift elements to left
	}
	cout<<endl;
}

void display(int arr[],int length){
	for(int i = 0;i<length;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

int main(){
	int arr[] = {3,4,5,6,7};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Deletion , Array is : "<<endl;
	display(arr,length);
	cout<<"After Deletion , Array is  : ";
	deleteFromBeg(arr,length);
	display(arr,length-1);
	cout<<"After Deletion , Array is  : ";
	deleteFromBeg(arr,length);
	display(arr,length-2);
	cout<<"After Deletion , Array is  : ";
	deleteFromBeg(arr,length);
	display(arr,length-3);
	cout<<"After Deletion , Array is  : ";
	deleteFromBeg(arr,length);
	display(arr,length-4);
	return 0;
}
