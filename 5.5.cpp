// 5.5.cpp : Verilmiş mətndə verilmiş hərflə başlayan sözlərin sayını tapan proqram tərtib edin.

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int say = 0;
	char herf[1], metn[1000];
	char exclude[] = ",.!?\n\t@~'";
	char *token;

	cout << "Metni daxil edin: ";
	cin >> metn;
	cout << "Herfi daxil edin: ";
	cin >> herf;

	token = strtok_s(metn, exclude, NULL);

	while (token != NULL)
	{
		if (token == herf)
			say++;
		token = strtok_s(NULL, exclude, NULL);
	}

	cout << """";




	
	while (token != NULL)
	{
		// While there are tokens in "string"
		printf(" %s\n", token);

		// Get next token: 
		
	}


	return 0;
}

