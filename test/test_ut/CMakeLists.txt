enable_testing()

add_executable(
  application_test
  main.cpp
  application_test_ut.cpp
  ${CMAKE_SOURCE_DIR}/src/application.cpp
)
target_link_libraries(
  application_test
  gtest_main
  gmock_main
)

target_include_directories(application_test
PRIVATE
    ${CMAKE_SOURCE_DIR}/include
	  ${CMAKE_SOURCE_DIR}/test/mocks
)

include(GoogleTest)
gtest_discover_tests(application_test)