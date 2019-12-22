#include <iostream>

int Global;
int main()
{
	int Automatic;
	int* Dynamic = new int;
	std::cout << &Automatic << '\n'
		<< Dynamic << '\n' << &Global;
	return 0;
}
