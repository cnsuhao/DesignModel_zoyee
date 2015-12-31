#ifndef __DECORATOR_H__
#define __DECORATOR_H__

#include "MyFile.h"

class IDecorator : public IFileSys
{
public:
	IDecorator(IFileSys* pSys);	
	virtual ~IDecorator();
	virtual void Operation(){};
protected:
	IFileSys* m_pSys;
};

class ZipDecorator : public IDecorator
{
public:
	ZipDecorator(IFileSys* pSys);
	~ZipDecorator();
	void Operation();
	void DoZip();
};

class VirDecorator : public IDecorator
{
public:
	VirDecorator(IFileSys* pSys);
	~VirDecorator();
	void Operation();
	void DoKillVir();
};

#endif