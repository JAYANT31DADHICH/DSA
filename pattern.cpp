#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;
    //int count=1;
    while(i<=n){
        /*int space = n-i;
        while(space){
            cout<<" ";
            space=space-1;
        }
        int j=4;
         int count=1;
        while(j>=(n-i+1)){
            cout<<count;
            count=count+1;
            j=j-1;
        }
        int q=i-1;
        while(q){
            cout<<q;
            q=q-1;
        }*/
        int start=1;
        while(start<=n-i+1){
            cout<<start;
            start=start+1; 
            
        }
        int space=i-1;
        while(space){
            cout<<"*";
            space=space-1;
        }
        int star=i-1;
        while(star){
            cout<<"*";
            star=star-1;
        }
        int end=1;
        while(end<=n-i+1){
            cout<<end;
            end=end+1;
        }
        
        
        cout<<endl;
        i=i+1;
    }
    return 0;
}
