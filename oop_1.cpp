/*
class employee
In cpp we have three access modifiers: private, public, protected
Private is by default in every class
A Method is useful for describe a behaviour of the object.
For construct an object many times with the same variables we use Constructor
*/
#include <iostream>
#include <string>
using namespace std;
using std::string;


class Employee{
public:
	string Name;
	string Company;
	int Age;

	void data(){

	}
	void IntroduceYourself(){
		cout<<"Name: "<<Name<<endl;
		cout<<"Company: "<<Company<<endl;
		cout<<"Age: "<<Age<<endl;
	}
};
int main(){
	Employee employee1;
	employee1.Name = "Nacho";
	employee1.Company = "YT-CodeBeauty";
	employee1.Age = 29;
	employee1.IntroduceYourself();
	Employee employee2;
	employee2.Name = "John";
	employee2.Company = "Amazon";
	employee2.Age = 30;
	employee2.IntroduceYourself();

}