#include<iostream>
using namespace std;

int main(){
        
		/*2D array*/
		int arr[3][3]={1,2,3
				      ,4,5,6,
					   7,8,9};
        
 


		cout<<"The matrix of 3 X 3 :"<<endl;
		for(int i=0;i<3;i++)
		{
				for(int j=0;j<3;j++)
				{
						cout<<arr[i][j]<<" ";
				}
				cout<<endl;
		}

}
