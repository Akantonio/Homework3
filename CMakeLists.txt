cmake_minimum_required(VERSION 3.17)
project(Homework3)

set(CMAKE_CXX_STANDARD 20)

add_executable(Homework3 main.cpp MoneyClass.cpp MoneyClass.h tokenizer.h tokenizer.cpp test.cpp catch.hpp moneytest.cpp)