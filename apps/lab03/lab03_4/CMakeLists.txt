project("lab03_4")

include_directories(include)

file(GLOB SRC "src/*.c")

add_executable (${PROJECT_NAME} ${SRC} ${COMMON_DEPS})
