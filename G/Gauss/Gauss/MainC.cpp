#include <iostream>
#include "Gauss.h"
#include "Run-through.h"
#include "LU.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	cout << "������ �������:" << endl;
	cout << "1 - ����� � ������-�����" << endl;
	cout << "2 - ��������" << endl;
	cout << "3 - LU" << endl;
	cout << "4 - ���������� �����" << endl;
	cout << "5 - ����� ������� ��������" << endl;

	cout << "������������ �������� ������� [WIP]" << endl;

	unsigned int a;

	cin >> a;
	switch (a)
	{
		case 1: {Gauss(); break; }
		case 2: {RT(); break; }
		case 3: {LU(); break; }
	}
		
	
}