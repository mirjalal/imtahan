// 16.5.cpp : Verilmiş sətirdə ən uzun sözun uzunluğunu hesablayan proqram tərtib edin. 

#include "stdafx.h"
#include <algorithm>
#include <iostream>	// cin, cout
#include <sstream>	// getline
#include <vector>	// vector

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	string en_uzun;

	cout << "Setri daxil edin: " << flush;
	string setir;
	getline(cin, setir); // sətri oxuyur

	vector<string> v_setir;
	string ifadeler;
	istringstream gonder_getsin(setir);

	while (gonder_getsin >> ifadeler)
		v_setir.push_back(ifadeler);

	size_t max = v_setir[0].size();

	for (size_t i = 0; i < v_setir.size(); i++)
	{
		if (v_setir[i].size() > max)
		{
			max = v_setir[i].size();
			en_uzun = v_setir[i];
		}
	}

	cout << en_uzun << endl;

	v_setir.clear();
	vector<string>().swap(v_setir);

	return 0;
}

