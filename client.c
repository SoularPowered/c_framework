#include <stdbool.h>
#include <stdio.h>

/* Function declarations */
void main_loop();
void print_menu();
int prompt_user(int max_choice);
bool in_range(int value, int min, int max);
void exit_message();

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
	printf("Hi.\n");
	// TODO: Read lines in from a file
}

/* Prompt user for input, valid its a number and within valid range */
int prompt_user(int max_choice) {
	char buf[BUFSIZ];
	char *p;
	long int input;
	bool success;

  do {
    print_menu();
		if (fgets(buf, sizeof(buf), stdin) != NULL) {
		    input = strtol(buf, &p, 10);

		    if (buf[0] != '\n' && (*p == '\n' || *p == '\0')) {
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

/* Checks if a value is in range of min to max */
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
