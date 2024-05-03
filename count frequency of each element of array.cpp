#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;
void countFreq(vector<int>& arr1){
    int max=INT_MIN;
    for(int i=0;i<arr1.size();i++){
        if(arr1[i]>max){
            max=arr1[i];
        }
    }
    vector<int> arr2(max+1,0);
    for(int i=0;i<arr1.size();i++){
        arr2[arr1[i]]++;
    }
    cout<<"count frequency of each element:"<<endl;
    for(int i=0;i<arr1.size();i++){
        if(arr2[arr1[i]]>0) {
            cout<<arr2[arr1[i]]<<endl;
            arr2[arr1[i]]=-1;  // changing arr val to -1
        }
        
    }
    
}
int main(){
    cout<<"enter the length:"<<endl;
    int length;
    cin>>length;
    cout<<"enter the elements"<<endl;
    vector<int> arr(length);
    for(int i=0;i<length;i++){
        cin>>arr[i];
    }
    countFreq(arr);
    
}
