#include<iostream>
using namespace std;
	
void bubbleSort(int a[],int length){
	for(int i=0;i<length;i++){
		for(int j=0;j<length - i -1;j++){
			if(a[j]>a[j+1]){
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
}

void display(int arr[],int length){
	for(int i = 0; i<length; i++){
		cout<<arr[i]<<" ";
	}
}

int main(){
	int arr[]={9,12,14,15,11,134,560,1,453,234,110,221};
	int length = sizeof(arr)/sizeof(arr[0]);
	cout<<"Array Before Sorting: "<<endl;
	display(arr,length);
	cout<<endl;
	cout<<"Array After Sorting: "<<endl;
	bubbleSort(arr,length);
	display(arr,length);
	return 0;
}
