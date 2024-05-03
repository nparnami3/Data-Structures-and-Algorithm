#include<iostream>
using namespace std;
int main(){
//	int n;
//	
//	cout<<"enter size:";
//	cin>>n;
//	int arr[n];
//	for(int i=0;i<n;i++){
//		cin>>arr[i];
//	}
int n=5;
int arr[n]={1,2,3,4,5};
	int i=0,j=4;
	while(i<j){
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	cout<<endl<<"reversed array:"<<endl;
	for(int i=0;i<n;i++){
		
		cout<<arr[i]<<" ";
	}

	return 0;
}
