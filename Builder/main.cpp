#include "AmericanShortHairCat.h"
#include "PussyCat.h"
#include "CatHouse.h"

int main()
{
	ICat* pAmericanShortHairCat = new AmericanShortHairCat;
	ICat* pPussyCat = new PussyCat;

	CatHouse house1(pAmericanShortHairCat);
	house1.TrainCat();
	CatHouse house2(pPussyCat);
	house2.TrainCat();
}