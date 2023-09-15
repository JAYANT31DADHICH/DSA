#include<iostream>
using namespace std;


void printarr(int ar[],int size){
	for(int i=0;i<size;i++){
		cout<<ar[i]<<" ";
	}
	cout<<endl;
}

void sortarr(int array[],int n){
	int left=0,right=n-1,two=0;
	while(left<right){
		while(array[left]==0){
			left++;
		}
		while(array[right]==1&&left<right){
			right--;
		}

			swap(array[left],array[right]);
			left++;
			right--;
	    
	}
	left=1;
	while(left<right){
		if(array[left-1]!=array[left]){
			break;
		}
		left++;
	}
//	left=3;

	right=n-1;
	two=0;
	while(left<right&&two<right){
		while(array[left]==1){
			left++;
		}
		while(array[right]==2&&left<right&&two<right){
			right--;
		}

			swap(array[left],array[right]);
			left++;
			right--;
	    
	}
}


int main(){
	int arr[8]={0,1,0,1,2,1,2,0};
	
	sortarr(arr,8);
	printarr(arr,8);
	
	return 0;
	
}
