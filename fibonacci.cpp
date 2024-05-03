#include<iostream>
using namespace std;

//fibonacci series using recurssion:

int fibonacci(int n){
	if(n<=1)
	return n;
	else
	return fibonacci(n-1)+fibonacci(n-2);
}

void fibonacci_series(int count)
{
	int i;
	for(i=0;i<count;i++)
	{
		cout<<fibonacci(i);
	}
}

int main(){
	int f0=0,f1=1,f2;
	int n;
	cout<<"enter range:";
	cin>>n;
	fibonacci_series(n); //function call
	
	
		return 0;
}
