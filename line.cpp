#include<iostream>

using namespace std;

class Line{
public :
	
	double length;
	void setLength(double len);
	double getLength(void);
	Line();
private:
	double width;
	void setWidth(double wid);
	double getWidth();
};

//member function definition
Line::Line(){
	length=0;
	width=0;
	cout<<"Constructor value is: "<<length<<endl;
	cout<<"Constructor value for width is: "<<width<<endl;
	}

double Line::getLength(void){
return length;
}
void Line::setLength(double len){
	length=len;
	}
int main(){

	Line line;
	line.setWidth(4);
	line.setLength(4);
	cout<<"Get value from setter is: "<<line.getLength()<<endl;
	
	}






