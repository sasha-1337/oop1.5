#include "Pair.h"

void Pair::Init(int F, int S)
{
	SetFirst(F);
	SetSecond(S);
}

void Pair::Read(Pair &p1, Pair &p2)
{
	cout << " a = ? "; cin >> p1.first;
	cout << " b = ? "; cin >> p2.first;
	Init(p1.first, p2.first);

	cout << " c = ? "; cin >> p1.second;
	cout << " d = ? "; cin >> p2.second;
	Init(p1.second, p2.second);
}

void Pair::Display(Pair& p1, Pair& p2)
{
	cout << endl;
	cout << " a = " << p1.first << "  " << " b = " << p2.first << endl << endl;
	cout << " c = " << p1.second << "  " << " d = " << p2.second << endl << endl;

	cout << " (a,b) + (c,d) = (a + c , b + d) " << endl;

	cout << " (" << p1.first << "," << p2.first << ") + (" << p1.second << "," << p2.second << ") = ";
	cout << "(" << p1.first << " + " << p1.second << " , " << p2.first << " + " << p2.second << ")" << endl << endl;
	cout << "( " << ToString(Sum_1(p1.first, p1.second)) << " , " << ToString(Sum_2(p2)) << " )" << endl;
}

int Pair::Sum_1(int a, int b) { return a + b; }

int Pair::Sum_2(Pair& p2) { return p2.first + p2.second; }

string Pair::ToString(int value) const
{
	stringstream sstr;
	sstr << value;
	return sstr.str();
}