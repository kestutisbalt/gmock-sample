cmake_minimum_required(VERSION 2.6)

set(TEST_SRC_DIR "${CMAKE_CURRENT_SOURCE_DIR}")

file(GLOB TEST_SRC_FILES "${TEST_SRC_DIR}/*.cpp")

set(GMOCK_DIR "${CMAKE_CURRENT_SOURCE_DIR}/libs/gmock")
include_directories("${GMOCK_DIR}/include")

set(GTEST_DIR "${GMOCK_DIR}/gtest")
include_directories("${GTEST_DIR}/include")

add_subdirectory(${GMOCK_DIR})

foreach(TEST_SRC_FILE "${TEST_SRC_FILES}")
	get_filename_component(TEST_NAME "${TEST_SRC_FILE}" NAME_WE)
	add_executable("${TEST_NAME}" "${TEST_SRC_FILE}")
	add_dependencies("${TEST_NAME}" "${LIB_NAME}")
	target_link_libraries("${TEST_NAME}" "gmock_main" "gmock" "gtest" "${LIB_NAME}")
endforeach()
