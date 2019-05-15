#include<iostream>

using namespace std;

int main(){
       
	int low;
	int high;
	int rev=0;
	int digit=0;
	int count=0;

	cout<<"Enter the higher limit";
	cin>>high;
	cout<<"Enter the lower limit";
	cin>>low;
	int swap=0;

if(low>high)
{
	swap=high;
	high=low;
	low=swap;
}

for(int i=low;i<=high;i++)
{
	int temp=i;
	int temp1=i;
     

	while(temp1!=0){
         	digit=temp1%10;
		rev=rev*10+digit;
		temp1=temp1/10;
	}
	
	if(rev==temp){
	
               
		for(int j=1;j<=i;j++){
                  
			if(i%j==0)

			{
                            count++;
			}
		}

		
		if(count==2)
		{
			cout<<i<<endl;
		}
	
		
	count=0;
	}
	rev=0;
	temp=0;
	temp1=0;
	
}
return 0;
}




