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
