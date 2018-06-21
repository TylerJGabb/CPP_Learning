#include "stdafx.h"
#include "Person.h"
using std::string;
using std::endl;



Person::Person(string name, int age)
{
	name_ = name;
	age_ = age;
}


/**
 * \brief Copy Constructor. uses Const keyword becuase does not modify the original reference
 */
Person::Person(const Person& person)
{
	name_ = person.name_;
	age_ = person.age_;
}

void Person::say_hello() const
{
	std::cout << "Hello! My name is " + name_ +
		" and I am " + std::to_string(age_) +
		" years old." << endl;

}

void Person::swap(Person& p1, Person &p2)
{
	const auto temp = Person(p1);
	p1.name_ = p2.name_;
	p1.age_ = p2.age_;

	p2.name_ = temp.name_;
	p2.age_ = temp.age_;
}

void Person::rename(string newName)
{
	name_ = newName;
}


Person::Person() : name_("Default"), age_(-1)
{

}

Person::~Person()
= default;




