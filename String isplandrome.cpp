#include<iostream>
#include<cstring> //using this we can directly count the length ,no need of getlength function
using namespace std;

// int getLength(char nam[20]){
//     int count =0;
//     for(int i=0;nam[i]!='\0';i++){
//         count++;
//     }
//     return count;
// }
bool ispalindrome(char a[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(a[s] !=a[e]){
            return 0;
        }
        else{
            return 1;
        }
    }
}
int main(){
    char name[100];
    cin>> name;
    int n=strlen(name);
    int result=ispalindrome(name,n);// always we have to give name and n inside the bracket
    cout<<result<<endl;
    return 0;
}
