#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	float total,avg,num1,num2,num3;
	cout<<"Enter the sales for day 1: ";
	cin>>num1;
	cout<<"Enter the sales for day 2: ";
	cin>>num2;
	cout<<"Enter the sales for day 3: ";
	cin>>num3;
	cout<<endl<<"Sales figure"<<endl<<"-------------------"<<endl;
	total=num1+num2+num3;
	cout<<setprecision(2)<<fixed;
	cout<<"Day 1: "<<setw(15)<<num1<<endl;
	cout<<"Day 2: "<<setw(15)<<num2<<endl;
	cout<<"Day 3: "<<setw(15)<<num3<<endl;
	cout<<endl<<"Total :"<<total<<endl;
	avg=total/3;
	cout<<"Average: "<<avg<<endl;
	cout<<endl<<"--------Thank You!!----------"<<endl;
}
