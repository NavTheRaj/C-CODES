#include<iostream>

using namespace std;

class Box{



	   private:
                double length;
                double breadth;
                double height;


	public:

		//Constructor callied

		Box(double l ,double b,double h){
			length=l;
			breadth=b;
			height=h;
			cout<<length<<endl<<breadth<<endl<<height;
		}

		double Volume{
			return length * breadth * height ;
		}

		int compare(Box box){
			return this->Volume() > box.Volume();
                                    }

};

int main(){
	Box b1(3.3,1.2,1.5);
	Box b2(8.5,2.5,5.5);

	if(b1.compare(b2)){
		cout<<"Box2 is smaller than box1"<<endl;
	}
	else{
		cout<<"Box2 is equal to or larger than box1"<<endl;
	}
		return 0;
	}


