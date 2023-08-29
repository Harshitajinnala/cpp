#include<iostream>
using namespace std;
class Human{
	public:
		string name;
		void Introduce();
};
//we can use scope resolution to specify the Introduce is belong to the Human class only in public mode
void Human::Introduce()
	{
			cout<<" HI! I am "<<name<<endl;
	}
int main()
{
	Human Harshita;
	Harshita.name="Harshita";
	Harshita.Introduce();
	
	Human sandhya ;
	sandhya.name="Sandhya";
	sandhya.Introduce();
	
}
