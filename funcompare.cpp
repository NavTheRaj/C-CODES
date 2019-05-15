#include<iostream>

using namespace std;
const int SIZE=7;
//Array is collection of data with similar datatypes*/
void input(int  arr[],int SIZE){
	cout<<"Enter "<<SIZE<<" numbers: ";
	for(int i=0;i<SIZE;i++){
		cin>>arr[i];
	}
}

 void showValues(int arr[],int SIZE)
{
	for(int i=0;i<SIZE;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}

void isLarge(int arr[],int SIZE)
{

	int max=arr[0];

		for(int j=1;j<SIZE;j++)
		{
			if(max < arr[j])
		        max=arr[j];
		}
		
	
	cout<<"Largest value is: "<<max<<endl;
}

void isSmall(int arr[],int SIZE)
{
	
      
      int min=arr[0];
          for(int j=1;j<SIZE;j++)
          {
              if(min > arr[j])
                  min=arr[j];
          }
 
      
      cout<<"Smallest value is: "<<min<<endl;
  } 




int main(){
int numbers[SIZE];
input(numbers,SIZE);
showValues(numbers,SIZE);
isSmall(numbers,SIZE);
isLarge(numbers,SIZE);



}

