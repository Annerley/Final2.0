#include <iostream>
#include <cstring>
#include <cstdlib>


struct Car
{
	bool Test;
	int Number;
	char Mark[20];
	float Benzin;
	bool IsZapaska;
	char Model[20];

};

#pragma pack(push,1)
struct AnotherCar
{
	bool Test;
	int Number;
	char Mark[20];
	float Benzin;
	bool IsZapaska;
	char Model[20];
};
#pragma pack(pop)

struct SortCar
{
	bool Test;
	bool IsZapaska;
	char Mark[20];
	char Model[20];
	int Number;
	float Benzin;
};
int main()
{
	Car First;
	AnotherCar Second;
	SortCar Third;
	int Summary = sizeof(First.IsZapaska) + sizeof(First.Mark) + sizeof(First.Model) + sizeof(First.Number) + sizeof(First.Benzin);
	std::cout << sizeof(First) << " " << sizeof(Second) << " " << sizeof(Third) << Summary << " " << '\n';
	std::cout << &First.Test << " " << &First.Number << " " << &First.Mark << " " << &First.Benzin << " " << &First.IsZapaska << " " << &First.Model << '\n';
	std::cout << &Second.Test << " " << &Second.Number << " " << &Second.Mark << " " << &Second.Benzin << " " << &Second.IsZapaska << " " << &Second.Model << '\n';
	std::cout << &Third.Test << " " << &Third.IsZapaska << " " << &Third.Mark << " " << &Third.Model << " " << &Third.Number << " " << &Third.Benzin;
}

