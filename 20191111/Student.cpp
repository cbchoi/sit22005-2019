#include "Student.h"

#include <iostream>

Student::Student()
{
	std::cout << "Student" << std::endl;
}

Student::Student(int num)
{
	age = num;
}

int Student::speak(int num)
{
	std::cout << age << std::endl;
	switch(num)
	{
		case 1:
		{
			std::cout << "Hello, World" << std::endl;
		}
		break;
		case 2:
		{
			std::cout << "Bye, World" << std::endl;
		}
		break;
	}
	return 0;
}