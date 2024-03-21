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

// Main function
int main() {
  // Initialize variables
  int userChoice;
  int computerChoice;

  // Print welcome message
  printf("\nWelcome to Rock, Paper, Scissors!\n");
  printf("\nPlease choose one of the following:\n");
  printf("\n1. Rock\n");
  printf("2. Paper\n");
  printf("3. Scissors\n");

  // Get user input
  printf("\nEnter your choice: ");
  scanf("%d", &userChoice);

  // Validate user input
  if (userChoice < 1 || userChoice > 3) {
    printf("\nInvalid choice. Please try again.\n");

    return 1;
  }

  // Generate computer choice
  computerChoice = rand() % 3 + 1;

  // Print user and computer choices
  printf("\nYou chose: %s\n", getChoice(userChoice));
  printf("Computer chose: %s\n", getChoice(computerChoice));

  return 0;
}
