// Lab_02.cpp
// <���������� ³����� ����������� >
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 9

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double x, y;
	//double z1;
	double z2; // ������� ��������

	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	
	// z1 = (pow(cos(x), 2) - 2 * (cos(x) * cos(y)) + (pow(cos(y), 2) - (pow(sin(x), 2) - 2 * (sin(x) * sin(y)) + (pow(sin(y), 2)))));
	z2 = (-4.0) * pow(sin((x - y) / 2.0), 2) * cos(x + y);
	cout << endl;
	// cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
