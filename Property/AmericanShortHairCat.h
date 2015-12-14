#pragma once
#include "icat.h"
class AmericanShortHairCat :
	public ICat
{
public:
	AmericanShortHairCat(void);
	AmericanShortHairCat(const AmericanShortHairCat& cat);
	virtual ~AmericanShortHairCat(void);
	ICat* Clone();
};

