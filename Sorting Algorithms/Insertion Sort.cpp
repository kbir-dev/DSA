//Insertion Sort

#include<iostream>
using namespace std;

void insertionSort(int a[],int length){
	for(int i = 1; i<length; i++){
		int curr = a[i];
		int j = i-1;
		while(a[j]>curr && j>=0){
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = curr;
	}
}

void display(int arr[],int length){
	for(int i = 0; i<length; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[] = {5,3,2,17,6};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Before Sort , Array is : "<<endl;
	display(arr,length);
	cout<<endl;
	cout<<"After Sort , Array is : "<<endl;
	insertionSort(arr,length);
	display(arr,length);
	return 0;
}
