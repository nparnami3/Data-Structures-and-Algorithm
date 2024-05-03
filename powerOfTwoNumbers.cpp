#include<iostream>
using namespace std;

int power(int base,int exponent){
	if(exponent==0){
		return 1;
	}
	else{
		return base * power(base,exponent-1);
	}
}

int main(){
	
	int base;
	int exp;
	cout<<"enter base:";
	cin>>base;
	cout<<"enter power:";
	cin>>exp;
	cout<<power(base,exp);
	
	
	
	return 0;
}
