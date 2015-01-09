// tək, cüt və 3ə bölünən elementlər.cpp : Tam elementlərdən ibarət M massivi verilmişdir. Bu massivin tək ,cüt və üçə bölünən  elementlərini tapan proqram tərtib edin.

#include "stdafx.h"
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

bool tekler(int i) { return ((i % 2) == 1); }

bool cutler(int i) { return ((i % 2) == 0); }

bool uce_bolunenler(int i) { return ((i % 3) == 0); }

int _tmain(int argc, _TCHAR* argv[])
{
	size_t i, eded;

	cout << "daxil edeceyiniz element sayi: ";
	size_t n;
	cin >> n;

	cout << "yaz getsin: " << endl;
	vector<int>tek, cut, uce_bolunen;
	vector<int>::iterator h, addim;

	tek.reserve(n);
	cut.reserve(n);
	uce_bolunen.reserve(n);

	for (i = 0; i < n; i++)
	{
		cin >> eded;
		tek.push_back(eded);
		cut.push_back(eded);
		uce_bolunen.push_back(eded);
	}

	cout << endl;
	cout << "Tek ededler: ";
	h = partition(tek.begin(), tek.end(), tekler);
	for (addim = tek.begin(); addim != h; ++addim)
		cout << *addim << " ";
	cout << endl << endl;

	cout << "Cut ededler: ";
	h = partition(cut.begin(), cut.end(), cutler);
	for (addim = cut.begin(); addim != h; ++addim)
		cout << *addim << " ";
	cout << endl << endl;

	cout << "3-e qaliqsiz bolunen ededler: ";
	h = partition(tek.begin(), tek.end(), uce_bolunenler);
	cout << endl;
	for (addim = tek.begin(); addim != h; ++addim)
		cout << *addim << " ";
	cout << endl << endl;

	tek.clear();
	vector<int>().swap(tek);
	cut.clear();
	vector<int>().swap(cut);
	uce_bolunen.clear();
	vector<int>().swap(uce_bolunen);

	return 0;
}
