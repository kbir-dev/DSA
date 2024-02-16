//Binary Search

#include<iostream>
using namespace std;

int binarySearch(int a[],int key,int length){
	int start = 0;
	int end = length-1;
	for(int i = 0; i<length; i++){
		int mid = (start+end)/2;
		if(a[mid]==key){
			return mid;
	    }else if(a[mid]>key){
	    	end = mid-1;
		}else{
			start = mid+1;
	    }
	}
	return -1;
}

int main(){
	int arr[] = {1,2,4,6,7,10,15,18};
	int length = sizeof(arr)/4;
	int index = binarySearch(arr,18,length);
	if(index==-1){
		cout<<"Not Found";
	}else{
		cout<<"10 is at index : "<<index;
	}
	return 0;
}
