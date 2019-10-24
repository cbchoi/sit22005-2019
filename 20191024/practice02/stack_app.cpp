#include <iostream>

#include "my_stack.h"
#include <random>
#include <cstring>

int main()
{
	char buf[100];
	Stack* s = CreateStack(100);

	std::cout << "Enter expression:";
	std::cin.getline(buf, 100);

	for(unsigned int i = 0; i < strlen(buf);i++)
	{
		if(buf[i] == '(' || buf[i] == ')')
		{
			if(buf[i] == '(')
			{
				Element e;
				e.ch = buf[i];
				Push(s, e);
			}	
			else if(buf[i] == ')')
			{
				if(IsEmptyStack(s))
				{
					std::cout << "unpaired" << std::endl;
					exit(0);
				}
				Pop(s);
			}
		}
	}

	if(IsEmptyStack(s))
		std::cout << "paired" << std::endl;
	else
		std::cout << "unpaired" << std::endl;

	return 0;
}