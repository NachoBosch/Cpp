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

1-Encapsulation: is the idea of tie together the data with methods
that operate with data within a class. The only way to acces to the properties of the class
is throughout the methods setters and getters.
2-Abstraction: hidden the complexing behing procedure makes look simple.



*/
#include <iostream>
#include <string>
using namespace std;
using std::string;


class Employee{
private:
	string Name;
	string Company;
	int Age=0;
public:
	void setName(string name){//setter
		Name = name;
	}
	string getName(){//getter
		return Name;
	}
	void setCompany(string company){
		Company = company;
	}
	string getCompany(){
		return Company;
	}
	void setAge(int age){
		if(age>=18){Age=age;}
		
	}
	int getAge(){
		return Age;
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

	employee1.setAge(15);
	cout<<employee1.getName()<<" is "<<employee1.getAge()<<" years old!"<<endl;



}
