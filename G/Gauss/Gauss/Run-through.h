#include <iostream>
#include "C:\Users\kiril\OneDrive\������� ����\����������\matrix.h"
#define RANDOM

using namespace std;


void RT()
{
	int n = 0;
	cin >> n;
	matrix Rt(n, n);
	matrix R(n, n + 1);
#ifdef RANDOM
	//���������� �������
	{ 
		
		Rt.randomize_advanced(1, 10);
		R.randomize_advanced(1, 10);

		Rt.diag_antizero(0, 0);
		Rt.diag_antizero(1, 0);
		//Rt.diag_antizero(0, 1);

		R = Rt;
		m << R;
		cout << endl;

		for (int i = 2; i < n; i++)
			Rt.diag_replace(i, 0);
		for (int i = 2; i < n; i++)
			Rt.diag_replace(0, i);

		R = Rt;
		m << R;
		cout << endl;

	}
#else
		/*5 8 0 0 0 4
		3 3 3 0 0 5
		0 7 1 2 0 2
		0 0 1 3 1 7
		0 0 0 4 5 2*/
#endif

	//����������
	{
		matrix X(n);
		matrix Q(n-1);
		matrix P(n);

		//������ ���
		{
			P(0) = R(0, n) / R(0, 0);
			Q(0) = R(0, 1) / R(0, 0);
			matrix f(n);
			matrix l(n);
			matrix c(n);
			matrix r(n);

			//������� ��������� �������������
			for (int i = 0; i < n; i++) {
				f(i) = R(i,n);
			}
			//������������ ��������
			for (int i = 0; i < n; i++) {
				c(i) = R(i,i);
			}
			//���������������� ��������
			/*l(0) = 0.0;*/
			for (int i = 1; i < n; i++) {
				l(i) = R(i,i-1);
			}
			//����������������� ��������
			/*r(n - 1) = 0.0;*/
			for (int i = 0; i < n - 1; i++) {
				r(i) = R(i,i+1);
			}

			//cout << R(0, 1) << endl;
			//cout << R(1, 0) << endl;
			/*for (int i = 1; i < n; i++)
			{
				P(i) = (R(i, n) - (R(i, i - 1) * P(i - 1)) / (R(i, i) - R(i, i - 1) * Q(i - 1)));
				if (i < (n - 1)) { Q(i) = R(i, i + 1) / (R(i, i) - (R(i, i - 1) * Q(i - 1))); }
			}*/
			for (int i = 1; i < n; i++) {
				P(i) = ((f(i) - (l(i) * P(i - 1))) / (c(i) - (l(i) * Q(i - 1))));
				if (i < (n - 1)) Q(i) = (r(i) / (c(i) - (l(i) * Q(i - 1))));
			}
			//P(n-1) = (R(n-1, n) - R(n-1, n - 1) * P(n - 1)) / (R(n-1, n-1) - R(n-1, n - 1) * Q(n - 1));
		}
		//�������� ���
		{
			
			X(n - 1) = P(n - 1);

			for (int i = n - 2; i >= 0; i--)//���������
				X(i) = P(i) - (Q(i) * X(i + 1));
				
		}
		cout << endl;
		m << X;
		
	}
}