﻿#include "test.h"
#include "vector.h"
#include "test_class.h"
#include <vector>


void test_copy_constructor ()
{
  TRACE_FUNC;
  for (int i{0}; i < 10'000; ++i)
  {
    try
    {
      vector<H> v{vector<H>{H(true), H(false), H(true), H(true), H(true)}};
      std::cout << "v.size(): " << v.size() << std::endl;
    }
    catch (...)
    {
      std::cerr << "i: " << i << std::endl;
    }
  }
}
