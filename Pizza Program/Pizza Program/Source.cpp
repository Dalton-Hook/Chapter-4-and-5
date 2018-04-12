//Pizza Program
//Author: Dalton Hook
//Date: 4/12/2018

#include <iostream>
#include <string>

int main()
{
	double total;
	int userchoice;//Choice of pizza
	double pizzaSmall = 7.99, pizzaMeduim = 8.99, pizzaLarge = 10.99;//Prices
	int pizzaSize; //The size of the pizza
	//std::string pizzaString = NULL;

	std::cout << " Welcome to Luigi's Pizza Joint!" << std::endl;
	
	std::cout << "What size of pizza do you want?" << std::endl;
	std::cin >> pizzaSize;

	
	if (pizzaSize == 1)
	{
		std::cout << "you chose a pizza price is" << pizzaSmall << "what toppings?" << std::endl;
		if (userchoice == 1)
		{
			//peperoni
		}
		else if (userchoice == 2)
		{
			// Bacon
		}
		else if (userchoice == 3)
		{
			//cheese
		}
		
	}

	std::cout << "your total is" << total;

	system("pause");
	return 0;
}