# Contributing to Algorithms in C
Thank you for your interest in contributing! This repository contains Data Structures and Algorithms implemented in C. Your contributions are welcome and appreciated.


## How to Contribute

1. Fork the repository to your GitHub account. 

2. Clone your fork locally, create a branch, make edits, commit, push, and submit a Pull Request (PR):

git clone https://github.com/ < your-username > /Algorithms-in-C.git

cd Algorithms-in-C  //To enter in the directory

git checkout -b add-your-feature. //to create new branch

# Add your new algorithm file or improve existing code in the correct folder

git add .

git commit -m "Added < algorithm name > in C"

git push origin add-your-feature

# Open a Pull Request from your fork to the main branch of the original repository

Replace <your-username> with your GitHub username and <algorithm name> with the algorithm you are adding.

## Folder Structure

Algorithms-in-C/
├── DataStructures/
├── Sorting/
├── Searching/
├── Recursion/
└── Examples/

Place new files in the appropriate folder. If a new category is needed, create a descriptive folder.

## Coding Guidelines

- Language: C 
- File names: lowercase_with_underscores.c (e.g., bubble_sort.c)
- Indentation: 4 spaces (no tabs)
- Include a header comment at the top of each file:

/*
 * Algorithm: Bubble Sort
 * Time Complexity: O(n^2)
 * Space Complexity: O(1)
 * Author: Your Name
 */

- Include a main() function to demonstrate the algorithm.
- Code must compile without errors or warnings.
- Use clear and descriptive variable names.
- Avoid unnecessary global variables.
- Keep code modular, readable, and well-commented.

## Commit Guidelines
- Use clear and descriptive commit messages, e.g.,
  - Added bubble_sort algorithm in C
  - Fixed memory leak in linked_list.c
  - Improved comments and readability in stack.c

## Rules
- Do not push directly to main.
- Always create a branch and submit a PR.
- Avoid duplicate implementations.
- Contributions that improve readability, fix bugs, or add new algorithms are welcome.
Thank you for helping make Algorithms in C better for everyone! 🚀
