#include<iostream>
using namespace std;
class Something{
		public:
		 	int m_value;
                        Something():m_value(0)
			{
			cout<<"Constructor value is: "<<m_value<<endl;
	 		}
                  		void resetValue()
				{
				m_value=0;
   				}
				void setValue(int value){
						m_value=value;
				}
				int getValue()const;
					/*	return m_value;
				}*/
				
};

int Something::getValue() const //defining the constant member function outside the class
{
return m_value;
}
int main(){
		
		const Something something;//calls default constructor
	//	something.m_value=5;//compiler error:violates const
	//	cout<<"Passed value in constructor :"<<something.m_value<<endl;
	//	something.setValue(5);//compiler error:violates const
		cout<<"Get value is: "<<something.getValue()<<endl;
//        something.resetValue();
//cout<<"SEcond getValue is: "<<something.getValue()<<endl;
		return 0;
}
