#include<iostream>
using namespace std;

int num1,num2;

int main(){
	cout<<"Enter the first number: ";
	cin>>num1;
	cout<<"Enter the second number: ";
	cin>>num2;
	if(num1==num2)
	{
		cout<<num1<<" is equals to " <<num2<<endl;
	}
       if(num1>num2)
       {
	       cout<<num1<<" is greater than " <<num2<<endl;
       }
       if(num2>num1)
       {
	       cout<<num2<<" is greater than "<<num1<<endl;
       }
       if(num1!=num2)
       {
	       cout<<num1<< " is not equals to "<<num2<<endl;
       }
      

return 0;
}
