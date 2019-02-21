#include <iostream>
#include <cmath>
#include <boost/timer/timer.hpp>

int main()
{
  boost::timer::auto_cpu_timer t;

  std::cout << "Hello CMake Template!" << std::endl;

  for (long i = 0; i < 100000000; ++i) {
    std::sqrt(123.456L);
  }

  return 0;
}
