//Author: Dalton Hook
//Triangles 
//Date: 4/13/2018

#include <iostream>
#include <math.h>
#include <string>
int main()
{
	//Desgning right triangle pathagorean theorem
	//we need two user inputs and user needs to put which side they want to solve
	double sideA, sideB, sideC;
	double param1, param2;
	std::string userInputSide, userInputetriangle;
	std::cout << "Which triangle would you like to solve for? Isosoles or equalateral" << std::endl;
	std::cin >> userInputetriangle;
	std::cout << "what side of the right triangle are you solving for? A, B, or C>>> " << std::endl;
	std::cin >> userInputSide;
	if (userInputetriangle == "Equalateral")
	{

	 if (userInputSide == "C")
	{
		std::cout << "you chose " << userInputSide << ", what is Side A? >>" << std::endl;
		std::cin >> sideA;
		std::cout << "what is the distance for side B?" << std::endl;
		std::cin >> sideB;
		sideC = sqrt((sideA * 2) + (sideB * 2));
		std::cout << "the distance for side c is " << sideC << std::endl;
	}

	else if (userInputSide == "A")
	{
		std::cout << "you chose " << userInputSide << ", What side is B >>" << std::endl;
		std::cin >> sideB;
		std::cout << "What distance is C" << std::endl;
		std::cin >> sideC;
		sideA = sqrt((sideB * 2) - (sideC * 2));
		std::cout << "The distance for side a is " << sideA << std::endl;
	}

	else if (userInputSide == "B")
	{
		std::cout << "you chose " << userInputSide << ", What side is A >>" << std::endl;
		std::cin >> sideA;
		std::cout << "What distance is C" << std::endl;
		std::cin >> sideC;
		sideB = sqrt((sideA * 2) - (sideC * 2));
		std::cout << "The distance for side a is " << sideB << std::endl;
	}
	}

	if (userInputetriangle == "Isosoles")
		std::cin >> userInputetriangle;
	if (userInputSide == "C")
	{
		std::cout << "you chose " << userInputSide << ", what is Side A? >>" << std::endl;
		std::cin >> sideA;
		std::cout << "what is the distance for side B?" << std::endl;
		std::cin >> sideB;
		sideC = sqrt((sideA * 2) + (sideB * 2));
		std::cout << "the distance for side c is " << sideC << std::endl;
	}
	else if (userInputSide == "A")
	{
		std::cout << "you chose " << userInputSide << ", What side is B >>" << std::endl;
		std::cin >> sideB;
		std::cout << "What distance is C" << std::endl;
		std::cin >> sideC;
		sideA = sqrt((sideB * 2) - (sideC * 2));
		std::cout << "The distance for side a is " << sideA << std::endl;
	}
	else if (userInputSide == "B")
	{
		std::cout << "you chose " << userInputSide << ", What side is A >>" << std::endl;
		std::cin >> sideA;
		std::cout << "What distance is C" << std::endl;
		std::cin >> sideC;
		sideB = sqrt((sideA * 2) - (sideC * 2));
		std::cout << "The distance for side a is " << sideB << std::endl;
	}
	system("pause");
	return 0;
}