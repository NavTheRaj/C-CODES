#include<iostream>

using namespace std;

int main(){

int arr[5];
int temp;
int small;
int small1;
int large;
int large1;
int temp1;
	cout<<"Enter the 5 elements in array"<<endl;
	for(int i=0;i<5;i++)
	{
		cin>>arr[i];
	}

        /*For smallest number*/
	for(int j=0;j<5;j++){
	small=arr[j];
			for(int k=1;k<5;k++)
			{
			if   (  small > arr[k] )
			{
				temp=arr[j];
				arr[j]=arr[k];
				arr[k]=temp;
				
			}
			small1=arr[j];

                       	}
	
	}

	cout<<"Smallest number is: "<<small1<<endl;
/*For largest number*/
	for(int l=0;l<5;l++){
       large=arr[l];
                        for(int m=1;m<5;m++)
                        {
                        if   (  large < arr[m] )
                        {
                                temp1=arr[l];
                                arr[l]=arr[m];
                                arr[m]=temp1;

                        }
                        large1=arr[l];
	                }
		

	}

               cout<<"Largest number is: "<<large1<<endl;


	

return 0;
}

