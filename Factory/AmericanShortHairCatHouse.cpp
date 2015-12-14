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
	cout << "美短猫屋, 创建美短" <<endl;
	return new AmericanShortHairCat;
}
