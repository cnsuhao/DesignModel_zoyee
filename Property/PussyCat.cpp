#include "PussyCat.h"

PussyCat::PussyCat(void)
{
	strcpy(szColor, "����");
	strcpy(szMoe, "����");
	cout << "��˹��ëɫ��" << szColor << endl;
	cout << "��˹�����ȼ�����" << szMoe << endl;
}

PussyCat::PussyCat( const PussyCat& cat )
{
	strcpy(szMoe, cat.szMoe);
	cout << "��¡��˹���ȼ�����"<< szMoe << endl;
	cout << "��¡��˹��ëɫ��"  << szColor <<  endl;
}


PussyCat::~PussyCat(void)
{
}

ICat* PussyCat::Clone()
{	
	return new PussyCat(*this);
}
