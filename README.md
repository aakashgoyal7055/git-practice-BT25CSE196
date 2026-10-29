# git-practice-BT25CSE196

Name=Aakash Goyal
Roll Number=BT25CSE196
Section=CSE-C
Course=IT Workshop-I, III Semester CSE, IIIT Nagpur |

# About this assignment

This repository is my Git and GitHub practice assignment. The work is done with the usual
workflow: branches, commits with descriptive messages, issues, pull requests and merge-conflict
resolution. The programs are C++ exercises on static data members and static member functions.

# Completed exercises

## What I completed

I finished three C++ exercises, all about static members in classes:

1. **Online Shopping - Order Tracking** (`exercise-01`): Every time an `Order` is created, a shared static counter goes up by one. I use `getTotalOrders()` to read the total without needing an object.

2. **Bank - Interest Rate Management** (`exercise-02`): All `BankAccount` objects share one interest rate. I change it for everyone at once with `setInterestRate()`, and each account then updates its own balance with `applyInterest()`.

Every folder has the source code and an `output.txt` showing what the program prints. None of the programs ask for keyboard input, so there are no separate input files.

# How to compile and run

Requires a C++ compiler such as `g++` (C++11 or later).
# Exercise 1
g++ -std=c++11 -Wall -o order exercise-01/order_tracking.cpp
./order

# Exercise 2
g++ -std=c++11 -Wall -o bank exercise-02/bank_interest.cpp
./bank

On Windows (MinGW) run the produced file as `order.exe`, `bank.exe`, `student.exe`.
Compiled binaries are not committed (see `.gitignore`).

## Git practice record

All commands used, with explanations and the merge conflict I resolved, are in
[`git-commands.md`](git-commands.md).