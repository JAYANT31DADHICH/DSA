#include<iostream>
using namespace std;

int main(){
    cout<<"enter the length of the array"<<endl;
    int length;
    
    cin>>length;
    cout<<"enter the integer"<<endl;
    int arr[100]={};
    for(int i=0;i<length;i++){
       cin>>arr[i]; 
    }
    cout<<arr<<endl;
}

/*here i wanted to print the elements of array but its giving me this output "0x7ffe786d05d0" because What you're seeing, 0x7ffe786d05d0, is indeed a memory address. In C++, when you try to print out an array directly using cout, it prints the memory address of the first element of the array, which is what you observed.
Here's a breakdown:
arr is an array, but when you use cout << arr, it's treated as a pointer to the first element of the array.
Printing arr directly will give you the memory address where the array is stored in memory.
To print out the individual elements of the array, you need to loop through the array and print each element separately, which is what I showed in the modified code.*/
