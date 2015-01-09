// 3.4.cpp : N natural ədədi verilmişdir. Bu ədədin rəqəmlərini artan sıra ilə nizamlayıb çıxışa verən proqram tərtib edin.

#include "stdafx.h"
#include <iostream>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int eded, digit, temp;
	///////////////////////// mene ele gelir ki burda basa salinasi cox da bir sey yoxdu. basa dusmesez deyersiz, yazaram her setire aid comment.
	cin >> eded;
	for (digit = 0; digit<9; digit++)
		for (temp = eded; temp > 0; temp /= 10)
			if (temp % 10 == digit) 
				cout << digit;
	cout << "\n";

	return 0;
}

