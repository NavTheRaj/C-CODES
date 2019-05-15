#include<iostream>

using namespace std;

class Box{
	private:
		double length;
		double breadth;
		double height;

	public:
		static int objectCount;

		Box(double l,double b,double h){
			cout<<"Constructor is called"<<endl;

			length=l;
			breadth=b;
			height=h;

			cout<<length<<"\t"<<breadth<<"\t"<<height<<endl;

			/*Increase every time object is called*/

                        objectCount++;

			cout<<objectCount<<endl;
		}

		double Volume()
		{
			return length*height*breadth;;
		}

		static int getCount()
		{
			return objectCount;
		}

		  int compare(Box box){
                        return this->Volume() > box.Volume();
                                    }



};//end of class

int Box::objectCount=0;/*Declaring static variable*/

int main(){
	double l1,b1,h1,l2,b2,h2;
	cout<<"Initial object count: " <<Box::getCount() <<endl;/*Accessing the static member function*/
        cout<<"Enter the dimensions of box 1 as length,breadth and height: "<<endl;
	cin>>l1;
	cin>>b1;
	cin>>h1;
	Box box1(l1,b1,h1);//Declaring box1
	cout<<"Volume of box1: "<<box1.Volume()<<endl;
	 cout<<"Enter the dimensions of box 2 as length,breadth and height: "<<endl;
        cin>>l2;
        cin>>b2;
        cin>>h2;
	Box box2(l2,b2,h2);//Declaring box2
	cout<<"Volume of box2: "<<box2.Volume()<<endl;
          
        cout<<"Final stage count: "<<Box::getCount()<<endl;/*Accessing the member function  variable of parent class*/

 if(box1.compare(box2)){
                cout<<"Box1 is larger than box2"<<endl;
        }
        else{
                cout<<"Box2 is larger than box1"<<endl;
        }
             
        

        
	return 0;
          }
