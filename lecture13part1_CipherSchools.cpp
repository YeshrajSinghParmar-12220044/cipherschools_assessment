#include<iostream>
using namespace std;
int main(){
//	int a=5;
//	int *x;
//	x=&a;
//	cout<<"the address of a which is store in pointer x is "<<x<<" "<<"the value of x+1 is "<<x+1<<endl;
//	cout<<x+2;
	int a[5];
	int *x;
	x=&a[0];
	int i;
	for(i=0;i<6;i++){
		cout<<&a[i]<<endl;
	}
	return 0;
}
