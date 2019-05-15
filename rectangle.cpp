#include<iostream>
using namespace std;

class Rectangle{
	private:
             
		double length;
		double breadth;

	public:
		Rectangle()
		{
			length=0;
			breadth=0;
		}
              
	/*	Rectangle(double l,double b)Use constructor when setter and getter is not used
		{
			length=l;
			breadth=b;
		}*/

		double setLength(double l){
			length=l;
		}

		double setBreadth(double b){
			breadth=b;
		}

		double getLength()
		{
			return length;
		}
		double getBreadth(){

			return breadth;
		}

		double calculate(){
			return  length* breadth;
		}
};

int main(){
	double l1,l2,b1,b2;
	cout<<"Enter length of rectangle 1: ";
	cin>>l1;
        cout<<"Enter breadth of rectangle 1: ";
	cin>>b1;
	Rectangle rec1;
	rec1.setLength(l1);
	rec1.setBreadth(b1);
	cout<<"Area of rectangle 1 is : "<<rec1.calculate()<<endl;
	cout<<"Your length is: "<<rec1.getLength()<<endl;
	cout<<"Your breadth is: "<<rec1.getBreadth()<<endl;
/*	cout<<"Enter length of rectangle 2: ";
        cin>>l2;
        cout<<"Enter breadth of rectangle 2: ";
        cin>>b2;
        Rectangle rec2();
	cout<<"Area of rectangle 1 is : "<<rec2.calculate()<<endl;
*/
	return 0;
}




