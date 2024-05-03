#include<iostream>
using namespace std;

int sum(int n){
	int res;
	int Sum =0;
	if(n==1){
		return 1;
	}
	else{
		
		res=sum(n-1);
		res=res+n;
		return res;
	}
}


int main(){
	int n=10;
	cout<<sum(n);
	return 0;
}
