#include <iostream>
#include <string_view>

int getUserInput()
{
	std::cout << "Enter an integer: ";
	int inputVal{};
	std::cin >> inputVal;
	return inputVal;
}

void printAddition(int firstVal, int secondVal)
{
	std::cout << firstVal << " + " << secondVal << " = " << (firstVal + secondVal) << '\n';
}

void printDifference(int firstVal, int secondVal)
{
	std::cout << firstVal << " - " << secondVal << " = " << (firstVal - secondVal) << '\n';
}

int chpt1Q3_Quiz()
{
	int firstVal{ getUserInput() };
	int secondVal{ getUserInput() };
	printAddition(firstVal, secondVal);
	printDifference(firstVal, secondVal);
	return 0;
}

