#include<iostream>
using namespace std;

#define PI 3.5145
int main(){
double p,r,a;
cout<<"Enter the radius of the circle: ";
cin>>r;

p=2*PI*r;
a=PI*r*r;
cout<<"Perimeter: "<<p<<endl<<"Area: "<<a<<endl;
return 0;
}
