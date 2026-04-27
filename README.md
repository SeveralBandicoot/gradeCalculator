# Grade Calculator (C++)
Grade Calculator is a command-line C++ application that helps students calculate their current weighted course grade across multiple assignment categories. Instead of manually computing averages, students can input their assignment types, weights, scores, and totals — and the program outputs their overall grade percentage in real time.

## What it Does
The program walks the user through three stages:
1. Assignment Type Setup — The user enters each category of graded work in their course (e.g., homework, quiz, exam) along with each category's weight as a percentage of the final grade.
2. Frequency Input — The user specifies how many assignments of each type have been completed so far in the semester.
3. Score Entry — For each completed assignment, the user enters the total possible points and the points they earned. The program accumulates scores per category and computes a weighted overall grade.

At the end, the program displays the student's current overall course grade as a percentage. 

## How it was made
This project was built using C++ with the standard library only — no external dependencies required.

### Tools & Technologies
- Language: C++ (C++11 and later)
- Standard Libraries: <iostream>, <vector>
- IDE/Compiler: Any standard C++ compiler (g++, clang++, MSVC)
- Version Control: Git/GitHub

### Core Concepts Used
- `std::vector` for dynamic storage of assignment types, weights, amounts, and scores
- Nested for loops to iterate over categories and individual assignments
- Weighted average formula: `finalGrade = weightedSum / totalWeight`
- A while loop with a sentinel value ("e") for user-controlled input exit

### Steps Taken
1. Planned the logic — Outlined the three-phase user flow `(setup → frequency → scores)` before writing any code.
2. Built the data structures — Used parallel vectors to store assignment types, weights, counts, and grades by category.
Implemented input loops — Used a while loop for open-ended category entry and for loops for structured score entry.
3. Calculated the weighted grade — Applied weighted sum divided by total weight to handle non-uniform category weights.
4. Tested edge cases — Verified behavior for single-category courses, all-zero scores, and unequal weights.

### Bugs Fixed
- Off-by-one in score prompt: The score prompt for individual assignments originally displayed `assignmentTypesList[j]` with index `j` (0-based), which printed quiz 0 instead of quiz 1. Fixed by using `j + 1` in the display string.
- Grade accumulation bug: `gradesByCatList` was being populated inside the inner loop but indexed by `i` (the outer loop index) when computing the weighted sum. Resolved by computing the category average directly from `actualPoints / totalPoints` rather than reading back from the list.
- Incorrect weighted average: Initially the program summed grades without dividing by total weight, causing incorrect results when weights didn't add up to 100. Fixed by dividing `weightedSum` by `totalWeight`.

### Demo Video

https://github.com/user-attachments/assets/c2b426f3-c6b1-4b00-8a38-811ef734cec7

### How to Run
`# Compile`\
`g++ -o grade_calculator main.cpp`\
`# Run`\
`./grade_calculator`\
Then follow the on-screen prompts to enter your course's grading structure and scores. 

### Future Improvements
- Add "gaurdrails" to prevent unrealistic grade calculations
- Add a potential grade calculator mode (already scaffolded in main())
- Support letter grade output (A/B/C/D/F) alongside percentage
- Allow users to save and load grade data from a file
- Build a simple GUI using a library like Qt or Dear ImGui

Project by AJ Arguello | Fall/2025
