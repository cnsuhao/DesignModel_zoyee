#include "AmericanShortHairCatHouse.h"
#include "AmericanShortHairCat.h"

AmericanShortHairCatHouse::AmericanShortHairCatHouse(void)
{
}


AmericanShortHairCatHouse::~AmericanShortHairCatHouse(void)
{
}

ICat* AmericanShortHairCatHouse::CreateCat()
{
	cout << "����è��, ��������" <<endl;
	return new AmericanShortHairCat;
}
