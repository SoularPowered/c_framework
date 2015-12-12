int main(int argc, char** argv)
{
	main_loop();
	exit_message();
	return 0;
}

void main_loop()
{
	int menu_choice = 0;

	do
	{
		menu_choice = prompt_user();

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
	} while (menu_choice != /* quit value */);
}





int prompt_user()
{
  int input = 0;
  do {
    print_menu();
    // std::cin >> input;
  } while(!in_range(input));

  return input;
}


bool Menu::in_range(int value) {
  if (value >= 1 && value <= this->items.size())
    return true;
  else
    return false;
}





void exit_message() const
{
	std::cout << "Exiting program.\n\n";
	std::cout << "Created by Shawn S. Hillyer\n";
	std::cout << "Shawn (dot) Hillyer (at) Gmail (dot) com\n";
	std::cout << "Date: 12/11/2015\n";
	std::cout << "Github.com/Soularpowered\n";
}
