#include<iostream>
using namespace std;
class Human{
	public:
		string name;
		void Introduce()
		{
			cout<<" HI! I am "<<name<<endl;
		}
};
/*
different ways of crreating the objects

*/
int main()
{
	
	Human Harshita;
	Harshita.name="Harshita";
	Harshita.Introduce();
	int a=10;//here we are giving *ptr because we are storing address and it is an integer so we are giving an int *ptr
	int *ptr=&a;
	cout<<*ptr<<" ";
	
	
	Human sandhya ;
	sandhya.name="Sandhya";
	sandhya.Introduce();
	
	
	Human *Archana =&sandhya ;
	//Archana->name="Sandhya";
	Archana->Introduce();
}
