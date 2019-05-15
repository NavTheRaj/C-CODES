#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int rem=0;
	int quo=0;
	int num=0;
	int sum=0;
	int temp=0;


	cout<<"Enter the number to be checked";
	cin>>num;
	temp=num;
while(num>0){
	rem=num%10;
	sum+=pow(rem,3);
num=num/10;
}
if(sum==temp)
	cout<<"Number is armstrong";
	else
		cout<<"Number is not armstrong";
	
	return 0;
	}
	


