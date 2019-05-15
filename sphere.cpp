#include <iostream>
#include <iomanip>
#define PI 3.14723

using namespace std;

float inputRadius();
void calcArea(float rad);
void calcVolume(float rad);

int main(){

float result=inputRadius();
cout<<Enter 1 for area and 2 for volume calculation: ";
cin>>num;
	calcArea(result);
	calcVolume(result);

}

float inputRadius(){

	float radius;

	cout<<"Enter the radius of sphere: ";
	cin>>radius;
	cout<<endl;

	return radius;

}

void calcArea(float rad){

       
	float Area;
	Area=4*PI*rad*rad;
	cout<<"Area of sphere is: "<<setprecision(2)<<fixed<<Area<<endl;
}

void calcVolume(float rad){

	float vol;

        vol=4.00/3.00*PI*rad*rad*rad;

	cout<<"Volume of sphere is: "<<setprecision(2)<<fixed<<vol<<endl;
}

