// 2.2.cpp : Verilmiş sətirdə uzunluğu tək olan sözlərin sayını tapan proqram tərtib edin.

#include "stdafx.h"
#include <iostream>	// cout, endl
#include <vector>	// vector
#include <sstream>	// istringstream

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	size_t i; // size_t olması vacib şərtdi. int götürəndə loss of data başa verə bilir.
	int say = 0;

	cout << "Setiri daxil edin: ";
	string setir;
	getline(cin, setir);

	vector<string> v_setir;
	string ifadeler;
	istringstream yig(setir);

	while (yig >> ifadeler) // əgər oxunursa onda,
		v_setir.push_back(ifadeler); // vektorun içərisinə həmin elementləri daxil edir

	for (i = 0; i < v_setir.size(); i++)
	{
		if (v_setir.at(i).size() % 2 == 1)
			say++;
	}

	v_setir.clear();
	vector<string>().swap(v_setir);

	cout << "Uzunlugu tek olan sozerin sayi: " << say << endl;

	return 0;
}

