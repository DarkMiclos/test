cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(
  test
)

add_executable(
  ${PROJECT_NAME}
  "main.cpp"
)

install(
  TARGETS ${PROJECT_NAME}
  RUNTIME DESTINATION "."
)