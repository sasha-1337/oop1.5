#include "Long.h"
#include "Pair.h"

void Long::Init(Pair pair) { SetPair(pair); }

void Long::Display(Pair& p1, Pair& p2)
{
	pair.Display(p1,p2);

	cout << " (" << p1.GetFirst() << "," << p2.GetFirst() << ") - (" << p1.GetSecond() << "," << p2.GetSecond() << ") = ";
	cout << "(" << p1.GetFirst() << " - " << p1.GetSecond() << " , " << p2.GetFirst() << " - " << p2.GetSecond() << ")" << endl << endl;
	cout << "( " << Diff_1(p1) << " , " << Diff_2(p2) << " )" << endl;

	cout << " (" << p1.GetFirst() << "," << p2.GetFirst() << ") * (" << p1.GetSecond() << "," << p2.GetSecond() << ") = ";
	cout << "(" << p1.GetFirst() << " * " << p1.GetSecond() << " , " << p2.GetFirst() << " * " << p2.GetSecond() << ")" << endl << endl;
	cout << "( " << pair.ToString(Multiply_1(p1)) << " , " << pair.ToString(Multiply_2(p2)) << " )" << endl;
}

void Long::Read(Pair& p1, Pair& p2)
{
	Pair z;
	z.Read(p1, p2);
	Init(z);
}

int Long::Diff_1(Pair &p1) { return p1.GetFirst() - p1.GetSecond(); }

int Long::Diff_2(Pair& p2) { return p2.GetFirst() - p2.GetSecond(); }

int Long::Multiply_1(Pair& p1) { return p1.GetFirst() * p1.GetSecond(); }

int Long::Multiply_2(Pair& p2) { return p2.GetFirst() * p2.GetSecond(); }