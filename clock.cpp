#include<iostream>
#include<iomanip>

using namespace std;



int main()
{
	int hours=0;
int mins=0;
int secs=0;

cout.fill('0');


for(hours=0;hours<24;hours++)
{
	for(mins=0;mins<60;mins++)
	{
		for(secs=0;secs<60;secs++)
		{
		if(hours<12){	
			cout<<setw(2)<<hours<<":"<<setw(2)<<mins<<":"<<setw(2)<<secs<<"AM"<<endl;
		}
		else{
			 cout<<setw(2)<<hours<<":"<<setw(2)<<mins<<":"<<setw(2)<<secs<<"PM"<<endl;
		}
			for(int i=0;i<10000000000000;i++)
			{
			}
		
		
		}
	}
}
return 0;
}
