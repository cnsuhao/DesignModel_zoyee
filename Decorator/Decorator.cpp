#include "Decorator.h"

IDecorator::IDecorator( IFileSys* pSys ) : m_pSys(pSys)
{
	PF;
}

IDecorator::~IDecorator()
{
	delete m_pSys;
	PF;
}

ZipDecorator::ZipDecorator( IFileSys* pSys ) : IDecorator(pSys)
{
	PF;
}

ZipDecorator::~ZipDecorator()
{
	PF;
}

void ZipDecorator::Operation()
{
	m_pSys->Operation();
	DoZip();
}

void ZipDecorator::DoZip()
{
	PF;
}

VirDecorator::VirDecorator( IFileSys* pSys ) : IDecorator(pSys)
{
	PF;
}

VirDecorator::~VirDecorator()
{
	PF;
}

void VirDecorator::Operation()
{
	m_pSys->Operation();
	DoKillVir();
}

void VirDecorator::DoKillVir()
{
	PF;
}
