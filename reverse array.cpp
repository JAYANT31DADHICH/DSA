#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void reverseArray(vector<int>& arr){
    int start=0;
    int end=arr.size()-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
int main(){
    int length;
    cin>>length;
    
    
    
    vector<int> arr(length);
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    reverseArray(arr);
    cout<<"reverse array is:";
    for(int i=0;i< length;i++){
        cout<<arr[i]<<" ";
    }
}
