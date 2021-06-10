#include <math.h>
#include <iostream>
#include "../configs/AppConfig.hpp"
#ifdef USE_APP_MATH
#include "libs/math/BasicMath.hpp"
#endif

int main(int argc, char *argv[]) {
  std::cout << "Wat da phuc" << std::endl;
  if (argc < 2) {
    std::cout << argv[0] << " Version " << TestBase_VERSION_MAJOR << "."
              << TestBase_VERSION_MINOR << std::endl;
  }

  const int input = std::stod(argv[1]);
#ifdef USE_APP_MATH
  const double sqrtValue = appSqrt(input);
#else
  const double sqrtValue = sqrt(input);
#endif
  std::cout << "The square root of " << input << " is " << sqrtValue
            << std::endl;
  return 1;
}
