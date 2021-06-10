add_library(AppMath BasicMath.cpp)
target_include_directories(AppMath INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})

install(TARGETS AppMath DESTINATION "test-base/lib")
install(FILES BasicMath.hpp DESTINATION "test-base/include")
