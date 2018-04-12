// Age Counter
// DATE 4/10/2018
//Name: Dalton Hook

	#include <iostream>
int main()
{
	int numChoice;

	

		std::cout << "Please enter your age" << std::endl;
		std::cin >> numChoice;
		if (numChoice <= 5)
		{
			std::cout << "Stop using your moms credit card to buy Fortnite Vbucks" << std::endl;
		}
		else if (numChoice >= 6 && numChoice < 12)
		{
			std::cout << "Stop playing minecraft, and watching YouTube all day." << std::endl;
		}
		else if (numChoice >= 13 && numChoice < 16)
		{
			std::cout << "Go take a shower or something jeez you kids are dirty!" << std::endl;
		}
		else if (numChoice >= 17 && numChoice < 25)
		{
			std::cout << " Aren't you supposed to be having a life go get a job or something" << std::endl;
		}
		else if (numChoice >= 26 && numChoice < 32)
		{
			std::cout << "Get gud scrub stop trying to act young again." << std::endl;
		}

		else if (numChoice >= 33 && numChoice < 45)
		{
			std::cout << "Jeez you're old, how can you read this?" << std::endl;
		}
		
		else if (numChoice >= 46 && numChoice < 52)
		{
			std::cout << "Someone should put you in a box, and float you down the river." << std::endl;
		}

	system("pause");
	return 0;
}