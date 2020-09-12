#pragma once

#ifndef Add_Hpp_
#define Add_Hpp_

class Add
{
 public:
  template<class T>
  T DoAdd(const T& a, const T& b)
  {
    return a + b;
  }
};

#endif /* Add_Hpp_ */