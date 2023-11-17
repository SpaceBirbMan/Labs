#include <iostream>
#include "Gauss.h"
#include "Run-through.h"
#include "LU.h"
#include "Quads.h"
#include "SInert.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "������ �������:" << endl;
	cout << "1 - ����� � ������-�����" << endl;
	cout << "2 - ��������" << endl;
	cout << "3 - LU" << endl;
	cout << "4 - ���������� �����" << endl;
	cout << "5 - ����� �������" << endl;

	

	unsigned int ch_calc, ch_inv;

	cin >> ch_calc;
	cout << "1 - ����������� �������� ������� (����� ������� �������� ��� 5), 0 - ������� ������" << endl;
	cin >> ch_inv;
	switch (ch_calc)
	{
	case 1: {Gauss(ch_inv); break; }
	case 2: {RT(ch_inv); break; }
	case 3: {LU(ch_inv); break; }
	case 4: {Quads(ch_inv); break; }
	case 5: {SIter(ch_inv); break; }
	}
		
	
}