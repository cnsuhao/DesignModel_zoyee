#ifndef __ABSTRACT_CLASS_H__
#define __ABSTRACT_CLASS_H__
#include "../z.h"

class AbstractClass
{
public:
	AbstractClass(void){PF};
	virtual ~AbstractClass(void){PF};

	void Operation();//对外的接口在这里, 分别会在里面call两个 operation, 两个operation的实现由派生类来做

protected:
	virtual void Opreation1() = 0;
	virtual void Opreation2() = 0;
};

class ConcreateClass : public AbstractClass
{
public:
	ConcreateClass(){PF};
	~ConcreateClass(){PF};
protected:
	virtual void Opreation1();
	virtual void Opreation2();
};

#endif