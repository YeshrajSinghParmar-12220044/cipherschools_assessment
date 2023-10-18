#include<iostream>
using namespace std;
//void swap(int a, int b)   pass by value
void swap(int &a, int &b)  //pass by reference
//by adding & keyword after the dataype of vairable and before variable name we are able to change value of actual parameter
{
	int c;
	c=a;
	a=b;
	b=c;
	cout<<"the values of a and b after swapping inside the function are"<<a<<" "<<b<<endl;
	return;
}
int main(){
	int a,b,c;
	a=4;
	b=6;
	swap(a,b);
	cout<<"the values of a and b after swapping outside the function are "<<a<<" "<<b<<endl;
	return 0;
}
