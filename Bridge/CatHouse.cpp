#include "CatHouse.h"


CatHouse::CatHouse(void)
{
}

CatHouse::CatHouse( ICat* pCat ) : m_pCat( pCat )
{

}


CatHouse::~CatHouse(void)
{
}

void CatHouse::Show()
{
	m_pCat->Moe();
}
