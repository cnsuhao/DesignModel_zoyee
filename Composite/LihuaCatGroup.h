#pragma once
#include "catgroup.h"
class LihuaCatGroup :
	public CatGroup
{
public:
	LihuaCatGroup(void);
	virtual ~LihuaCatGroup(void);

	virtual void Add(CatGroup* pChild);
	virtual void remove(CatGroup* pChild);
	virtual CatGroup* Get(int nIndex);
};

