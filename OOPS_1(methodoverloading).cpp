#include<iostream>
using namespace std;
class Human{
	private:
		string name;
		int age;
	public:
		/*when we are passing the parameters it take the default parameters*/
//		Human(int age,string name)
//		{
//			this->name=name;
//			this->age=age;
//		}
/*here we are giving only age then it take the defalut parameters inside the below function */
//		Human(int age)
//		{
//			name="No name";
//			age=age;
//		}
//		Human(string name)
//		{
//			name=name;
//			age=0;
//		}
/* here it takes no parameters it print only the defalut parameter which we are written inside of Human()*/
//		Human()
//		{
//			name="No name";
//			age=0;
//		}
	Human(string name = "no name",int age = 0){
		this->name=name;
		this->age=age;
		
	}
	
//Copy Constructor
	Human(Human &h)
	{
		name=h.name;
		age=h.age;
	}



	void display();
};
void Human::display()
	{
			cout<<" HI! I am "<<name<<" with age "<<age<<endl;
	}
int main()
{
	Human h;
	Human h1("Harshita",18);
	Human h2(h1);
	h.display();
	h1.display();
	h2.display();
//	Human h;
//	h.display();

	
}
