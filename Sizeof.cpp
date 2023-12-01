#include <iostream>
using namespace std;
int main(){
	int a[10];
	int dbl;
	for(int i=0;i<10;i++){
		cin>>dbl;
		a[i]=dbl*2;
	}
	for(int i=0;i<10;i++){
		cout<<a[i]<<endl;
	}
	
}
