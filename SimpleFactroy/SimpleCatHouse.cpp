#include "SimpleCatHouse.h"



CSimpleCatHouse::CSimpleCatHouse(void)
{
}


CSimpleCatHouse::~CSimpleCatHouse(void)
{
}

ICat* CSimpleCatHouse::CreateCat( int nType )
{
	ICat* pCat = nullptr;
	switch(nType)
	{
	case _AmericanShortHair_Cat:
		pCat = new AmericanShortHairCat;
		break;
	case _Pussy_Cat:
		pCat = new PussyCat;
		break;
	default:
		break;
	}
	return pCat;
}
