#ifndef __PERSON_H__
#define __PERSON_H__
#include "../z.h"

class CPerson
{
public:
	CPerson(CPerson* pPerson);
	virtual ~CPerson(void){};

	virtual void AskForSilk(int nDays) = 0;
protected:
	CPerson* m_pHighLevelPerson;
};

class CHr : public CPerson
{
public:
	CHr(CPerson* pPerson);
	~CHr(){};
	void AskForSilk(int nDays);
};

class CManager : public CPerson
{
public:
	CManager(CPerson* pPerson);
	~CManager(){};
	void AskForSilk(int nDays);
};

class CBoss : public CPerson
{
public:
	CBoss(CPerson* pPerson);
	~CBoss(){};
	void AskForSilk(int nDays);
};



#endif