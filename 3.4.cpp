// 3.4.cpp : N natural ədədi verilmişdir. Bu ədədin rəqəmlərini artan sıra ilə nizamlayıb çıxışa verən proqram tərtib edin.

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int eded, digit, temp;

	cin >> eded;
	for (digit = 0; digit<9; digit++)
		for (temp = eded; temp > 0; temp /= 10)
			if (temp % 10 == digit) 
				cout << digit;

	cout << "\n";

	return 0;
}

