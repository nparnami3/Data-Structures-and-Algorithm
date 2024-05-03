#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	int result[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	result[0]=1;
	for(int i=0;i<n;i++){
		if(arr[i+1]<arr[i]){
			result[i+1]=1;
		}
		if(arr[i+1]>arr[i]){
			result[i+1]=2;
		}
		else{
			result[i+1]=1;
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<result[i]<<" ";
	}
	
	return 0;
}
