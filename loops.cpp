#include<iostream>
using namespace std;

int main(){
   int arr[]={1,2,3,4,5,6};
   int i=1;
   int j=1;
   int k=1;

   for(i=0;i<6;i++){
   cout<<arr[i]<<endl;
                       }
   cout<<"------------------------"<<endl;
   cout<<"While loop"<<endl;
   while(j<6)
   {
	   cout<<j<<endl;
	   j++;
   }
cout<<"DO while Loop"<<endl;
   do{
	   cout<<k<<endl;
	   k++;
   }
	   while(k<7);
   
       }
