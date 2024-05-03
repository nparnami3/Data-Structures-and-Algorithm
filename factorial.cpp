#include<iostream>
using namespace std;
int factorial(int num){
		if(num==0 || num==1){
		
		return 1;
		}
		else{
		
		 int fact=factorial(num-1);
		 return fact;
		}
	};
int main(){
	int n;
	cout<<"enter n:";
	cin>>n;
	int fact=1;
	
	
	int factorial_num;
		
	factorial_num=factorial(n);
	
	
	
	return 0;
	
}
