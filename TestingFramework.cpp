#include <iostream>
#include <string>
#include <ctime>


/* Function Prototypes */
void displayMenu();
bool inRange(const int value, const int min, const int max);
void autoTest(int var1, int var2);
void manualTest();

int main()
{
	srand(time(0));			// rand() is often used. Comment out if not.

	std::cout << "Welcome to Test Client .\n";

	/* Print menu and process choice until user quits */
	int menuChoice = 0;
	while (menuChoice != 3)
	{
		/* Validate input */
		do
		{
			displayMenu();
			std::cin >> menuChoice;
		} while (!inRange(menuChoice, 1, 3));

		switch (menuChoice)
		{
		case 1:
			autoTest(input1, input2);
			break;
		case 2:
			manualTest();
			break;
		case 3:
			std::cout << "Exiting program.\n\n";
			break;
		default:
			/* Should never execute */
			exit(EXIT_FAILURE);
			break;
		}
	}
	return 0;
}


/* Function: displayMenu()
 * Description: Visual output of menu options.
 * Accepts no parameters, no return value
 */
void displayMenu()
{
	std::cout << "\nWhat would you like to do?\n";
	std::cout << "1: Run an automated test\n";
	std::cout << "2: Run a manual test\n";
	std::cout << "3: Quit\n";
	std::cout << ">> ";
}


/* Function: inRange()
 * Description: Validates value is in range of [min, max] (inclusive)
 * Arguments: int min for the lowest acceptable value, int max for the highest acceptable value
 * Returns: true of value is in range, false otherwise
 */
bool inRange(const int value, const int min, const int max)
{
	if (value >= min && value <= max)
		return true;
	else
		return false;
}


/* Function: autoTest()
 * Description: Conducts automatic test
 */
void autoTest(int var1, int var2)
{
	/* Initialize test objects and variables */

	/* Run simulation */

	/* Calculations */

	/* Print results */

	/* Free the memory */

}


/* Function: manualTest()
 * Description: Get user input before conducting automatic test
 * Accepts no parameters, no return value
 */
void manualTest()
{
	int var1 = 0,
		var2 = 0;

	/* Prompt for and validate user input, then call the test */
	do
	{
		std::cout << ".\n>>";
		std::cin >> var1;
	} while (!inRange(var1, 1, INT_MAX));

	do
	{
		std::cout << ".\n>>";
		std::cin >> var2;
	} while (!inRange(var2, 1, INT_MAX));

	std::cout << "Press any key to begin.\n>>";

	autoTest(var2, var1);
}
