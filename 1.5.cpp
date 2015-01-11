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
	getline(cin, sozler); 

	vector<string> setir, temp; 
	string _soz;
	istringstream iss(sozler);

	while (iss >> _soz)
	{
		setir.push_back(_soz); 
		temp.push_back(_soz);  // temp vektoruna _soz-ləri daxil edirəm
	}

	for (i = 0; i < setir.size(); i++) // setir.size()  ---  hal hazırda setir vektorunda olan elementlərin sayını tapır
	{
		reverse(setir[i].begin(), setir[i].end());
		if (setir[i] == temp[i])
			say++;				 
	}

	setir.clear(); 
	temp.clear(); // vektorun içindəkiləri silir
	vector<string>().swap(setir); // yaddaşdan ayırdığı yeri silir
	vector<string>().swap(temp); 

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

