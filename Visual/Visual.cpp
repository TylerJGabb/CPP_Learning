// Visual.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h";
using std::string;
using std::endl;
using std::cout;

void test_people_swap()
{
	auto p1 = Person("Person1", 10);
	auto p2 = Person("Person2", 20);
	Person::swap(p1, p2);

	p1.say_hello();
	p2.say_hello();
}

void demonstrate_construction()
{
	Person person1("Tyler", 26);
	Person person2; //default constructor called
	Person copyOf1(person1);
	copyOf1.rename("Copy of Tyler");

	Person *personPtr = new Person("A pointer", 55);
	personPtr->say_hello();
	person1.say_hello();
	person2.say_hello();
	copyOf1.say_hello();
}


int main()
{
	cout << "Swapping two people..." << endl;
	test_people_swap();
	cout << "Using various constructors" << endl;
	demonstrate_construction();
}

