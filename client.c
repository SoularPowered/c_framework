#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "client.h"


/* Main */
int main(int argc, char** argv) {
	main_loop();
	exit_message();
	return 0;
}

/* Main logic loop */
void main_loop() {
	int input = 0, max_choice = 3;

	do {
		input = prompt_user(max_choice);

		switch (input) {
		case 1:
			// Call some function
			break;
		case 2:
			// Call some function
			break;
		case 3:
			// Call some function
			break;
		}
	} while (input != max_choice);
}

/* Print a menu */
void print_menu() {
	int option_num = 1;
	printf("[%d] An option here.\n", option_num);
	++option_num;
	printf("[%d] An option here.\n", option_num);
	++option_num;
	printf("[%d] Quit\n", option_num);
	// TODO: Read lines in from a file
}

/* Prompt user for input, valid its a number and within valid range */
int prompt_user(int max_choice) {
	char user_string[BUFSIZ];	// string to hold the input from user - BUFSIZ is macro that expans to the size of the buffer
	char *string_end;	// will point to end of string
	long int input; // user input converted to an int
	bool success = false; // set to true if the input included only valid character types

	/* Print menu /get input until the string intered is valid and in the range required */
  do {
    print_menu();

		// read string from stdin, store in user_string, and if no errors, try to evaluate. Otherwise do-while will repeat
		// Note: entering nothing should cass fgets to return null
		if (fgets(user_string, sizeof(user_string), stdin) != NULL) {
		    input = strtol(user_string, &string_end, 10); // interpret the string stored in user_string as a base-10 long int

				// If user didn't enter onnly a newline and the last character was a newline or null terminated, then read succesfully
		    if (user_string[0] != '\n' && (*string_end == '\n' || *string_end == '\0')) {
					success = true;
				}
		    else {
					printf ("Invalid number entered\n");
					success = false;
				}
		  }
  } while(!in_range(input, 1, max_choice) || !success);

  return input;
}

/* Checks if value is in range of min to max inclusive */
bool in_range(int value, int min, int max) {
  if (value >= min && value <= max) {
    return true;
	}
  else {
    return false;
	}
}

/* Print exit message */
void exit_message() {
	printf("Exiting program.\n\n");
	printf("Created by Shawn S. Hillyer\n");
	printf("Shawn (dot) Hillyer (at) Gmail (dot) com\n");
	printf("Date: 12/11/2015\n");
	printf("Github.com/Soularpowered\n");
}
