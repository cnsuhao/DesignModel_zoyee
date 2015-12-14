
#include "ICatHouse.h"

int main()
{
	ICatHouse* pNativeHouse = new NativeCatHouse;
	ICat* pCat1 = pNativeHouse->CreateCatA();
	pCat1->Moe();
	ICat* pCat2 = pNativeHouse->CreateCatB();
	pCat2->Moe();

	ICatHouse* pForeignHouse = new ForeginCatHouse;
	ICat* pCat3 = pForeignHouse->CreateCatA();
	pCat3->Moe();
	ICat* pCat4 = pForeignHouse->CreateCatB();
	pCat4->Moe();
}