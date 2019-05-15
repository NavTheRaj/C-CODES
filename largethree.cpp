#include<iostream>

using namespace std;

double larger(double ,double ,double );

int main(){
	int x,y,z;
	cout<<"Enter three numbers: "<<endl;
	cin>>x;
	cout<<"----------------------"<<endl;
	cin>>y;
	cout<<"----------------------"<<endl;
	cin>>z;
	cout<<"----------------------"<<endl;

	double result=larger(x,y,z);

	cout<<"The largest number is: "<<result<<endl;
	cout<<"-----------------------"<<endl;
	cout<<"*******END OF PROGRAM********"<<endl;

	return 0;
}

double larger(double a,double b,double c)
{
	if(a>b && a>c)
		return a;
	else if(b>a && b>c)
		return b;
	return c;
}

