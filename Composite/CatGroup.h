#pragma once

#include <vector>
#include <iostream>
using namespace std;

class CatGroup
{
public:
	CatGroup(void);
	virtual ~CatGroup(void);

	virtual void Add(CatGroup* pChild) = 0;
	virtual void remove(CatGroup* pChild) = 0;
	virtual CatGroup* Get(int nIndex) = 0;
protected:
	vector<CatGroup*> m_group;	
};

