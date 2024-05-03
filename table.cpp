#include<iostream>
using namespace std;

void Table(int n,int i=1){
	
	if(i>10){
		return ;
	}else{
		cout<<n*i<<endl;
		
		Table(n,i+1);
		
	}
	
	
}

int main(){
	int n=2;
	int i=1;
	Table(n,i);
	return 0;
	
}
