#pragma once
#include "stdafx.h"
using std::string;

class Person
{

public:
	Person();
	~Person();
	Person(string name, int age);
	Person(const Person &person);
	void say_hello() const;
	static void swap(Person &p1, Person &p2);
	void rename(string newName);



private:
	string name_{};
	int age_;
};

