#include <stdbool.h>
#include <stdio.h>

void main_loop();
void print_menu();
int prompt_user(int max_choice);
bool in_range(int value, int min, int max);
void exit_message();


int main(int argc, char** argv) {
	main_loop();
	exit_message();
	return 0;
}

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


void print_menu() {
	printf("Hi.\n");
}


int prompt_user(int max_choice) {

	char buf[BUFSIZ];
	char *p;
	long int input;
	bool success;

  do {
    print_menu();
		if (fgets(buf, sizeof(buf), stdin) != NULL)
		  {
		    input = strtol(buf, &p, 10);

		    if (buf[0] != '\n' && (*p == '\n' || *p == '\0')) {
					success = true;
				}
		    else {
					printf ("Invalid number entered\n");
					success = false;
				}
		  }
		// input -= '0';		// offset to "convert" to correct ascii value
  } while(!in_range(input, 1, max_choice) || !success);

  return input;
}


bool in_range(int value, int min, int max) {
  if (value >= min && value <= max)
    return true;
  else
    return false;
}


void exit_message() {
	printf("Exiting program.\n\n");
	printf("Created by Shawn S. Hillyer\n");
	printf("Shawn (dot) Hillyer (at) Gmail (dot) com\n");
	printf("Date: 12/11/2015\n");
	printf("Github.com/Soularpowered\n");
}
