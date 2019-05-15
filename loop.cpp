#include<iostream>
using namespace std;
int main(){
	int data[]= {4,6,1,4,8};
	int sel=0;
	int temp=0;
   //Demo comment text huhahahhahahahah
	for(int i=0;i<=4;i++)
	{
		sel=data[i];
		for(int j=1;i<=4;j++)
		{
			if(sel<data[j])
			{
				temp=data[j];
			}

		}
	}
		cout<<"temp :" <<temp;
}
