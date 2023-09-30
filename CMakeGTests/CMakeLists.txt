cmake_minimum_required(VERSION 3.20)

project(R2Lib_Test VERSION 0.0.1)

include(FetchContent)

FetchContent_Declare(
	googletest
	# Specify the commit you depend on and update it regularly.
	URL https://github.com/google/googletest/archive/refs/heads/main.zip
)

# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)

# Now simply link against gtest or gtest_main as needed. Eg
add_executable(${PROJECT_NAME} MatrixVector_Test.cpp)

target_link_libraries(
	${PROJECT_NAME}
	tested_headers
	gtest_main
)

add_test(NAME "${PROJECT_NAME}_test" COMMAND ${PROJECT_NAME})
