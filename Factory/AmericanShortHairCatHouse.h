#pragma once
#include "icathouse.h"
class AmericanShortHairCatHouse :
	public ICatHouse
{
public:
	AmericanShortHairCatHouse(void);
	virtual ~AmericanShortHairCatHouse(void);
	ICat* CreateCat();
};

