#pragma once
#include "cat.h"
#include "AmericanShortHairCat.h"

class CatHouse
{
public:
	CatHouse(void);
	~CatHouse(void);

	virtual void Show();
private:
	Cat* m_pCat;
};

class CatHouseEx : public CatHouse, private AmericanShortHairCat
{
public:
	CatHouseEx();
	CatHouseEx(AmericanShortHairCat* pCat);
	void Show();
private:
	AmericanShortHairCat* m_pAmericanShortHairCat;
};