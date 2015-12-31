#include "Person.h"



CPerson::CPerson( CPerson* pPerson ) : m_pHighLevelPerson(pPerson)
{

}

CHr::CHr( CPerson* pPerson ) : CPerson(pPerson)
{

}

void CHr::AskForSilk(int nDays)
{
	if (nDays > 3)
	{
		printf("[%d]Days HR-notPass, call manager\n", nDays);
		m_pHighLevelPerson->AskForSilk(nDays);
	}
	else
	{
		printf("[%d]Days HR-Pass\n", nDays);
	}
}

CManager::CManager( CPerson* pPerson ) : CPerson(pPerson)
{

}

void CManager::AskForSilk( int nDays )
{
	if (nDays > 5)
	{
		printf("[%d]Days Manager-notPass, call Boss\n", nDays);
		m_pHighLevelPerson->AskForSilk(nDays);
	}
	else
	{
		printf("[%d]Days Manager-Pass", nDays);
	}
}

CBoss::CBoss( CPerson* pPerson ) : CPerson(pPerson)
{

}

void CBoss::AskForSilk( int nDays )
{
	printf("[%d]Days Pass-Boss\n", nDays);
}
