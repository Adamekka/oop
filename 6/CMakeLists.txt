get_filename_component(DIR_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

file(GLOB SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
add_executable(${DIR_NAME} ${SOURCES})

set_target_properties(${DIR_NAME} PROPERTIES OUTPUT_NAME "a.out")
