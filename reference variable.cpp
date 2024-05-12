#include<iostream>
using namespace std;

int main(){
    
    int i =5;
    int& j=i;
    cout<<"value of i:"<<i<<endl;
    i++;
    cout<<"i is:"<<i<<endl;
    cout<<"value of i++ is:"<<i++<<endl; //because it is post increment
    cout<<"j is :"<<j<<endl; // reference variable
    cout<<"i is :"<<i<<endl;
    cout<<"value of i++ is:"<<i++<<endl; //because it is post increment
    cout<<"i is :"<<i<<endl;
    cout<<"value of ++i is:"<<++i<<endl; //because it is pre increment
    cout<<"i is :"<<i<<endl;
}
