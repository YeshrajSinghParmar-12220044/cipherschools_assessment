#include<iostream>
using namespace std;
//int main(){
//	int a[4];
//	cout<<"enter the number of array";
//	int i;
//	for(i=0;i<5;i++){
//		cin>>a[i];
//	}
//	cout<<"the entered numbers of array are: ";
//	for(i=0;i<5;i++){
//		cout<<a[i]<<" ";
//	}
//	return 0;
//	
//}

//reverse order 
int main(){
	int a[9];
	cout<<"enter 10 integer for array";
	int i;
	for(i=0;i<10;i++){
		cin>>a[i];
	}
	cout<<"entered integers of array are: ";
	for(i=9;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}
