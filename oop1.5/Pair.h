#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Pair
{
private:
	int first;
	int second;
public:
	int GetFirst() const { return first; }
	int GetSecond() const { return second; }

	void SetFirst(int first) { this->first = first; };
	void SetSecond(int second) { this->second = second; };

	void Read(Pair& p1, Pair& p2);
	void Init(int F, int S);
	void Display(Pair& p1, Pair& p2);
	string ToString(int value) const;

	int Sum_1(int a, int b);
	int Sum_2(Pair& p2);
};