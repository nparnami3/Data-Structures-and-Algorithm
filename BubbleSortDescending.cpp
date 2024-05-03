//BUBBLE SORT in DESCENDING ORDER

#include<iostream>
using namespace std;
int main(){
	//	size of array:
	int n;
	cout<<"enter size of array:";
	cin>>n;
//	enter array elements:
	int arr[n];
	
	cout<<"enter elements of an array:";
	for(int i=0;i<n;i++) cin>>arr[i];
	int temp;
	
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-1;j++){
			if(arr[j]<arr[j+1]){ // < use of less than operator is the only change!!
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	} 
	return 0;
	
}
