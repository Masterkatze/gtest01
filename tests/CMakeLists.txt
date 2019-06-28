enable_testing()

find_package(GTest REQUIRED)

macro(package_add_test TESTNAME)
	add_executable(${TESTNAME} ${ARGN})
	target_link_libraries(${TESTNAME} ${GTEST_LDFLAGS} GTest::Main)
	target_compile_options(${TESTNAME} PUBLIC ${GTEST_CFLAGS})
	add_dependencies(build_and_test ${TESTNAME})
	add_test(NAME ${TESTNAME} COMMAND ${TESTNAME})
endmacro()

macro(package_add_test2 TESTNAME)
	add_executable(${TESTNAME} ${ARGN})
	target_link_libraries(${TESTNAME} ${GTEST_LDFLAGS} GTest::Main)
	add_dependencies(build_and_test ${TESTNAME})
	gtest_discover_tests(${TESTNAME})
endmacro()

add_custom_target(build_and_test GTEST_COLOR=1 ${CMAKE_CTEST_COMMAND} -V)

add_subdirectory(SquareTest)
add_subdirectory(DivTest)
