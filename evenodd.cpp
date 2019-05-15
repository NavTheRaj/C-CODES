#include<iostream>

using namespace std;

bool isEven(int);
int main(){
	int num;
	cout<<"Enter the desired number: ";
	cin>>num;

	if(isEven(num))
		cout<<num<<" is even"<<endl;
	
	else
		
	        cout<<num<< " is odd "<<endl;
		
}
	


bool isEven(int a){

	if(a%2==0)
		return true;

	return false;
}
