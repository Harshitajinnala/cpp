#include<iostream>
using namespace std;
class Hu{
	//~ (tlide ) symbol doesn't have any data type it follows the class
	private:
	string *name;
	int *age; 
	public:
		Hu(string word="No name",int val=0)
		{
			name  = new string ;
			age =new int ;
			*name = word;
			*age = val;
		}
		void display(){
		cout<<*name<<" "<<*age<<endl;
	}
		~Hu()
		{
			delete name;
			delete age;
			cout<<"destructor is called";
	}
};
int main()
{
	Hu *h=new Hu("Anu",18);
	h->display();
	delete h;
}
