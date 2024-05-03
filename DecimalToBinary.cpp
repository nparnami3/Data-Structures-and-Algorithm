#include<iostream>
using namespace std;

void decToBin(int n){
	
	int binary[32];
	int i=0;
	while(n > 0){
		binary[i]=n % 2; //remainder
		n = n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--){
		cout<<binary[j];
	}
	
	
	
}

int main(){
	int n;
	cin>>n;
	decToBin(n);
	return 0;
}
