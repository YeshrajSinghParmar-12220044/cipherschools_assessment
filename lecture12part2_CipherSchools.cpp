#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	int *q;
	int *p;
	p=&a;
	q=&b;
	a=1;
	b=9;
	c=*q+*p;
	cout<<"The value of c is "<<c<<endl;
//	cout<<"The value of a from actual variable is "<<a<<endl;
//	cout<<"The value of a using pointer is "<<*p<<endl;
	
	return 0;
}
