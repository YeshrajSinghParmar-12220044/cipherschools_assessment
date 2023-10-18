#include<iostream>
using namespace std;
void printhi()    //function without parameter
{
	cout<<"Hi"<<endl;
	return ;
}
int sum(int a, int b)
{
	int c; 
	c=a+b;
	cout<<"the value of c is"<<c<<endl;
}
int main(){
	int a,b;
	a=4;
	b=6;
	int c=500;
	int d;
	d=sum(a,b);
//	cout<<"the sum is equal to "<<d<<endl;
	
	cout<<"the value of c is "<<c<<endl;
	printhi();
	return 0;
}
