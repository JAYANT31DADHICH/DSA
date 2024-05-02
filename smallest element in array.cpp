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


// with vector
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int smallestElement(vector<int>& arr1){
    sort(arr1.begin(),arr1.end());
    return arr1[0];
}
int main(){
    cout<<"enter the length of the array"<<endl;
    int length;
    
    cin>>length;
    cout<<"enter the integer"<<endl;
    vector<int> arr(length);
    for(int i=0;i<length;i++){
       cin>>arr[i]; 
    }
    int ans=smallestElement(arr);
    cout<<"the smallest number of element is:"<<ans<<endl;
}

/*In the line vector<int> arr(length);, we're declaring and initializing a vector named arr with a specified length. Here, length is passed as an argument to the constructor of the vector, which creates a vector of size length. This operation is happening within the scope of the main function, and there's no passing of arr to any other function at this point.

The & is used in the function parameter list to indicate that the function parameter is a reference to the vector. For example, in the function declaration int smallestElement(vector<int>& arr), the & signifies that arr is a reference to a vector<int>. This allows the function to modify the vector passed to it.*/
