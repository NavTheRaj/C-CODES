#include<iostream>
using namespace std;
void gradefun(int num){
        if(num>=90){
                cout<<"Grade:A"<<endl;
        }
        else if(num>=80 && num<90){
                cout<<"Grade:B"<<endl;
        }
        else if(num>=70 && num<80){
                cout<<"Grade:C"<<endl;
        }
        else if(num>=60 && num<70){
                cout<<"Grade:D"<<endl;
        }
        else if(num>=50 && num<60){
                cout<<"Grade:E"<<endl;
        }
        else if(num<50){
                cout<<"Grade:F"<<endl;
        }
}
int main(){
	int marks=0;
	cout<<"Enter the marks: ";
	cin>>marks;
	gradefun(marks);
}


