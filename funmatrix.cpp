#include<iostream>

using namespace std;

      
       void input(int arr[][],int rows,int col)
{

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
}



void show(int arr[][],int rows,int col){
 cout<<"The elements in matrix :"<<endl;
          for(int i=0;i<rows;i++){
                  for(int j=0;j<col;j++)
                  {
                      
                          cout<<arr[i][j]<<" ";
                  }
				  cout<<endl;
          }
}




int main(){


int rows;
int col;
int arr[rows][col];

input(arr,rows,col);
show(arr,rows,col);

}
