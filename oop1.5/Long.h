#pragma once
#include "Pair.h"

class Long
{
private:
	Pair pair;
public:
	Pair GetPair() { return pair; }
	void SetPair(Pair pair) { this->pair = pair; }

	void Read(Pair& p1, Pair& p2);
	void Display(Pair& p1, Pair& p2);
	void Init(Pair pair);

	int Diff_1(Pair& p1);
	int Diff_2(Pair& p2);

	int Multiply_1(Pair& p1);
	int Multiply_2(Pair& p2);
};