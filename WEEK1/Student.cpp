#include "Student.h"

bool Student::SetAge(int input_age)
{
	this->age = input_age;
	return true;
}

int Student::GetAge()
{
	return this->age;
}