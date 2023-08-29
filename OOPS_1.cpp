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
different ways of creating the objects
we can create objects in 2 ways
Every class has attributes like name,rollno
*/
int main()
{
	//static method of calling objects
	Human Harshita;
	Harshita.name="Harshita";
	Harshita.Introduce();
	
	
	Human sandhya ;
	sandhya.name="Sandhya";
	sandhya.Introduce();
	
	//dynamic method of calling objects
	Human *Archana =new Human ;
	Archana->name="Sandhya";
	Archana->Introduce();
}
