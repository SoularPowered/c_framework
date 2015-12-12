/*********************************************************************
** Program Filename: Client.cpp		[HEADER]
** Author:           Shawn Hillyer
** Date:             11/06/2015
** Description:      A Client class to handle user input and program
**                   output for a SearchSort object
** Input:            User input at terminal to select options
** Output:           Prints values to demonstrate searching/sorting
********************************************************************/
#include "Client.hpp"


/*********************************************************************
** Function:         Client()
** Description:      Instantiate the client and call main_loop()
** Parameters:       None
** Pre-Conditions:   None
** Post-Conditions:  main_loop() will be called and Client will exist
********************************************************************/
Client::Client()
{
	// Load menu file
	std::string main_menu_file = "main.menu";
	this->main_menu.load_menu_file(main_menu_file);

	// Start main loop
	main_loop();
}


/*********************************************************************
** Function:         main_loop()
** Description:      Prompts for and validates user choice for next action
** Parameters:       None
** Pre-Conditions:   Client must exist
** Post-Conditions:  Calls other methods as appropriate
********************************************************************/
void Client::main_loop()
{

	int menu_choice = 0;

	do
	{
		menu_choice = this->main_menu.prompt_user();
		std::cin.ignore(100, '\n');

		switch (menu_choice)
		{
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
	} while (menu_choice != this->main_menu.get_quit_value());
	exit();
}


/*********************************************************************
** Function:         exit()
** Description:      Executes any code prior to quitting the main loop
** Parameters:       none
** Pre-Conditions:   Client must exist
** Post-Conditions:  Client should stop executing code; drop into main()
********************************************************************/
void Client::exit() const
{
	std::cout << "Exiting program.\n\n";
	std::cout << "Created by Shawn S. Hillyer\n";
	std::cout << "Shawn (dot) Hillyer (at) Gmail (dot) com\n";
	std::cout << "Date: 10/08/2015\n";
	std::cout << "Github.com/Soularpowered\n";
}


/*********************************************************************
** Function:         main()
** Description:      Entry point for program
** Parameters:       Uses none
** Pre-Conditions:   None
** Post-Conditions:  Program runs
********************************************************************/
int main(int argc, char** argv)
{
	Client client;
	return 0;
}
