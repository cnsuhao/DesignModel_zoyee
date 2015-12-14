#include "ICatHouse.h"
#include "ICat.h"
#include "AmericanShortHairCatHouse.h"
#include "PussyCatHouse.h"

int main()
{
	ICatHouse* pAmericanShortHairHouse = new AmericanShortHairCatHouse;
	ICat* pAmericanShortHairCat = pAmericanShortHairHouse->CreateCat();
	pAmericanShortHairCat->Moe();

	ICatHouse* pPussyCatHouse = new PussyCatHouse;
	ICat* pPussyCat = pPussyCatHouse->CreateCat();
	pPussyCat->Moe();

}