// 6.4.cpp : Verilmiş massivin tək və cüt yerdə duran elementlərini ayrılıqda nizamlamalı. 
// Tək yerdə duran elementləri cüt yerdə, cüt yerdə duranları isə tək yerdə yazmalı. Alqoritmin kodunu tərtib etməli.

#include "stdafx.h"
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool _sort(int d, int _d) { return d < _d; }

bool _tek(int d) { return ((d % 2) == 1); }

int _tmain(int argc, _TCHAR* argv[])
{
	int length, eded;

	cout << "Ne qeder eded daxil edeceksiniz?" << endl << ">>> ";
	cin >> length;

	vector<int> hamisi, tekler, cutler;

	for (int i = 0; i < length; i++)
	{
		cin >> eded;
		hamisi.push_back(eded);
	}

	for (int i = 0; i < length; i++)
	{
		if (_tek(i))
			cutler.push_back(hamisi[i]);
		else if (!(_tek(i)))
			tekler.push_back(hamisi[i]);
	}

	sort(tekler.begin(), tekler.end(), _sort);
	sort(cutler.begin(), cutler.end(), _sort);

	cout << endl << endl << "cutler: ";
	for (auto c : cutler)
		cout << c << "  ";
	cout << endl << endl << "tekler: ";
	for (auto t : tekler)
		cout << t << "  ";

	for (int i = 0; i < length; i++)
	{
		if (_tek(i))
			hamisi[i] = cutler[i / 2];
		if (!(_tek(i)))
			hamisi[i] = tekler[i / 2];
	}

	cout << endl << endl;
	for (auto H : hamisi)
		cout << H << endl;

	hamisi.clear();
	vector<int>().swap(hamisi);
	tekler.clear();
	vector<int>().swap(tekler);
	cutler.clear();
	vector<int>().swap(cutler);

	return 0;
}

