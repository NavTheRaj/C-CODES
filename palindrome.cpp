#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int num=0;
	int reverse=0;
	int digit=0;
	int rev=0;



	cout<<"Enter the number";
	cin>>num;
	int temp=num;

while(num>0){
	digit=num%10;
	rev=(rev*10)+digit;
   	num=num/10;
}
if(rev==temp)
	cout<<"Palindrome";
	else
	cout<<"Not palindrome";

	return 0;
	}

