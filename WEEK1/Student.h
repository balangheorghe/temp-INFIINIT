#pragma once
class Student
{
	//3 modificatori de access: private, protected, public
	//by default: private
	int age;
public:
	bool SetAge(int input_age);
	int GetAge();
};

