#include <iostream>
#include <string>
#include <cstring>

class Human
{
private:
	int age;
	char* _name;

public:
	int get_age(){ return age; }

	static int ref_cnt;

public:
	Human()
	{
		age = 20;
		_name = new char[20];
	}

	Human(const Human& rhs)
	{
		age = rhs.age;
		_name = new char[20];
		strcpy(_name, rhs._name);
	}

	~Human()
	{
		delete [] _name;
	}

	Human& operator=(const Human& rhs)
	{
		if(&rhs != this)
		{
			delete [] _name;

			age = rhs.age;
			_name = new char[20];
			// string copy	
			strcpy(_name, rhs._name);
		}
		
		return *this;
	}

public:
	void wakeup(){}

	void study(){}

	std::string speak()
	{
		return "";
	}

	void listen(std::string contents){}

	void sleep(){}
};

int Human::ref_cnt = 0;

class HandongStudent: public Human
{
public:
	void wakeup(){
		std::cout << "Why not change the world!" << std::endl;
	}
};

int main()
{
	Human h1;
	HandongStudent h2;

	Human h3 = h1;

	h1.wakeup();
	h2.wakeup();

	Human h4 = h1;

	h1.study();
	h2.study();

	std::string contents = h1.speak();
	h2.listen(contents);
	std::string response = h2.speak();
	h1.listen(response);

	h1.sleep();
	h2.sleep();

	Human h5 = h1;

	return 0;
}