# Минимальная версия CMake
cmake_minimum_required(VERSION 3.10)

# Название проекта
project(FactorialProject)

# Устанавливаем стандарт C++ (например, C++17)
set(CMAKE_CXX_STANDARD 17)

# Добавляем директорию с заголовочными файлами
include_directories(include)

# Указываем исходные файлы проекта
set(SOURCE_FILES
    src/factorial.cpp
    src/main.cpp
)

# Добавляем тесты
enable_testing()

# Указываем путь к GTest (путь может отличаться в зависимости от вашей системы)
find_package(GTest REQUIRED PATHS /opt/homebrew/Cellar/googletest/1.16.0/lib/cmake/GTest)

# Добавляем директорию с заголовочными файлами
include_directories(${GTEST_INCLUDE_DIRS})

# Добавляем юнит-тесты
add_executable(factorial_test tests/factorial_test.cpp)
target_link_libraries(factorial_test ${GTEST_LIBRARIES} pthread)
add_test(NAME factorial_test COMMAND factorial_test)
