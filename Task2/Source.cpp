#include <iostream>

void main()
{
	//����� ������ ���� int, float, unsigned
    int nA;
	float fltB;
	unsigned short wC;

	//���������� ������, �� ������� � �.1 ������ ��������

    nA = -6306;
	fltB = 5.1e-1;
	wC = 126;

	//����� ������ ���� double, int, char.

	double dblD;
	int nE;
	char chF;

	//���������� ������ �� ��������� �������� ���������� ����

	dblD = nA;
	nE = fltB;
	chF = wC;

	//�� ��������� ������ ����������

	dblD = (double)nA;
	nE = (int)fltB;
	chF = (char)wC;

	//� ������� ������ ��������

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