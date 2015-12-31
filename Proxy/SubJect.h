#ifndef __SUBJECT_H__
#define __SUBJECT_H__
#include "../z.h"
class ISubject
{
public:
	ISubject(){PF};
	virtual ~ISubject(){PF};
	virtual void Operation() = 0;
};
class RealSubject;
class CProxy : public ISubject
{
public:
	CProxy();
	~CProxy();
	void Operation();

private:
	RealSubject* m_pRealSubject;
};

class RealSubject : public ISubject
{
public:
	RealSubject(){PF;};
	~RealSubject(){PF;};
	void Operation();
};

#endif