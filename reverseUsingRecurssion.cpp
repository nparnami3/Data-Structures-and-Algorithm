#include<iostream>
using namespace std;

int num(int n){

	if(n==1)
	return 1;
	else
	cout<<n<<" ";
	num(n-1);
}
// sum of all the numbers printed:
int sum(int n){
	int res;
	int Sum =0;
	if(n==1){
		return 1;
	}
	else{
//		res=n+sum(n-1);
		res=sum(n-1);
		res=res+n; 
		return res;
	}
}

int main(){
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<num(n)<<" ";
	cout<<"sum:"<<sum(n);
	return 0;
}
