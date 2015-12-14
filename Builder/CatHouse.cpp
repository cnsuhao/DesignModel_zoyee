#include "CatHouse.h"


CatHouse::CatHouse(void)
{
}

CatHouse::CatHouse( ICat* pCat )
{
	m_pCat = pCat;
}


CatHouse::~CatHouse(void)
{
}

void CatHouse::TrainCat()
{
	cout << "¿ªÊ¼ÑµÁ·\n";
	m_pCat->LearnCatchMice();
	m_pCat->LearnMoe();
}
