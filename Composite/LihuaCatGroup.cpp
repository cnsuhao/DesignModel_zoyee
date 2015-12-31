#include "LihuaCatGroup.h"


LihuaCatGroup::LihuaCatGroup(void)
{
}


LihuaCatGroup::~LihuaCatGroup(void)
{
}

void LihuaCatGroup::Add( CatGroup* pChild )
{
	m_group.push_back(pChild);
}

void LihuaCatGroup::remove( CatGroup* pChild )
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

CatGroup* LihuaCatGroup::Get( int nIndex )
{
	if (nIndex < 0 || nIndex > m_group.size())
	{
		return NULL;
	}
	return m_group[nIndex];
}
