#include "SimpleCatHouse.h"

int main()
{
	CSimpleCatHouse house;
	ICat* pASHCat = house.CreateCat(_AmericanShortHair_Cat);
	ICat* pPussyCat = house.CreateCat(_Pussy_Cat);

	pASHCat->Moe();
	pPussyCat->Moe();

	delete pASHCat;
	delete pPussyCat;
}