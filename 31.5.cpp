// 31.5.cpp : Verilmiş sətirdə sözlərin sayını tapan proqram tərtib edin.

#include "stdafx.h"
#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Setri daxil edin: " << flush;
	string setir;
	getline(cin, setir);

	vector<string> v_setir;
	string ifadeler;
	istringstream gonder_getsin(setir);

	while (gonder_getsin >> ifadeler)
		v_setir.push_back(ifadeler);

	cout << "Daxil olunan metnde sozlerin sayi: " << v_setir.size() << endl << endl;

	v_setir.clear();
	vector<string>().swap(v_setir);

	return 0;
}

