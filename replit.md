# CIS_5 Assignment 2 - BMI & Grade Calculator

## Overview
A C++ console application that collects user information, calculates BMI (Body Mass Index), and converts a numeric test score into a letter grade.

## Project Structure
- `main.cpp` - Main source file containing all program logic
- `README.md` - Assignment specifications and requirements
- `.gitignore` - Git ignore patterns for C++ projects

## Build & Run
The project uses Clang++ with C++17 standard:
```bash
clang++ -std=c++17 -o main main.cpp && ./main
```

## Features
- Collects user name, age, height, and weight
- Calculates BMI using formula: `weight / (height * height)`
- Categorizes BMI: Underweight, Normal weight, Overweight, Obese
- Converts test scores (0-100) to letter grades (A-F)
- Displays personalized summary message

## Architecture
Single-file C++ program with:
- `getBMICategory()` - Returns BMI category string based on BMI value
- `getLetterGrade()` - Returns letter grade based on numeric score
- `main()` - Handles user input/output and program flow
