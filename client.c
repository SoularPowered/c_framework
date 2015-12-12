#include <stdbool.h>
#include <stdio.h>

void main_loop();
void print_menu();
int prompt_user(int num_choices);
bool in_range(int value, int min, int max);
void exit_message();


int main(int argc, char** argv) {
	main_loop();
	exit_message();
	return 0;
}

void main_loop() {
	int menu_choice = 0, num_choices = 3;

	do {
		menu_choice = prompt_user(num_choices);

		switch (menu_choice) {
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
	} while (menu_choice != 3);
}


void print_menu() {
	printf("Hi.\n");
}


int prompt_user(int num_choices) {
  int input = 0;
  do {
    print_menu();
    // get input
  } while(!in_range(input, 1, num_choices));

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
