/*
class employee
In cpp we have three access modifiers: private, public, protected
Private is by default in every class
A Method is useful for describe a behaviour of the object.
For construct an object many times with the same variables we use Constructor
To build a constructor there is 3 rules: 
	1. No return type
	2. The constructor has the same name that the class that belong it
	3. The constructor must be public (but not always)
	When we decide to create a constructor will be delete it the default constructor
	
*/
#include <iostream>
#include <string>
using namespace std;
using std::string;


class Employee{
public:
	string Name;
	string Company;
	int Age=0;

	void data(){

	}
	void IntroduceYourself(){
		cout<<"Name: "<<Name<<endl;
		cout<<"Company: "<<Company<<endl;
		cout<<"Age: "<<Age<<endl;
	}
/*private:*/
	Employee(string name, string company, int age){
		Name = name;
		Company = company;
		Age = age;
	}
};
int main(){
	Employee employee1=Employee("Nacho","cys",29);
	/*employee1.Name = "Nacho";
	employee1.Company = "YT-CodeBeauty";
	employee1.Age = 29;*/
	employee1.IntroduceYourself();
	Employee employee2=Employee("john","amazon",28);
	/*employee2.Name = "John";
	employee2.Company = "Amazon";
	employee2.Age = 30;*/
	employee2.IntroduceYourself();

}
