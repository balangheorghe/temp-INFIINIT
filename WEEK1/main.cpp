#include "Student.h"
#include <stdio.h>

int main()
{
	Student s;
	s.SetAge(23);
	printf("Varsta studentului s: %d \n", s.GetAge());
	s.SetAge(26);
	printf("Varsta studentului s: %d \n", s.GetAge());

	return 0;
}