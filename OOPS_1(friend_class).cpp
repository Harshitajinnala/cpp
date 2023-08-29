#include <bits/stdc++.h>
using namespace std;
class Human{
private:
	string name;
	int age;
public:
	Human(string word,int val)
	{
         name=word;
         age=val;
	}
	friend void display(Human Anu);
	

};
void display(Human Anu)
{
	cout<<Anu.name<<" "<<Anu.age<<endl;
}

	



int main()
{
Human Anu("Anu",18);
display(Anu);
}
