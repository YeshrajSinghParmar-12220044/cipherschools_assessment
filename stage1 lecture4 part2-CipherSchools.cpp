#include<iostream>
using namespace std;
//int main(){
//	float a,b;
//	cin>>a>>b;
//	if (a>0.01 || b>a)
//	cout<<"the condition is true";
//	else{
//		cout<<"the condition is false";
//	}
//	return 0;
//}

/*int main(){
	//giving grades to student according to marks
	int marks;
	cout<<"enter marks";
	cin>>marks;
	if (marks>=90){
		cout<<"A";
	}
	else if(marks>=80){
		cout<<"B";
	}
	else if(marks>=70){
		cout<<"C";
	}
	else{
		cout<<"D";
	}
	return 0;
}*/

int main(){
	int a;
	cout<<"Enter an integer";
	cin>>a;
	//using switch statement
	switch(a){
		case 1:
			cout<<"the value of a is 1"<<endl;
			break;
		case 2:
			cout<<"the value of a is 2"<<endl;
			break;
		default:
			cout<<"default statement"<<endl;	
	}
}
