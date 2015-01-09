// 30.5.cpp : N sayda tam ədəddən ibarət olan massiv verilmişdir. Massivin sadə elementlərinin sayını tapan proqram tərtib edin.
// 2 saat vaxt itirdim buna görə  -_-   -_-    -_-
#include "stdafx.h"
#include <iostream>
#include <vector>
 
using namespace std;

typedef vector<int> EDEDLER; // özüm belə yazdım ki, yadda qalsın ki vektorları bu cür də təyin etmək olar.

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Nece eded daxil etmek isteyirsiz?" << flush;
	size_t i, n, say = 0;
	cin >> n;
	
	EDEDLER daxil_olunan_ededler; // EDEDLER tipində (adı EDEDLER-di amma özü vector-du yuxarıda qeyd elədiyim kimi) daxil_olunan_ededler adında dəyişən götürürəm
	daxil_olunan_ededler.reserve(n); // n sayda boş yer ayırıram vectorda

	cout << "Ededleri daxil edin: " << flush;
	int eded;
	for (i = 0; i < n; i++)
	{
		cin >> eded;
		daxil_olunan_ededler.push_back(eded);
	}

	for (i = 0; i < n; i++)
	{
		bool sade = true; // bool tipində sade adında və qiyməti true olan dəyişən götürürəm
		for (int j = 2; j < daxil_olunan_ededler[i] / 2; j++) // 2-dən vektorun cari i-ci qiymətinin yarısına qədər j-ni bir vahid artırıram
		{
			if (daxil_olunan_ededler[i] % j == 0)	// əgər cari i-ci elementin j-yə bölünməsindən alınan qalıq 0-dırsa
				sade = false;						// sadə-nin qiymətini false edirəm
		}
		if (sade)	// yuxarıdakı sətirdə sadə dəyişəni false qiymətini almasa, təbii ki onun qiyməti true olacaq. belə olan halda say-ı bir vahid artırıram
			say++;
	}

	cout << "say = " << say << endl << endl;

	daxil_olunan_ededler.clear(); // vektorun içindəkiləri təmizləyirəm
	vector<int>().swap(daxil_olunan_ededler);	// vektor üçün ayrılan yaddaş sahəsini təmizləyirəm
	
	return 0;
}

