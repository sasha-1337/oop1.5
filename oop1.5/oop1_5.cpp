#include <iostream>
#include "Long.h"
#include "Pair.h"

using namespace std;

int main()
{
	Pair p1, p2;
	Long y;

	y.Read(p1,p2);
	y.Display(p1, p2);

	return 0;
}