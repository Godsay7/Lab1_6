#include <iostream>

void main()
{
	//Опису змінних типів int, float, unsigned
    int nA;
	float fltB;
	unsigned short wC;

	//Ініціювання змінних, що описанні в п.1 даного завдання

    nA = -6306;
	fltB = 5.1e-1;
	wC = 126;

	//Опису змінних типів double, int, char.

	double dblD;
	int nE;
	char chF;

	//Ініціювання змінних за допомогою неявного приведення типів

	dblD = nA;
	nE = fltB;
	chF = wC;

	//за допомогою явного приведення

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	//з обходом суворої типізації

	double* pdblD;
	void* pV;
	pV = &nA;
	pdblD = (double*)pV;
	dblD = *pdblD;

	int* pnE;
	pV = &fltB;
	pnE = (int*)pV;
	nE = *pnE;

	char* pchF;
	pV = &wC;
	pchF = (char*)pV;
	chF = *pchF;
}