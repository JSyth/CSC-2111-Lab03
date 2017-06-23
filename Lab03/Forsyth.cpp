// Assignment: Lab 03
// Author: Joshua Forsyth

#include <iostream>

// Specify the max size for our array
const int MAX_SIZE = 256;

void main()
{
	// Declare the array
	int a[MAX_SIZE];

	// Other declarations
	int numElements, lookingFor;
	
	// Get the number of elements in the series
	std::cout << "How many elements are in the series? : ";
	std::cin >> numElements;

	// For every element in the series, prompt the user to give a value
	for (int i = 0; i < numElements; i++)
	{
		std::cout << "Enter the " << i << "th element: ";
		std::cin >> a[i];
	}

	// Get what the user wants to search for
	std::cout << "Which value are you looking for? : ";
	std::cin >> lookingFor;

	// Declare a flag that is set if we find the value
	bool found = false;
	for (int i = 0; i < numElements; i++)
	{
		if (lookingFor == a[i])
		{
			// Print a message to the console with the position of the value
			std::cout << "The first " << lookingFor << " is in position " << i << std::endl;
			found = true;
			break;
		}
	}

	// If we didn't find the value, let the user know.
	if (!found)
	{
		std::cout << "The series does not contain " << lookingFor << std::endl;
	}


	// Keep the console from exiting.
	system("pause");
	
}