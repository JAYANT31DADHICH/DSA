// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int number;
    cout << "enter a number" << endl;
    cin >> number;
    
    bool bl = false;
    cout << bl << endl;
    
    float f = 1.2;
    cout<<f<<endl;
    
    double d=1.2235445;
    cout<<d<<endl;
    
    char ch = 'v'; //can't use double inverted coma and double character
    cout<<ch<<endl;
    
    int size = sizeof(f);
    cout<<size<<endl;
    
    //typecasting
    int a ='a';
    cout<<a<<endl;
    
    char chh =98;
    cout<<chh<<endl;
    int e = 4;
    int b= 5;
    bool first = (e==b);
    cout<<first<<endl;

    return 0;
}
