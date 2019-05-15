#include<iostream>
#include<vector>
#include<iomanip>
using namespace std;
void takeInput(vector<int> &,vector<double> &);
void showOutput(vector<int>,vector<double>);
const int NUM_EMPLOYEES=5;
int main(){
		vector<int> hours(NUM_EMPLOYEES);
		vector<double> payRate(NUM_EMPLOYEES);
		takeInput(hours,payRate);
		showOutput(hours,payRate);
		return 0;
}

		void takeInput(vector<int> &hours,vector<double>  &payRate){
		cout<<"+------------------------------------+"<<endl;
		cout<<"Enter hours and payrate of employees: "<<endl;
		cout<<"+------------------------------------+"<<endl;
		for(int i=0;i<NUM_EMPLOYEES;i++){
				cout<<"Employee "<<i+1<<" working hour :";
				cin>>hours.at(i);
				cout<<endl;
				cout<<"Employee "<<i+1<<" payrate :";
				cin>>payRate.at(i);
				cout<<"+----------------------+"<<endl;
		}

/*		cout<<"Enter payRate of employees: "<<endl;
		for(int i=0;i<NUM_EMPLOYEES;i++){
				cin>>payRate.at(i);
		}*/
		}

		void showOutput(vector<int> hours,vector<double> payRate){
		cout<<"+------------------------------------+"<<endl;
		cout<<"Employees total amount are: "<<endl;
		 cout<<"+------------------------------------+"<<endl;
		for(int i=0;i<NUM_EMPLOYEES;i++)
		{
				int total=0;
				cout<<"Employee "<<i+1<<":";
				total=hours.at(i)*payRate.at(i);
				cout<<total<<endl;
                cout<<"-------------"<<endl;
		}

}
