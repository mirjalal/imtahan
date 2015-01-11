// 30.5.cpp : N sayda tam ədəddən ibarət olan massiv verilmişdir. Massivin sadə elementlərinin sayını tapan proqram tərtib edin.
// 2 saat vaxt itirdim buna görə  -_-   -_-    -_-

#include "stdafx.h"
#include <iostream>
#include <vector>
 
using namespace std;

typedef vector<int> EDEDLER;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Nece eded daxil etmek isteyirsiz?" << flush;
	size_t i, n, say = 0;
	cin >> n;
	
	EDEDLER daxil_olunan_ededler;
	daxil_olunan_ededler.reserve(n); // n sayda boş yer ayırıram vectorda

	cout << "Ededleri daxil edin: " << flush;
	int eded;
	for (i = 0; i < n; i++)
	{
		cin >> eded;
		daxil_olunan_ededler.push_back(eded);
	}

	for (i = 0; i < n; i++)
	{
		bool sade = true;
		for (int j = 2; j < daxil_olunan_ededler[i] / 2; j++)
		{
			if (daxil_olunan_ededler[i] % j == 0)
				sade = false;
		}

		if (sade)
			say++;
	}

	cout << "say = " << say << endl << endl;

	daxil_olunan_ededler.clear();
	vector<int>().swap(daxil_olunan_ededler);
	
	return 0;
}

