// лаба 2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int A, B, C, AC, BC;
	cout << "A=";
	cin >> A;
	cout << "B=";
	cin >> B;
	cout << "C=";
	cin >> C;
	AC = abs(C - A);
	BC = abs(C - B);
	cout << "AC=" << AC << "\n";
	cout << "BC=" << BC << "\n";
	cout << "AC+BC=" << AC + BC << "\n";
}
