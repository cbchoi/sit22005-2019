#include <iostream>

int overloadSum(int a, int b, int c)
{
  std::cout << "(i i i) version" << std::endl;
  return (a + b + c);
}

int overloadSum(int a, int b, float c, float d)
{
  std::cout << "(i i f f) version" << std::endl;
  return (a + b + c + d);
}

float overloadSum(float a, float b, float c)
{
  std::cout << "(f f f) version" << std::endl;
  return (a + b + c);
}

float overloadSum(int a, float b, float c)
{
  std::cout << "(i f f) version" << std::endl;
  return (a + b + c);
}

//The following produces a compile error!
//int overloadSum(int a, float b, float c)
//{
//  std::cout << "(i f f) version" << std::endl;
//  return (a + b + c);
//}

./