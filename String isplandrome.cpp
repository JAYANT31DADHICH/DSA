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



// #include <iostream>
// #include <cstring> // For strlen

// using namespace std;

// bool ispalindrome(char a[], int n) {
//     int s = 0;
//     int e = n - 1;
//     while (s < e) {
//         if (a[s] != a[e]) {
//             return false;
//         }
//         s++;
//         e--;
//     }
//     return true;
// }

// int main() {
//     char name[20];
//     cin >> name;
//     int length = strlen(name); // Determine the length of the input string
//     cout << (ispalindrome(name, length) ? "Palindrome" : "Not Palindrome") << endl;
//     return 0;
// }

