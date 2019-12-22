#include <iostream>


int main()
{
	int Static[10];
	int* Dynamic = new int[10];

	int StaticMatrix[3][3];
	int** DynamicMatrix = new int* [3];
	for (size_t i = 0; i < 3; i++)
	{
		DynamicMatrix[i] = new int[3];
	}

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			std::cout << &StaticMatrix[i][j] << "   ";
			std::cout << &DynamicMatrix[i][j] << '\n';
		}
	}
	std::cout << std::endl << std::endl << std::endl;
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << &Static[i] << "   ";
		std::cout << &Dynamic[i] << '\n';
	}
	return 0;
}

