#include<iostream>
using namespace std;

void reverse(int array[],int size){
	int start=0;
	int end=size-1;

		while(start<end){
		swap(array[start],array[end]);
		start++;
		end--;
		
	
	}
	
}


void printArray(int array[],int size){
	for(int i=0;i<size;i++){
		cout<<" "<<array[i]<<" ";
	}
}

int main(){
	
	int arr[5]={10,2,3,4,5};
	int arrr[6]={1,2,3,4,5,6};
	
	
	reverse(arr,5);
    reverse(arrr,6);
	printArray(arr,5);
	cout<<endl;
	printArray(arrr,6);
	
	return 0;	
}
