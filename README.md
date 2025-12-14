# SGPA Calculator in C (Using Arrays)

## Overview
This program calculates the **Semester Grade Point Average (SGPA)** for a student
based on marks obtained in multiple subjects. It accepts subject name, credits,
and marks as input, converts marks into grades and grade points using a
predefined grading scheme, stores all data in arrays, displays a subject-wise
table, and finally computes the SGPA.

---

## Features
- Accepts input for multiple subjects
- Stores all inputs using arrays
- Converts marks to grade and grade points
- Displays output in a formatted table
- Calculates SGPA using credit-weighted average
- Handles fail cases (Grade F = 0)

---

## Grading Scheme

| Marks Range | Grade | Grade Points |
|------------|-------|--------------|
| ≥ 90       | S     | 10 |
| 80 – 89    | A     | 9 |
| 70 – 79    | B     | 8 |
| 60 – 69    | C     | 7 |
| 50 – 59    | D     | 6 |
| 40 – 49    | E     | 4 |
| < 40       | F     | 0 |

---



## Formula Used

SGPA = ( Σ (Credits × Grade Points) ) / ( Σ Credits )


Subject Credits Marks Grade GradePoints
Physics 4 85 A 9
Math 4 92 S 10
Constitution 2 78 B 8

SGPA = 9.20

---

## Implementation Details
- **Programming Language:** C
- **Concepts Used:**
  - Arrays
  - Conditional statements
  - Loops
  - Formatted input/output

---

## How to Compile and Run

```bash
gcc sgpa_calculator.c -o sgpa
./sgpa


