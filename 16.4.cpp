// 16.4.cpp : N sayda tam ədəddən ibarət olan M massivi verilmişdir. İndeks nömrəsi tək ədəd olan elementlər arasında cüt ədədlərin sayını tapan proqram tərtib edin. 

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool f_cut(int i) { return ((i % 2) == 0); }

typedef vector<int> Numeric;

int _tmain(int argc, _TCHAR* argv[])
{
	size_t eded, n, i, cem = 0;

	cout << "Nece eded daxil edeceksiz?" << endl << ">>> ";
	cin >> n;

	Numeric v_eded;
	Numeric::iterator cutlerin_yigini, addim;
	v_eded.reserve(n);

	cout << "Ededleri daxil edin: " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> eded;
		v_eded.push_back(eded);
	}

	for (i = 0; i < v_eded.size(); i++)
		cutlerin_yigini = partition(v_eded.begin(), v_eded.end(), f_cut);

	for (addim = v_eded.begin(); addim != cutlerin_yigini; ++addim)
		cem += *addim;

	v_eded.clear();
	vector<int>().swap(v_eded);

	cout << endl << endl << "Indeks nomresi tek olan cut ededlerin cemi: " << cem << endl;
	
	return 0;
}
