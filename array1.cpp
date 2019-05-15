#include<iostream>
using namespace std;
const int SIZE=5;

int main(){

		int arr[SIZE];
        cout<<sizeof(arr)/sizeof(arr[0]);
		for(int i=1;i<5;i++){
				cin>>arr[i];
		}

		for(int i=0;i<5;i++){
				cout<<arr[i];
		}
}
