#include<iostream>
using namespace std;

void selectionSort(int arr[], int length){
	for(int i = 0; i<length-1;i++){
		for(int j=i+1; j<length; j++){
			if(arr[i]>arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}

void display(int arr[], int length){
	for(int i = 0; i<length; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]= {12,2,10,4,6,7};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sort , Array is : ";
	display(arr,length);
	cout<<endl;
	cout<<"After Sort , Array is : ";
	selectionSort(arr,length);
	display(arr,length);
	return 0;
}
