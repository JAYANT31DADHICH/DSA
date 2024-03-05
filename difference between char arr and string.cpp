// Online C++ compiler to run C++ program online
#include <iostream>
#include<cstring>
using namespace std;

int main() {
    
    string str;
    char name[20];
    
    cin>>str;
    str[2]='\0';
    str[3]='\0';
    cin>>name;
    name[2]='\0';
    name[3]='\0';
    
    
    cout<<"string:"<<str<<endl;
    cout<<"char arr:"<<name<<endl;

    return 0;
}

