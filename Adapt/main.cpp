#include "Cat.h"
#include "CatHouse.h"

int main()
{
	CatHouseEx* house = new CatHouseEx;
	house->Show();

	CatHouseEx* houseEx = new CatHouseEx(new AmericanShortHairCat);
	houseEx->Show();
}