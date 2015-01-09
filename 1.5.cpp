// 1.5.cpp : Verilmiş mətndə polindrom sözlərin sayını tapan proqram tərtib edin.

#include "stdafx.h"
#include <iostream>	// cin, cout
#include <sstream>	// istringstream
#include <vector>	// vector
//#include <chrono>

using namespace std;
//using namespace chrono;

int _tmain(int argc, _TCHAR* argv[])
{
	size_t i;
	int say = 0;

	cout << "Enter words: " << flush;
	string sozler;
	getline(cin, sozler); // daxil olunan setiri oxuyuram. cin >> setir; yazsaz alinmaya biler. cunki getline() və cin operatorları
						  // ferqli funksiyalari yerine yetirir 

	vector<string> setir, temp; // string tipində setir və temp adında vektorlar yaradıram
	string _soz;
	istringstream iss(sozler); // bu istringstream tipində götürdüyüm bu funksiya vasitəsilə vektora elementləri daxil etmək üçün
							   // onları parse edirəm
	while (iss >> _soz) // əgər oxunursa onda,
	{
		setir.push_back(_soz); // setir vektoruna _soz-ləri daxil edirəm
		temp.push_back(_soz);  // temp vektoruna _soz-ləri daxil edirəm
	}

	for (i = 0; i < setir.size(); i++) // setir.size() ---  hal hazırda setir vektorunda olan elementlərin sayını tapır
	{
		reverse(setir[i].begin(), setir[i].end());
		/*
		 * reverse() funksiyası göstərilən vektorun əvvəlindən (birinci elementindən) axırına (son elementinə (son elementi də daxil olmaqla)) qədər
		 * bütün elementləri tərs çevirib vektorun özünə mənimsədir.
		 * tutaq ki, setir vektorundakı elementlər bulardı: salam sagol good bad disk samsung
		 * reverse(setir[i].begin(), setir[i].end()); sətri icra olunduqda setir vektorunun elementləri aşağıdakılar olacaq:
		 * malas logas doog dab ksid gunsmas
		 * bu sətrin gördüyü iş bundan ibarətdi
		 *
		 * P.S. yuxarıda yazdığım temp.push_back(_soz); sətri ondan ötrü idi ki, reverse olunduqdan sonra daxil olunan elementlər
		 * setir vektorunda qalmayacaqdı.
		 */
		if (setir[i] == temp[i]) // əgər sözün çevrilmiş halı ilə əsli bir-birinə bərabərdisə,
			say++;				 // sayı bir vahid artır
	}

	setir.clear(); // vektorun içindəkiləri silir
	temp.clear(); // vektorun içindəkiləri silir
	vector<string>().swap(setir); // yaddaşdan ayırdığı yeri silir
	vector<string>().swap(temp); // yaddaşdan ayırdığı yeri silir

	cout << say << endl << endl;

	/*
	high_resolution_clock::time_point t1 = high_resolution_clock::now();
	main_main_function();
	high_resolution_clock::time_point t2 = high_resolution_clock::now();

	auto duration = std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count();

	cout << duration;
	*/
	system("pause");
	return 0;
}

