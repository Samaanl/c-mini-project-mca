# Problem Solving Mini Project: Simple ATM Banking System in C

This is our mini project for the Problem Solving course in the MCA (Masters of Computer Application) program, implementing a simple ATM banking system in C. The project demonstrates the use of structures and file I/O concepts.

## Features

- Create a new bank account
- Login with account number and PIN
- Check account balance
- Deposit money
- Withdraw money

## Files

- `atm.h`: Header file containing struct definition and function prototypes
- `atm.c`: Implementation of ATM functions
- `main.c`: Main program with menu-driven interface
- `accounts.txt`: Data file storing account information (created automatically)
- `presentation.md`: Presentation slides content

## Compilation

To compile the program, run:

```
gcc main.c atm.c -o atm.exe
```

## Running the Program

Execute the compiled program:

```
./atm.exe
```

Follow the on-screen menu to perform ATM operations.

## Data Storage

Account data is stored in `accounts.txt` in CSV format:

```
account_no,name,balance,pin
```

## Concepts Demonstrated

- Structures for data organization
- File I/O for data persistence
- Functions and modular design
- Arrays and strings
- Control structures (if-else, switch, loops)
- Input/output operations

## Authors

- [Samaan Sayed](https://github.com/samaanl)
- [Apa](https://github.com/Apamestry)
