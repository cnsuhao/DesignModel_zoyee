#pragma once
#include "icat.h"
class AmericanShortHairCat :
	public ICat
{
public:
	AmericanShortHairCat(void);
	virtual ~AmericanShortHairCat(void);
	virtual void LearnMoe();
	virtual void LearnCatchMice();
};

