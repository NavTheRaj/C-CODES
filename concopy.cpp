#include<iostream>
using namespace std;

class Line{
		public:
		int getLength();
		Line(int len);
		Line(const Line &obj);
		~Line(void);

		private:
		int *ptr;
};

Line::Line(int len){
cout<<"Normal constructor allocating ptr : "<<endl<<len<<endl;
//allocate memory for the pointer
 			ptr=new int;
			*ptr=len;
			cout<<"Pointer holding value is: "<<*ptr<<endl;
			cout<<"Pointer actual value is :"<<ptr<<endl;
}
Line::Line(const Line &obj){

	cout<<"Copy Constructor allocating the ptr. "<<endl;
	cout<<"&obj value :"<<&obj<<endl;
	
	ptr=new int;
	*ptr=*obj.ptr;//copy the value
//	cout<<*obj<<endl;
	cout<<"Pointer holding the object value :"<<*ptr<<endl;
	cout<<"Pointer actual value that holds the value of object :"<<ptr<<endl;

}

Line::~Line(void){
		cout<<"Freeing the memory!"<<endl;
		delete ptr;
}

int Line::getLength(){
		return *ptr;
}

void display(Line obj){
		cout<<"Length of line : "<<obj.getLength()<<endl;
}

int main(){
		Line line(10);
		display(line);
		return 0;
}
