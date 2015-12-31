#include "LihuaCatGroup.h"

int main()
{
	CatGroup* pCatA = new LihuaCatGroup;
	CatGroup* pCatB = new LihuaCatGroup;
	CatGroup* pCatBoss = new LihuaCatGroup;
	pCatBoss->Add(pCatBoss);
	pCatBoss->Add(pCatA);
	pCatA->Add(pCatB);

	CatGroup* pCatBossA = new LihuaCatGroup;
	pCatBossA->Add(pCatBossA);
	pCatBossA->Add(pCatBoss);
}