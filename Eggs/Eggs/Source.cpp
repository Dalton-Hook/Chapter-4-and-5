// Eggs, Create a program that asks the user how many eggs they would like.
// Created by Dalton Hook, Date 4/10/2018

#include <iostream>

int main()
{
	int userEggs;
	int dozen, remainderEggs;
	double dozenTotal, remainderTotal;
	std::cout << "How many eggs would you like?" << std::endl;
	std::cin >> userEggs;

	dozen = userEggs / 12;
	remainderEggs = userEggs % 12; 

	dozenTotal = 2.00 * dozen;
	remainderTotal = 0.25 * remainderEggs;
	std::cout << "You have " << userEggs<< " your total is " << remainderTotal + dozenTotal << std::endl;
	std::cout << "You get " << dozen << "dozen and " << remainderEggs << " eggs left" <<std::endl;





		system("pause");
	return 0;
}