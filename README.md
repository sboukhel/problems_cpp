# C++ Practice & Problem Solving

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue.svg)](https://isocpp.org/)
[![Repository](https://img.shields.io/badge/Project-Learning%20Repository-informational.svg)](https://github.com/sboukhel/problems_cpp)

A growing collection of **C++ programming exercises and interactive console games**. This repository documents my practical learning journey as I strengthen my programming fundamentals, improve logical thinking, and develop the habit of breaking problems into clear, reusable functions.

The exercises are organized into levels, while the game projects provide small, hands-on applications of the concepts being practiced.

## Repository Contents

| Directory / File | Description |
| --- | --- |
| `problems_level1/` | Foundational C++ exercises focused on basic programming logic. |
| `problems_level2/` | More involved exercises that build on the fundamentals. |
| `MATH_GAME/` | An interactive arithmetic quiz with selectable difficulty and operations. |
| `SPS_GAME/` | A multi-round Stone, Paper, Scissors game against the computer. |

### Selected Projects

#### Math Game

An interactive arithmetic quiz where the player can choose:

- The number of questions.
- A difficulty level: Easy, Medium, Hard, or Mixed.
- An operation: Addition, Subtraction, Multiplication, Division, or Mixed.

At the end of the quiz, the program displays the number of correct and incorrect answers and the final result.

**Source:** `MATH_GAME/MATH_GAME.cpp`

#### Stone, Paper, Scissors

A console-based game in which the player competes against a computer-generated choice over a selected number of rounds. It tracks round results, player wins, computer wins, and draws, then displays the overall result.

**Source:** `SPS_GAME/SPS_GAME.cpp`

## Concepts Practiced

The repository is used to practice and reinforce concepts such as:

- Variables, data types, operators, and expressions.
- Conditions, loops, and control flow.
- Functions and modular program structure.
- Arrays and two-dimensional arrays.
- Structures and enumerations.
- Random number generation.
- User input and basic input validation.
- Counters, score tracking, and problem decomposition.

## Getting Started

### Requirements

- A C++ compiler: **G++** or **Clang++**.
- A terminal to compile and run the programs.

Check that a compiler is installed:

```bash
g++ --version
```

### Clone the Repository

```bash
git clone https://github.com/sboukhel/problems_cpp.git
cd problems_cpp
```

### Compile and Run

Each exercise is a separate program and should be compiled individually.

**Math Game**

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic MATH_GAME/MATH_GAME.cpp -o math_game
./math_game
```

**Stone, Paper, Scissors**

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic SPS_GAME/SPS_GAME.cpp -o sps_game
./sps_game
```

**A Level 1 Exercise**

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic problems_level1/problem01.cpp -o problem01
./problem01
```

**A Level 2 Exercise**

```bash
g++ -std=c++17 -Wall -Wextra -Wpedantic problems_level2/problem01.cpp -o problem02
./problem02
```

> **Note:** The game programs use terminal control commands and escape sequences for screen and color effects. A Unix-like terminal (such as Linux or macOS) is recommended.

## Project Structure

```text
problems_cpp/
├── MATH_GAME/
│   └── MATH_GAME.cpp
├── SPS_GAME/
│   └── SPS_GAME.cpp
├── problems_level1/
│   ├── problem01.cpp
│   └── ...
├── problems_level2/
│   ├── problem01.cpp
│   └── ...
├── .gitignore
└── README.md
```

The exercise folders may grow as more problems and solutions are added.

## Learning Approach

This repository is an evolving practice space. The focus is on understanding the problem, designing a straightforward solution, implementing it in C++, and improving the code through review and experimentation. The exercises are kept as individual source files so they can be compiled, tested, and studied independently.

## Progress

New exercises, refinements, and small projects will be added as my C++ skills develop.

## Author

**Sabir Boukhelyf**

- GitHub: [@sboukhel](https://github.com/sboukhel)
- Repository: [problems_cpp](https://github.com/sboukhel/problems_cpp)
