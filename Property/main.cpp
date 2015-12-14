#include "ICat.h"
#include "PussyCat.h"
#include "AmericanShortHairCat.h"

int main()
{
	ICat* pCat = new AmericanShortHairCat;
	ICat* pCat2 = pCat->Clone();

	ICat* pCat3 = new PussyCat;
	ICat* pCat4 = pCat3->Clone();
}