#include<iostream>
using namespace std;

//void printstuff() //there are no parameters
//{
//		cout<<"Writing my first function";
//}

int sum(int a, int b){
	int c=a+b;
	return c;
}
int main(){
//	printstuff();
	int a=3;
	int b=5;
	int add_sum=sum(a,b);
	cout<<add_sum;
	
	return 0;
}
