# Correct sudoku

### Correctly solved sudoku in the file

Sudoku is a game that involves arranging the numbers on a 9x9 board in the right way. In each row and in each column, each digit (1 - 9) must appear exactly once. By dividing the board into nine pieces consisting of fields arranged in a 3x3 square, each of these pieces must also consist of each of the numbers - without repetitions.

Sudoku in the file is written in nine lines, each of which consists of nine digits separated by single spaces. The files considered are text.

Write a program that, for a given path to the folder containing text files storing Sudoku solutions, will create a new text file called solutions.txt, in which it will place all the names of the mentioned files containing correctly solved Sudoku puzzles.

### Examples

    5 3 4 6 7 8 9 1 2
    6 7 2 1 9 5 3 4 8
    1 9 8 3 4 2 5 6 7
    8 5 9 7 6 1 4 2 3
    4 2 6 8 5 3 7 9 1
    7 1 3 9 2 4 8 5 6
    9 6 1 5 3 7 2 8 4
    2 8 7 4 1 9 6 3 5
    3 4 5 2 8 6 1 7 9

There are no errors in the above solution.

    7 9 4 1 8 3 2 5 6
    6 1 3 7 2 5 8 9 8
    5 8 2 9 6 4 7 3 1
    2 7 1 5 4 8 9 6 3
    9 3 6 2 1 7 4 8 5
    4 5 8 6 3 9 1 7 2
    1 4 5 8 9 2 6 3 7
    8 6 9 3 7 1 5 4 2
    3 2 7 4 5 6 9 1 4

In the example above, the problems are:

    There are two eights in the second row.
    There are two fours in the last row.
    There are two nines in the third from the bottom column.
    There are two threes in the second from the bottom column.
    There are two 2s in the last column.
    There are two figure eights in the upper right 3x3 segment.
    There are two fours in the lower left 3x3 segment.