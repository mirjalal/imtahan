// 25.5.cpp : Verilmiş sətirdən uzunluğu verilmiş ədədə bərabər olan sözləri silən proqram tərtib edin. 

#include "stdafx.h"
#include <functional>
#include <algorithm>
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Setiri daxil edin: ";
	string setir;
	getline(cin, setir);

	vector<string> v_setir;
	string ifadeler;
	istringstream yig(setir);

	while (yig >> ifadeler)
		v_setir.push_back(ifadeler);

	cout << endl;
	cout << "Daxil etdiyiniz setir:" << flush;
	for (auto it1 : v_setir)
		cout << it1 << " ";
	cout << endl << endl;

	cout << "Istediyiniz uzunlugu daxil edin: ";
	size_t uzunlug;
	cin >> uzunlug;

//	for (auto v : v_setir)
	for (size_t i = 0; i < v_setir.size(); i++)
	{
		remove_if(v_setir.begin(), v_setir.end(), v_setir[i].size() == uzunlug);
		cout << v_setir[i];
	}

	return 0;
}

