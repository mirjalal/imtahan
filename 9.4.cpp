// 9.4.cpp : N natural ədədi verilmişdir.  Bu ədədin birinci və axırıncı rəqəmlərinin yerini dəyişən proqram tərtib edin. 

#include "stdafx.h"
#include <iostream>	// cout, endl
#include <string>	// to_string

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int int_eded, birinci, sonuncu;
	cin >> int_eded; // int tipindəki ədədi oxuyuram
	
	string string_eded = to_string(int_eded); // oxuduğum ədədi string-ə convert to_string() vasitəsilə
	
	int son_index = string_eded.length(); // string-ə çevrilmiş ədədin uzunluğunu tapıram
	
	birinci = string_eded[0]; // birinci adlı dəyişənə string tipindəki ədədin ilkin elementini mənimsədirəm
	sonuncu = string_eded[son_index - 1]; // sonuncu adlı dəyişənə string tipindəki ədədin axırıncı elementini mənimsədirəm
	string_eded[0] = sonuncu; // ilkin elementi ədədin axırıncı element ilə əvəz edirəm
	string_eded[son_index - 1] = birinci;  // sonuncu elementi ədədin axırıncı element ilə əvəz edirəm

	int son_netice = atoi(string_eded.c_str()); // son_netice dəyişəninə yekunda alınan, çevrilmiş, string tipindəki ədədi int-ə convert eliyiirəm
	cout << son_netice << endl;

	return 0;
}

