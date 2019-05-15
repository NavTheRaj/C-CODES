#include<iostream>
using namespace std;
const int SIZE=3;
void input(int arr[][],int SIZE)
{

cout<<"enter the number in matrix of 3 by 3:"endl;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++){

cin>>arr[i][j];
}
}

void show(int arr[][],int SIZE){
cout<<"3 X 3 MATRIX:"endl;
for(int i=0;i<3;i++)
{
for(int j=0;j<3;j++){

cout>>arr[i][j];
}
cout<<endl;
}



int main(){


int arr[SIZE][SIZE];

 input( arr, SIZE);
 show(arr,SIZE); 

}

