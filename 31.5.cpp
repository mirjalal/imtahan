// 31.5.cpp : Verilmiş sətirdə sözlərin sayını tapan proqram tərtib edin.

#include "stdafx.h"
#include <iostream>	// cin, cout
#include <sstream>	// getline
#include <vector>	// vector

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Setri daxil edin: " << flush;
	string setir;
	getline(cin, setir); // sətri oxuyur

	vector<string> v_setir;
	string ifadeler;
	istringstream gonder_getsin(setir);

	while (gonder_getsin >> ifadeler)
		v_setir.push_back(ifadeler);

	cout << "Daxil olunan metnde sozlerin sayi: " << v_setir.size() << endl << endl; // vector.size() vektordakı sözlərin sayını hesablayır

	v_setir.clear(); // vektorun içindəkiləri silir
	vector<string>().swap(v_setir); // yaddaşdan ayırdığı yeri silir

	return 0;
}

