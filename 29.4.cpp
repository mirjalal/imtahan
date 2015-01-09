// 29.4.cpp : N sayda tam ədəddən ibarət  olan massiv verilmişdir. Bu massivin elementlərini onlarin rəqəmləri cəmi ilə əvəz edən proqram tərtib edin.

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	size_t n, i, eded, cem = 0;
	cout << "Nece eded daxil edeceksiz?" << endl << ">>> ";
	cin >> n;

	vector<int> v_eded;
	v_eded.reserve(n);

	for (i = 0; i < n; i++)
	{
		cin >> eded;
		v_eded.push_back(eded);
	}

	for (i = 0; i < n; i++)
	{
	//	while (v_eded[i])
		//{
		/*cem += v_eded[i] % 10;
		v_eded[i] /= 10;
	//	int digit = v_eded[i] % 10;
	//	cem += digit;
		v_eded.insert(v_eded.begin()+i, 1, cem);*/
	//	v_eded[i] /= 10;
	//	}
		for (size_t j = 0; j < i; j++)
		{
			cem += v_eded[i] % 10;
			v_eded[i] /= 10;
		}
		v_eded.insert(v_eded.begin() + i, 1, cem);
	}

	//reverse(v_eded.begin(), v_eded.end());
	//cem = accumulate(v_eded.begin(), v_eded.end(), 0);
	cout << endl;

	for (auto k : v_eded)
		cout << k << endl;

	v_eded.clear();
	vector<int>().swap(v_eded);

	return 0;
}
