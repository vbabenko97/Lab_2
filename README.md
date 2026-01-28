# Lab 2

Simple C++ console application for managing a small list of students in a university.
It supports adding sample students, listing them, filtering by faculty or birth year,
removing by index, and comparing ages.

## Build

```sh
g++ -std=c++11 -Wall -Wextra -pedantic Main.cpp Student.cpp University.cpp -o lab2
```

## Run

```sh
./lab2
```

## Usage notes

- The program is interactive for `remove()` and `compare()` operations, so be ready to
  enter indices when prompted.
- The `University` instance in `Main.cpp` is initialized with a fixed capacity; trying
  to add more students than the capacity will print a warning.
