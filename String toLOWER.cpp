// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<cstring>

int toLower(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool ispalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toLower(a[s])!= toLower(a[e])){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main() {
    // Write C++ code here
    char name[20];
    cin>>name;
    
    int n =strlen(name);
    int result=ispalindrome(name,n);
    cout<<result<<endl;
    

    return 0;
}
