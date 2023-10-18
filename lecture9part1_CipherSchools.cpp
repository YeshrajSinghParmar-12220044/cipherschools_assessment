#include<iostream>
using namespace std;
int compare(int a,int b)    //compare two integers
{
//	int c;
//	if(a>b){
//		c=a;
//	}
//	else{
//		c=b;
//	}
//	cout<< c;

/*2nd method of code */
	if (a>b){
		cout<<a;
	}
	else{
		cout<<b;
	}


}
int main(){
	int a=5;
	int b=9;
	compare(a,b);
	return 0;
}
