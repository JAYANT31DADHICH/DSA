// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    /*int a=1;
    int b=2;
    if(a-- > 0 && ++b > 2){
        cout<< " ok";
    }else{
        cout<<" not ok";
    }
    cout<<a<<" "<<b<<endl;*/
/*    int n;
    cin>>n;
    int sum=0;
    for(int i=1; i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;

    return 0;*/
    
    // fibonacci series
    /*int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=10;i++){
        int newNumber=a+b;
        cout<<newNumber<<" ";
        a=b;
        b=newNumber;
    }*/
    // prime number
    /*int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<":is prime"<<" "<<endl;
        }
        else{
            cout<<i<<":not prime"<<" "<<endl;
        }
    }*/
/*    int n;
    cin>>n;
    bool isprime=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=0;
            break;
        }
        
        }
        if(isprime==0){
            cout<<"not a prime number"<<" ";
        }
        else{
            cout<<"is a prime number"<<" ";
    }*/
    /*for(int i=0;i<=6;i--){
        cout<<i<<" ";
        i++;
    }*/
/*    for(int i=0;i<=15;i+=2){
        cout<<i<<" ";
        if(i&1){
            continue;
        }
        i++;
    }*/
    /*for(int i=0;i<=5;i++){
        for(int j=i;j<=5;j++){
            cout<<i<<" "<<j<<endl;
        }
    }*/
    // subtract product and sum of an integer  //keetcode
    /*int n;
    cin>>n;
    int prd=1;
    int sum=0;
    while(n!=0){
        int digit=n%10;
        prd=prd*digit;
        sum=sum+digit;
        n=n/10;
        
    }
    int result=prd-sum;
      cout<<result<<" ";
     return result;*/
     // number of 1 bits //leetcode
     int n;
     cin>>n;
     int count=0;
     while(n!=0){
         if(n&1){
             count++;
         }
         n=n>>1;
         
     }
     cout<<count<<" ";
     //return count;
}
