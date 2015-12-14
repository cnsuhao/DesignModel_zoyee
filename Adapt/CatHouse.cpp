#include "CatHouse.h"


CatHouse::CatHouse(void) : m_pCat(new Cat)
{
}


CatHouse::~CatHouse(void)
{
}

void CatHouse::Show()
{
	m_pCat->Moe();
}

CatHouseEx::CatHouseEx( AmericanShortHairCat* pCat ) : m_pAmericanShortHairCat(pCat)
{

}

CatHouseEx::CatHouseEx() : CatHouse(), m_pAmericanShortHairCat(NULL)
{

}

void CatHouseEx::Show()
{
	if (m_pAmericanShortHairCat == NULL)
	{
		CatHouse::Show();
	}
	else
		m_pAmericanShortHairCat->SpecielMoe();
}
