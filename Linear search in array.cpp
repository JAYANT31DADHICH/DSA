#include<iostream>
using namespace std;

bool search(int arr[],int n, int key){
		for(int i=0;i<n;i++){
			if(arr[i]==key){
				return true;
				break;
			}
			
	
			
	
}
return false;

}

int main(){
	int array[]={2,3,4,5,6,7,8,9,1,3};
	
		int key;
		cin>>key;
		bool found=search(array,10,key);
		if(found){
			cout<<"it is present"<<endl;
		}
		else{
			cout<<"not present"<<endl;
		}
		

	return 0;
}
