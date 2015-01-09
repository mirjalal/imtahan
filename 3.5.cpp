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
	getline(cin, setir); // daxil olunan setiri oxuyuram. cin >> setir; yazsaz alinmaya biler. cunki getline() və cin operatorları
						//  ferqli funksiyalari yerine yetirir 

	vector<string> v_setir; // string tipində v_setir adında vektor yaradıram
	string ifadeler;
	istringstream yig(setir);   // bu istringstream tipində götürdüyüm bu funksiya vasitəsilə vektora elementləri daxil etmək üçün
								// onları parse edirəm

	while (yig >> ifadeler) // əgər oxunursa onda,
		v_setir.push_back(ifadeler); // vektorun içərisinə həmin elementləri daxil edir

	for (i = 0; i < v_setir.size(); i++) // v_setir.size() hal-hazırda vektorun içərisindəki elementlərin sayını tapır
	{
		if (v_setir.at(i).size() % 2 == 1)	// əgər i-ci yerdə duran elementin simvollarının sayı cütdürsə, onda
			say++;							// sayın üstünə bir əlavə edir
	}

	v_setir.clear(); // vektorun içindəkiləri silir
	vector<string>().swap(v_setir); // yaddaşdan ayırdığı yeri silir

	cout << "Uzunlugu tek olan sozerin sayi: " << say << endl;

	return 0;
}

