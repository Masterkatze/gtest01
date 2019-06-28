add_executable(main "main.cpp")

target_include_directories(main PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)

add_library(math STATIC "math.cpp" "math.hpp")

target_link_libraries(main math)
