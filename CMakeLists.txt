cmake_minimum_required(VERSION 3.20)

project(R2Calculator VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(
	${PROJECT_NAME}
	"source/src.cpp"
)

add_subdirectory(tested_headers)
target_link_libraries(${PROJECT_NAME} tested_headers)