#include "SubJect.h"


CProxy::CProxy() : m_pRealSubject(nullptr)
{
	PF;
}

CProxy::~CProxy()
{
	PF;
	if (m_pRealSubject)
	{
		delete m_pRealSubject;
	}
}

void CProxy::Operation()
{
	PF
	if ( ! m_pRealSubject)//先占位, 等要使用时再new, 
	{
		m_pRealSubject = new RealSubject;
	}
	m_pRealSubject->Operation();
}

void RealSubject::Operation()
{
	PF;
}
