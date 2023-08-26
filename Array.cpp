#include<iostream>
using namespace std;

int arr(int num[],int size){
    for(int i=0;i<size;i++)
    cout<<num[i]<<" ";
}

int main(){
    int array[15]={2,4};
    arr(array,15);
    int size=sizeof(array)/sizeof(int);
    cout<<endl;
    cout<<size<<" "<<endl;
}

//#include<iostream>
//using namespace std;
//
//int GetMax(int num[],int n){
//	
//	int maxi=INT_MIN;
//	for(int i=0;i<n;i++){
//		maxi=max(INT_MIN,num[i]);
//	}
//	return maxi;
//}
//
//int main(){
//	
//	int size;
//	cout<<"enter the size of array"<<endl;
//	cin >> size;
//	int arr[100];
//	
//	for(int i=0;i<size;i++){
//		cout<<"enter the elements"<<" ";
//		cin>>arr[i];
//	}
//	cout << "max is "<<GetMax(arr,size);
//}

//sum of elements present in array

//int Getsum(int arr[],int n){
//	int sum=0;
//	for(int i=0;i<n;i++){
//		sum=sum+arr[i];
//	}
//	return sum;
//}
//int main(){
//	int size;
//	cin>>size;
//	int array[100];
//	for(int i=0;i<size;i++){
//		cout<<"enter the array"<<end;
//		cin>>array[i];
//	}
//	cout<<"sum is "<<Getsum(array,size)<<endl;
//}
