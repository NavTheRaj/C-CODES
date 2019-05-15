#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
		void takeInput(vector<int> &hours,vector<double> &payRate,int NUM_EMPLOYEES){
	/*	cout<<"Enter the number of employee: ";
		cin>>NUM_EMPLOYESS;*/
		/*Vector declaration*/
		

		for(int i=0;i<NUM_EMPLOYEES;i++){
			/*	int tempHours; 
				int tempRate;*/
				cout<<"Employee "<<i+1<<" working hours :";
	        		/*cin>>hours[i];*/
				  cin>>hours.at(i);
			/*	cin>>tempHours;
				hours.push_back(tempHours);*/

				cout<<"Employee "<<i+1<<" pay rate :";
			/*	cin>>payRate[i];*/
				cin>>payRate.at(i);
					/*	cin>>tempRate;
						payRate.push_back(tempRate);*/
		}

		}

void showOutput(vector<int> hours,vector <double> payRate,int NUM_EMPLOYEES){
        cout<<fixed<<setprecision(3);
		for(int i=0;i<NUM_EMPLOYEES;i++){

				double total;
				total=hours.at(i)*payRate.at(i);
				cout<<"Total grosspay of employee "<<i+1<<" is :"<<total<<endl;
				
		}
}
int main(){
		const int NUM_EMPLOYEES=2;

		vector<int> hours(NUM_EMPLOYEES);
		vector<double> payRate(NUM_EMPLOYEES);
		takeInput(hours,payRate,NUM_EMPLOYEES);
		showOutput(hours,payRate,NUM_EMPLOYEES);
		return 0;
}
