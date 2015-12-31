#include "CatGroup.h"


CatGroup::CatGroup(void)
{
}


CatGroup::~CatGroup(void)
{
}

void CatGroup::Add( CatGroup* pChild )
{
	m_group.push_back(pChild);
}

void CatGroup::remove( CatGroup* pChild )
{
	vector<CatGroup*>::iterator iter = m_group.begin();
	for (; iter != m_group.end(); iter++)
	{
		if (pChild == *iter)
		{
			m_group.erase(iter);
			break;
		}
	}
}

CatGroup* CatGroup::Get( int nIndex )
{
	if (nIndex < 0 || nIndex > m_group.size())
	{
		return NULL;
	}
	return m_group[nIndex];
}
