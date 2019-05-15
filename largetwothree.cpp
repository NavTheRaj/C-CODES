#include<iostream>

using namespace std;


int largeTwo(int ,int );
int largeThree(int ,int ,int );
int main(){

int a=5;
int b=6;
int c=9;

int resultTwo=largeTwo(a,b);
int resultThree=largeThree(a,b,c);

cout<<"Large of two is: "<<resultTwo;
cout<<"Largest of three is: "<<resultThree;

return 0;
}

int largeTwo(int a,int b)
{
if(a>=b)
return a;
else 
return b;

}


int largeThree(int a,int b,int c){

return largeTwo(largeTwo(a,b),c);
}
