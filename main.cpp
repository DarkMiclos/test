#include <iostream>

#include "Add.hpp"

int main()
{
  Add adder;
  std::cout << "Hello World!" << std::endl;
  std::cout << "2 + 3 = " << adder.DoAdd<int>(2, 3) << std::endl;
  std::cout << "0.5 + 0.3 = " << adder.DoAdd<double>(0.5, 0.3) << std::endl;
  return 0;
}