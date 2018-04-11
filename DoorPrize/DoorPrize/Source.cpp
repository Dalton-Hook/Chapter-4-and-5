//Door Prize
//Made by Dalton Hook [Date 4/10/2018]

#include <iostream>
int main()
{
	int doorChoice;
	std::cout << "please pick a door 1,2, or 3" << std::endl;
	std::cin >> doorChoice;

	if (doorChoice == 1)
	{
		std::cout << "the prize behind door one is nothing" << std::endl;

	}

	if (doorChoice == 2)
	{

		std::cout << "The prize behind door" << doorChoice << "is a cool care" << std::endl;

	}

	if (doorChoice == 3)
	{
		std::cout << "the prize behind" << doorChoice << "is a cool new car!!!!" << std::endl;

	}


	else
	{
		std::cout << "Why did you type" << doorChoice << ", It's 1,2, or 3 try again" << std::endl;

	}

	
	system("pause");
	return 0;

}