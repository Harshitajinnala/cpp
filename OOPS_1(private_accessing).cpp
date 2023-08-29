#include<iostream>
using namespace std;
class Human{
	private:
		string name;
		int age;
	public:
		void SetData(int val,string word)
		{
			age=val;
			name=word;
		}
		void GetData()
		{
			cout<<"i am "<<name<<" with age "<<age<<endl;
		}
		
};
//we can use scope resolution to specify the Introduce is belong to the Human class only in public mode

int main()
{
	Human Harshita;
	Harshita.SetData(18,"Harshita");
	Harshita.GetData();
	
}
