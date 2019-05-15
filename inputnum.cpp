#include<iostream>
using namespace std;
void sumfun(int temp1,int temp2){
	int sum=0;
	sum=temp1+temp2;
	cout<<"The result is :"<<sum<<endl;
}
int main(){
	int num1;
	int num2;
	cout<<"Enter the first number: "<<endl;
	cin>>num1;
	cout<<"Enter the second number: "<<endl;
	cin>>num2;
	sumfun(num1,num2);
	return 0;
}

