//Dice Game
//Author: Dalton Hook
//Date: 4/16/2018

#include <iostream>
#include <string>
int main()
{
	std::string userChoice;
		double die1 = 1 + 6;
		double die2 = 1 + 6;
		double totalDieRole;
	do{
		std::cout << " Do you want to roll some dice, and totally 100% not gamble using this code? ;) :)" << std::endl;
		std::cin >> userChoice;

		if (userChoice == "yes" || userChoice == "Yes")
		{
			std::cout << "the number of your first die is " << die1 << std::endl;
			std::cout << "the number for your second die is " << die2 << std::endl;

			totalDieRole = die1 + die2;

			std::cout << "Your total dice number is " << totalDieRole << std::endl;

		}

		else if (userChoice == "no" || userChoice == "No")
		{
			std::cout << "be gone thot" << std::endl;
		}
	} while (userChoice != "yes");

	system("pause");
	return 0;

}