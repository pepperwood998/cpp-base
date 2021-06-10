cmake_minimum_required(VERSION 3.10)
project(TestBase VERSION 1.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

option(USE_APP_MATH "Use application math implementation" ON)
configure_file(configs/AppConfig.hpp.in configs/AppConfig.hpp)

if (USE_APP_MATH)
  add_subdirectory(src/libs/math)
  list(APPEND EXTRA_LIBS AppMath)
endif()

add_executable(TestBase src/main.cpp)

target_link_libraries(TestBase PUBLIC ${EXTRA_LIBS})
target_include_directories(TestBase PUBLIC "${PROJECT_BINARY_DIR}")

install(TARGETS TestBase DESTINATION "test-base/bin")
install(FILES "${PROJECT_BINARY_DIR}/configs/AppConfig.hpp" DESTINATION "test-base/include")
