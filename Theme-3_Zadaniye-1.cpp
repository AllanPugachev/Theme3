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
	float x = 10;
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
		x *= 1.1;
	cout << x << endl;
	_getch();
}