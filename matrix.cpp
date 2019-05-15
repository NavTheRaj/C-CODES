#include<iostream>

using namespace std;
int main(){

		int rows,col;
		cout<<"Enter the number of rows :";
		cin>>rows;
		cout<<"Enter the number of columns :";
		cin>>col;
		int arr[rows][col];
		cout<<"Enter the elements in matrix of "<<rows<<" X "<<col<<endl;
		for(int i=0;i<rows;i++){
				for(int j=0;j<col;j++)
				{
						cout<<"Matrix["<<i<<"]["<<j<<"]::";
						cin>>arr[i][j];
				}
		}




 cout<<"The elements in matrix :"<<endl;
 cout<<"+-----+"<<endl;
          for(int i=0;i<rows;i++){
				  cout<<"|";
                  for(int j=0;j<col;j++)
                  {
                      
                          cout<<arr[i][j]<<" ";
                  }
				  cout<<"|";
				  cout<<endl;
          }
		  cout<<"+-----+"<<endl;
}
