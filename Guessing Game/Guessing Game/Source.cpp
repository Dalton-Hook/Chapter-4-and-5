


#include <iostream>
#include <random>
#include <time.h>
int main()
{
	int numChoice;
	int secret;
	srand(time(NULL));
	/*Generates secret number between 1 and 10:*/
	secret = rand() % 100 + 1;

	do{

		std::cout << "Please pick a number between 1 and 10" << std::endl;
		std::cin >> numChoice;

		if (numChoice == secret)
		{
			std::cout << "Congradulations you geussed" << secret << "the correct number" << std::endl;
		}

		else
		{
			std::cout << "You did not choose correctly it was" << secret << "." << std::endl;
		}
	} while (numChoice != secret);

	system("pause");
	return 0;

}