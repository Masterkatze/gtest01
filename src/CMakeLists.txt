add_executable(main
	"main.cpp"
	"square.cpp" "square.hpp")

target_include_directories(main PUBLIC
	${CMAKE_CURRENT_SOURCE_DIR}
)
