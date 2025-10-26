# Simple ATM Banking System - Mini Project Presentation

## Slide 1: Title Slide

- **Project Title:** Simple ATM Banking System
- **Course:** Problem Solving
- **Students:** [Student 1 Name], [Student 2 Name]
- **Date:** October 25, 2025

## Slide 2: Project Overview

- **Objective:** Create a simple ATM banking system in C that demonstrates the use of structures and file I/O concepts.
- **Features:**
  - Create new account
  - Login with account number and PIN
  - Check balance
  - Deposit money
  - Withdraw money
- **Concepts Covered:** Structures, File Operations, Functions, Arrays, Control Structures

## Slide 3: System Requirements

- **Programming Language:** C
- **Modules Covered:**
  - Basics of Programming
  - Control Structures and Functions
  - Arrays & Strings
  - Functions & Modular Thinking
  - Pointers & Memory (not heavily used)
  - Structures & File I/O

## Slide 4: System Design

- **Data Structure:** Account struct with fields:
  - Account Number (int)
  - Name (char array)
  - Balance (float)
  - PIN (int)
- **File Storage:** Accounts stored in "accounts.txt" as comma-separated values
- **Modular Design:** Separate functions for each operation

## Slide 5: Algorithm Overview

1. Load existing accounts from file
2. Display main menu (Create Account, Login, Exit)
3. For Create Account: Input details, assign account number, save to file
4. For Login: Verify account number and PIN
5. If logged in: Display submenu (Check Balance, Deposit, Withdraw, Logout)
6. Perform selected operation, update balance, save to file
7. Repeat until exit

## Slide 6: Code Structure

- **atm.h:** Header file with struct definition and function prototypes
- **atm.c:** Implementation of all ATM functions
- **main.c:** Main function with menu-driven interface
- **accounts.txt:** Data file for storing account information

## Slide 7: Key Functions

- `load_accounts()`: Read accounts from file into array
- `save_accounts()`: Write accounts array to file
- `create_account()`: Create new account and add to system
- `login()`: Authenticate user with account number and PIN
- `check_balance()`, `deposit()`, `withdraw()`: Account operations

## Slide 8: File I/O Implementation

- **Loading:** Use `fopen("accounts.txt", "r")` and `fscanf` to read each line
- **Saving:** Use `fopen("accounts.txt", "w")` and `fprintf` to write all accounts
- **Format:** Each line: account_no,name,balance,pin

## Slide 9: Structures Usage

- **Account struct:** Groups related data together
- **Array of structs:** `Account accounts[MAX_ACCOUNTS]`
- **Access:** Use dot operator to access fields (e.g., `accounts[i].balance`)

## Slide 10: Testing and Validation

- **Test Cases:**
  - Create multiple accounts
  - Login with correct/incorrect credentials
  - Deposit and withdraw amounts
  - Check balance after transactions
  - Verify data persistence across program runs

## Slide 11: Challenges Faced

- Handling file operations correctly
- Implementing menu-driven interface
- Ensuring data integrity and validation
- Managing array of structures

## Slide 12: Learning Outcomes

- Understanding of C programming fundamentals
- Application of structures for data organization
- File I/O for data persistence
- Modular programming with functions
- Problem-solving and algorithm design

## Slide 13: Future Enhancements

- Add transfer between accounts
- Implement better security (encryption)
- Use binary files instead of text
- Add transaction history
- GUI interface

## Slide 14: Conclusion

- Successfully implemented a simple ATM system covering required concepts
- Demonstrated practical application of C programming skills
- Gained experience in system design and file handling

## Slide 15: Q&A

- Questions?
