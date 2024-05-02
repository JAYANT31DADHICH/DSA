#include<iostream>
#include<algorithm>
using namespace std;
int smallestElement(int arr1[],int size ){
    sort(arr1,arr1+size);    //note: here sort(arr1.begin(), arr1.end()) wont work for array ,it will only work for vectors
    return arr1[0];
}
int main(){
    cout<<"enter the length of the array"<<endl;
    int length;
    
    cin>>length;
    cout<<"enter the integer"<<endl;
    int arr[100]={};
    for(int i=0;i<length;i++){
       cin>>arr[i]; 
    }
    int ans=smallestElement(arr,length);
    cout<<"the smallest number of element is:"<<ans<<endl;
}
