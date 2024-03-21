// Include libraries
#include <stdio.h>
#include <stdlib.h>

// Function to get choice
char *getChoice(int choice) {
  switch (choice) {
  case 1:
    return "Rock";
  case 2:
    return "Paper";
  case 3:
    return "Scissors";
  default:
    return "Invalid choice";
  }
}

// Function to determine winner
char *getWinner(int userChoice, int computerChoice) {
  if (userChoice == computerChoice) {
    return "It's a tie!";
  } else if ((userChoice == 1 && computerChoice == 3) ||
             (userChoice == 2 && computerChoice == 1) ||
             (userChoice == 3 && computerChoice == 2)) {
    return "You win!";
  } else {
    return "Computer wins!";
  }
}

// Function to validate user input
int validateInput(int choice) {
  if (choice < 1 || choice > 3) {
    printf("\nInvalid choice. Please try again.\n");

    // Return error
    return 1;
  }

  // Return success
  return 0;
}

// Function to generate computer choice
int generateComputerChoice() { return rand() % 3 + 1; }

// Main function
int main() {
  // Initialize variables
  int userChoice;
  int computerChoice;

  // Print welcome message
  printf("Welcome to Rock, Paper, Scissors!\n");
  printf("\nPlease choose one of the following:\n");
  printf("\n1. Rock\n");
  printf("2. Paper\n");
  printf("3. Scissors\n");

  // Get user input
  printf("\nEnter your choice: ");
  scanf("%d", &userChoice);

  // Validate user input
  if (validateInput(userChoice)) {
    // Return error
    return 1;
  }

  // Generate computer choice
  computerChoice = generateComputerChoice();

  // Print user and computer choices
  printf("\nYou chose: %s\n", getChoice(userChoice));
  printf("Computer chose: %s\n", getChoice(computerChoice));

  // Determine winner
  printf("\n%s\n", getWinner(userChoice, computerChoice));

  // Return success
  return 0;
}
