// BINARY SEARCH

#include<iostream>
using namespace std;
int main(){
//	size of array:
	int n;
	cout<<"enter size of array:";
	cin>>n;
//	enter array elements:
	int arr[n];
	int key;
	
	cout<<"enter elements of an array:";
	for(int i=0;i<n;i++) cin>>arr[i];
	
	cout<<"enter value to search:";
	cin>>key;
	
	int beg=0; //location
	int end=n-1;
	int mid=(beg+end)/2;
	int flag=0;
	
	while(beg <= end && flag==0){
		if(key==mid){
			flag=1;
		}
		else if(key<arr[mid]){
			end=mid-1;
		}
		else {
			beg=mid+1;
		}
		mid=(beg+end)/2;
		
	
	}
	if(flag==1)
	{
			cout<<"value found";
	}
	else{
			cout<<"value not found";
	}
	
	
	
	return 0;
}
