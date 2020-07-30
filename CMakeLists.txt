cmake_minimum_required(VERSION "3.18.0")

project("findroots")

add_executable("${PROJECT_NAME}" "Main.cpp")

install(TARGETS "${PROJECT_NAME}" DESTINATION bin) #CMAKE_INSTALL_PREFIX/bin
install(FILES "Main.cpp" DESTINATION arc) #CMAKE_INSTALL_PREFIX/bin