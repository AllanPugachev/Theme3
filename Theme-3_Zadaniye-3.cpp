#include <iostream>
#include <conio.h>
#include <clocale>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int i=0, eps;
	float x, s=0;
	cout << "Vvedite x: "; cin >> x; 
	cout << "Vvedeite eps: "; cin >> eps;
	while (i<=eps)
	{
		s += (1 / ((2 * i + 1) * pow(x, 2 * i + 1)));
		++i;
	}
	s *= 2;
	cout << "Summa ravna " << s << endl;
	_getch();
}