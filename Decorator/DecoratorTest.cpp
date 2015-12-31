#include "Dacorator.h"

int main()
{
	IFileSys* pMyFile = new CMyFile;

	IDecorator* pZipDecorator = new ZipDecorator(pMyFile);//为MyFile增加 ZipDecorator里的特殊方法
	IDecorator* pVirDecorator = new VirDecorator(pZipDecorator);//在已经增加Zip的MyFile中继续追加Vir的方法

	pVirDecorator->Operation();//此时pVirDecorator已经是 装饰了 两种特殊方法后的 pMyFile

	delete pVirDecorator;

}