#include "Person.h"

int main()
{
	CPerson* pBoss = new CBoss(NULL);
	CPerson* pManage = new CManager(pBoss);
	CHr* pHR = new CHr(pManage);

	CPerson* OA = pHR;
	OA->AskForSilk(1);
	OA->AskForSilk(4);
	OA->AskForSilk(10);

}