cmake_minimum_required(VERSION 3.16)
project(OOP)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_FLAGS
    "-fsanitize=address -fsanitize=undefined -fstack-protector-strong -Wno-unused-result -Wall -Wextra -Wconversion -Werror=uninitialized -Werror=vla -Werror=return-type -Wshadow -Wnull-dereference -Wformat -Wformat-security -Wstrict-overflow -Wstrict-prototypes -Wcast-align -Wredundant-decls -Wpedantic -Werror -Wno-shadow"
)

file(GLOB CHILDREN RELATIVE ${CMAKE_SOURCE_DIR} ${CMAKE_SOURCE_DIR}/*)
foreach(dir ${CHILDREN})
    if(IS_DIRECTORY ${CMAKE_SOURCE_DIR}/${dir} AND dir MATCHES "^[0-9]+$")
        add_subdirectory(${dir})
    endif()
endforeach()
