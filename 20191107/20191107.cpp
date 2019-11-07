#include <iostream>
#include <fstream>

void print_function(std::ostream& out)
{
	out << "SIT22005" << std::endl;
}
/*
int main(int argc, char* argv[])
{
	std::cout << argc << std::endl;
	for(int i = 0; i < argc; i++)
	{
		std::cout << argv[i] << std::endl;
	}
	return 0;
}
*/

class Parent
{
private:
	int var;
public:
	void func(){ 
		int var = 10;
		Parent::var = var;
		func2();
	}
	void func2(){ std::cout << "Parent" << std::endl;}
};

class Child: public Parent
{	
private:

public:
	void func(){
		Parent::func();
		std::cout << "Child" << std::endl;
	}
};

int main()
{
	Parent p;
	Child c;
	Child* p_c = &c;

	p.func();
	std::cout << "---- " << std::endl;
	c.func();
	p_c->func2();

	print_function(std::cout);
	std::ofstream fout;
	fout.open("output.log");
	print_function(fout);

	return 0;
}