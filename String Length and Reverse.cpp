// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

// 1.to find the length of the string
int getLength(char nam[20]){
    int count =0;
    for(int i=0;nam[i]!='\0';i++){
        count++;
    }
    return count;
}

// 2.Reverse a string
void Reverse(char nam[20],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(nam[start],nam[end]);
        start++;
        end--;
    }
}
int main() {
    char name[20];
    
    cout<<"enter your name"<<endl;
    cin>> name;
    //name[2]='\0';
    cout<<"your name is ";
    cout<<name<<endl; //cin stops the execution whenever we will provide it a space,newline or tab.Therefore if we give Jayant love then it will give jayant in the output.
    int n=getLength(name);
    cout<<"Length:"<<getLength(name)<<endl;
    //cout<<"Reverse:"<<Reverse(name,n)<<endl;  cout will not work because the fumction we created is void therefore directlry call the functon.
    Reverse(name,n);
    cout<<name<<endl;
    

    return 0;
}
