# Rock, Paper, Scissors Game

## Overview
This C program simulates a simple game of Rock, Paper, Scissors between the user and the computer. Upon running the program, the user is prompted to select Rock, Paper, or Scissors. The computer's choice is generated randomly. The program then determines the winner based on the choices made.

## How to Compile and Run
1. Ensure you have a C compiler installed (e.g., GCC).
2. Compile the program using the command: `gcc -o rock_paper_scissors rock_paper_scissors.c`
3. Run the program: `./rock_paper_scissors`

## Input
- User inputs their choice as an integer (1 for Rock, 2 for Paper, 3 for Scissors).

## Output
- The program outputs the user's choice, the computer's choice, and the result of the game (win, lose, tie).

## Functions
- `getChoice(int choice)`: Returns the string equivalent of the user's or computer's numeric choice.
- `getWinner(int userChoice, int computerChoice)`: Determines the winner based on the choices.
- `validateInput(int choice)`: Validates the user's input.
- `generateComputerChoice()`: Generates a random choice for the computer.

## Return Values
- Main function returns `0` on successful execution and `1` if an invalid choice is entered by the user.
