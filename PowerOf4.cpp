#include<iostream>
using namespace std;
//bool isPowerOfFour(int n) {
//  if (n == 0) {
//    return false;
//  }
//
//  while (n % 4 == 0) {
//    n /= 4;
//  }
//
//  return n == 1;
//}



int main(){
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;i<=n;++i){
		if(i*i*i*i==n){
		flag=1;
		break;
	}
	
    }
if(flag==1){
	cout<<"true";
}else{
	cout<<"false";
}
//	int n;
//	cin>>n;
//	if(isPowerOfFour(n)){
//		cout<<n<<" is power of 4";
//	}
//	else{
//		cout<<n<<" is not a power of 4";
//	}
	return 0;
}
