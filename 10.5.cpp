// 10.5.cpp : Verilmiş sətirdə verilmiş hərfin neçə dəfə iştirak etdiyini hesablayan proqrqm tərtib edin.

#include "stdafx.h"
#include <iostream> // cout, cin

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int istifade_sayi = 0;

	cout << "Setri daxil edin: ";
	string setir;
	getline(cin, setir);

	cout << "axtarilan herfi daxil edin: ";
	char herf;
	cin >> herf;
	
	for (size_t i = 0; i < setir.length(); i++)
	{
		if (setir[i] == herf)
			istifade_sayi++;
	}
	cout << istifade_sayi << endl;

	return 0;
}

