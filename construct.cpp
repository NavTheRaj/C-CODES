#include<iostream>
using namespace std;
class construct{

		private:		
		int a,b;

		public:
		construct(){
				a=0;
				b=0;
		}

		construct(int a,int b){
				this->a=a;
				this->b=b;
		}

		void setA(int a){
		this->a=a;
		}
		void setB(int b){
			this->b=b;
		}

		int getA()
		{
				return a;
		}

		int getB(){
				return b;
		}
};

int main(){
construct c;
construct d(30,40);
cout<<"Constructor d values: ";
cout<<d.getA()<<" ";
cout<<d.getB()<<endl;
cout<<"Constructor b values: ";
cout<<c.getA()<<" ";
cout<<c.getB()<<endl;
cout<<"Constructor passed value in c: ";
c.setA(2);
cout<<c.getA()<<" ";
c.setB(7);
cout<<c.getB()<<endl;
return 1;
}
