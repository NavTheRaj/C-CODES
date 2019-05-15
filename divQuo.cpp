#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int dividend,divisor,quotient,remainder;
	char ch;
do
	{
	cout<<"Enter the dividend: ";
	cin>>dividend;
	cout<<"Enter the divisor: ";
	cin>>divisor;
	remainder=dividend%divisor;
	quotient=dividend/divisor;
	cout<<"Quotient: "<<quotient<<endl<<"Remainder : "<<remainder<<endl;
        cout<<"Do you want to continue the operation with another number? [Y/N]"<<endl;
	cin>>ch;

	do{
	}while(ch!='y' && ch!='Y' && ch!='n' && ch!='N');

	}
	while(ch=='y' || ch=='Y');
	return 0;
}

