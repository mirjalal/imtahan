// 11.5.cpp : Verilmiş sətirdə verilmiş sözün neçə dəfə iştirak etdiyini hesablayan proqram tərtib edin.

#include "stdafx.h"
#include <algorithm>	// count
#include <iostream>		// cout, cin
#include <sstream>		// istringstream
#include <vector>		// vector

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int say;

	cout << "Setri daxil edin: ";
	string setir;
	getline(cin, setir);

	vector<string> v_setir;
	vector<string>::iterator axtarilan;
	string ifadeler;
	istringstream yaz(setir);

	while (yaz >> ifadeler)
		v_setir.push_back(ifadeler);

	cout << "Axtarilan sozu daxil edin: ";
	string axtar;
	getline(cin, axtar);

	say = count(v_setir.begin(), v_setir.end(), axtar); // vektorun əvvəlindən axırına kimi axtarılan ifadədən nə qədər olduğunu hesablayır

	v_setir.clear(); // vektorun içindəkiləri silir
	vector<string>().swap(v_setir); // yaddaşdan ayırdığı yeri silir

	cout << "Daxil olunan cumlede " << axtar << " ifadesi " << say << " qeder tekrar olunub." << endl;

	return 0;
}

