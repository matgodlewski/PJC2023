cmake_minimum_required(VERSION 3.26)
project(PJC2023)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY  https://github.com/fmtlib/fmt
        GIT_TAG         10.0.0
)

FetchContent_MakeAvailable(fmt)

add_executable(ReversingWordsInText reversing-words-in-text/reversing-words-in-text.cpp)
add_executable(CorrectSudoku correct-sudoku/correct-sudoku.cpp)
add_executable(BoxPrint box-print/box-print.cpp)

target_link_libraries(ReversingWordsInText fmt)
target_link_libraries(CorrectSudoku fmt)
target_link_libraries(BoxPrint fmt)
