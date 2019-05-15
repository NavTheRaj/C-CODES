#include<iostream>

using namespace std;

const int ADULT_CHOICE=1;
const int CHILD_CHOICE=2;
const int SENIOR_CHOICE=3;
const int QUIT_CHOICE=4;
const int adult=40;
const int child=20;
const int senior=60;

void showMenu(){

	cout<<"*****************HEALTH CLUB MEMBERSHIP***************"<<endl;

	cout<<"1.STANDARD ADULT MEMBERSHIP"<<endl<<"2.CHILD MEMBERSHIP"<<endl<<
		"3.SENIOR MEMBERSHIP"<<endl<<"4.QUIT"<<endl;

	
}

void showFees(int rate,int months)
{

	int result=rate*months;

	cout<<"Your membership fee is: $ "<<result<<endl;


}

int main(){
        int choice;
	int month;
	do{
	showMenu();
       	
	cout<<"Enter your choice: ";
	cin>>choice;

	while(choice <ADULT_CHOICE || choice > QUIT_CHOICE){
		cout<<"Enter a valid choice: ";
		cin>>choice;
	}
	if(choice!=QUIT_CHOICE){
	cout<<"Enter the months of membership: ";
	cin>>month;
	switch(choice){
		case ADULT_CHOICE:showFees(adult,month);break;
		case CHILD_CHOICE:showFees(child,month);break;
		case SENIOR_CHOICE:showFees(senior,month);break;
		case QUIT_CHOICE:exit(0);break;
		default:cout<<"Invalid input";break;
	}
	}
	}while(choice!=QUIT_CHOICE);
	}
