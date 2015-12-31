#include "Dacorator.h"

int main()
{
	IFileSys* pMyFile = new CMyFile;

	IDecorator* pZipDecorator = new ZipDecorator(pMyFile);//ΪMyFile���� ZipDecorator������ⷽ��
	IDecorator* pVirDecorator = new VirDecorator(pZipDecorator);//���Ѿ�����Zip��MyFile�м���׷��Vir�ķ���

	pVirDecorator->Operation();//��ʱpVirDecorator�Ѿ��� װ���� �������ⷽ����� pMyFile

	delete pVirDecorator;

}