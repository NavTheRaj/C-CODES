#include<iostream>

using namespace std;

class Square{

		private:
				double width;
				double length;

		public:

				void userinput(double &length,double &width);

				Square(){
						width=0;
						length=0;

				}

			/*	Square(double a,double b){
						length=a;
						width=b;
				}*/

				void setLength(double len){
						length=len;

				}

				void  setWidth(double wid){
						width=wid;
				}

				double getLength(){
						return length;
				}

				double getWidth(){
						return width;
				}

				void display(){

						cout<<"Square details:"<<endl;
						cout<<"Length :"<<length<<endl;
						cout<<"Width :"<<width<<endl;
				}

				double calculate(){

						return length*width;
				}
};

void Square::userinput(double &length,double &width){
		cout<<"Enter the length: ";
		cin>>length;
		cout<<"Enter the width :";
		cin>>width;
}

int main(){

	//	Square s(10,10);
	    
	    double length;
		double width;

	/*	 cout<<"Enter the length: ";
 		    cin>>length;
        	  cout<<"Enter the width :";
         	 cin>>width;*/
		Square s;
       s.userinput(length,width);
		s.setLength(length);
		s.setWidth(width);
		s.display();
		cout<<"Area of square is :"<<s.calculate();
}

