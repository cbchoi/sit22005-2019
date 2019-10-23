#include <iostream>
#include <vector>

struct Pair {
     std::string name;
     double val;
};

std::vector<struct Pair> pairs;
double& value(const std::string& s)
{
     for (int i=0; i < pairs.size( ); i++)
     	if  ( s == pairs[i].name) 
     		return pairs[i].val;

     Pair p = { s, 0 };
     pairs.push_back(p);       // add Pair at end
     
     return pairs[pairs.size( ) - 1].val;
}


int main()
{
	std::string buf;

    while(buf != "!" && std::cin >> buf)   
    {
    	value(buf)++;
    }

    for (std:: vector<struct Pair>::const_iterator p = pairs.begin( ); p!=pairs.end( ); ++p)
    	std::cout << p->name << " : " << p->val << std::endl;

    return 0;
}