#pragma once
#include "CatList.h"

class ICat;

class CSimpleCatHouse
{
public:
	CSimpleCatHouse(void);
	virtual ~CSimpleCatHouse(void);

	ICat* CreateCat(int nType);
};

