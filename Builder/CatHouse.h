#pragma once
#include "ICat.h"

class CatHouse
{
public:
	CatHouse(void);
	virtual ~CatHouse(void);

	CatHouse(ICat* pCat);
	void TrainCat();
private:
	ICat* m_pCat;
};

