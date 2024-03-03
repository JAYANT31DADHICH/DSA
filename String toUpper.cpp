// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include<cstring>

int toUpper(char ch){
    if(ch>='A' && ch<='Z'){
        return ch;
    }
    else{
        char temp=ch-'a'+'A';
        return temp;
    }
}
bool ispalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(toUpper(a[s])!= toUpper(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        
        }
    }
    return 1;
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
