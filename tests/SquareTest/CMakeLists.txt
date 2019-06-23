macro(package_add_test TESTNAME)
	add_executable(${TESTNAME} ${ARGN})
	target_link_libraries(${TESTNAME} ${GTEST_LDFLAGS})
	target_compile_options(SquareTest PUBLIC ${GTEST_CFLAGS})
	add_test(NAME ${TESTNAME} COMMAND ${TESTNAME})
endmacro()

pkg_search_module(GTEST REQUIRED)

package_add_test(SquareTest main.cpp square_test.cpp)
