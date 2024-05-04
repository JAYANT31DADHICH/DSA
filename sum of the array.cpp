#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

void arraySum(vector<int>& arr1){
    int sum=0;
    for(int i=0;i<arr1.size();i++){
        sum=arr1[i]+sum;
    }
    cout<<"sum of the array is:"<<sum<<endl;
}
int main(){
    int size;
    cout<<"enter the size"<<endl;
    cin>>size;
    
    vector<int> arr(size);
    cout<<"enter the elements"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    arraySum(arr);
}
