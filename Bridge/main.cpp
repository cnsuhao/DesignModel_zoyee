#include "ICat.h"
#include "CatHouse.h"

int main()
{
	ICat* pAmericanShortHair = new AmericanShortHairCat;
	CatHouse house1(pAmericanShortHair);
	house1.Show();

	ICat* pPussy = new PussyCat;
	CatHouse house2(pPussy);
	house2.Show();
}