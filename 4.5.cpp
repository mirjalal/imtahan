// 4.5.cpp : Verilmiş sətirdə verilmiş bir sözü digər sözlə əvəz edən proqram tərtib edin.

#include "stdafx.h"
#include <algorithm> //	find, replace
#include <iostream>	 // cout, endl
#include <sstream>	 // istringstream
#include <vector>	 // vector

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	cout << "Setri daxil edin: ";
	string setir;
	getline(cin, setir);

	vector<string> v_setir; // string tipində v_setir adında vektor yaradıram
	vector<string>::iterator axtarilan; // biraz aşağıya bax, bu nəyə lazımdı yazmışam
	string ifadeler;
	istringstream yaz(setir); // bu istringstream tipində götürdüyüm bu funksiya vasitəsilə vektora elementləri daxil etmək üçün
							  // onları parse edirəm

	while (yaz >> ifadeler)
		v_setir.push_back(ifadeler);

	cout << "Daxil etdiyiniz metn: " << endl;
	for (auto k : v_setir) // vektorun elementlərini çapa vermək üsullarından ən rahatı budu. bundan başqa 2 üsul da var (bəlkə daha çoxdu amma mən 2sini bilirəm :DD )
		cout << k << endl;

	cout << endl << endl;

	cout << "Deyismek istediyiniz ifadeni daxil edin: ";
	string hansi;
	getline(cin, hansi); // yuxarıdakı ilə eyni işi görür

	cout << "Deyisdirilecek ifadeni daxil edin: ";
	string evezlenecek_ifade;
	getline(cin, evezlenecek_ifade); // yuxarıdakı ilə eyni işi görür

	axtarilan = find(v_setir.begin(), v_setir.end(), hansi); 
	/* 
	 * find() metodu ilə vektor elementləri üzərində əməliyyat apardığım üçün alınan nəticə nə olursa olsun, 
	 * o mütləq "vektorun özünkü" olmalıdı. yəni, mən yuxarıdakı sətirdə int/char/string/size_t və s bu kimi adi dəyişən tipi yazsaydım, sintaksis səhv verəcəydi
	 * ona görə vektorlar üçün iterator anlayışı ortaya "atılır" ( :D ). 
	 * vector<string>::iterator ifadəsində vector<string>::const_iterator da yazıla bilər (dəqiq bilmirəm aralarında nə fərq var, ona görə yalannan yazmıyım).
	 * yuxarıda yazmışam ki, "bundan başqa 2 üsul da var". bax həmin o üsullardan biri də budu. bundan istifadə edib yuxarıdakı kodun veridiyi nəticəni almaq olar.
	 * yəni;
	 * başqa bir iterator götürək (çünki axtarilan adlı iterator artıq istifadə olunur və sözsüz ki, ondan başqa məqsəd üçün istifadə etmək düzgün deyil!)
	 * 
	 * vector<string>::const_iterator SABAH;
	 * 
	 * for (auto k : v_setir) sətrini aşağıdakı kimi dəyişdirək
	 * 
	 * for (SABAH = v_setir.begin(), SABAH != v_setir.end(); SABAH++)
	 *		cout << *SABAH << endl; pointer tipində olur bu SABAH dəyişəni
	 * 
	 * eyni nəticəni verməlidi. özün yoxla ;)
	 *
	 */

	replace(v_setir.begin(), v_setir.end(), hansi, evezlenecek_ifade);
	/*
	 * bu sətir aşağıdakı mənaya gəlir:
	 *
	 * vektorun əvvəlindən axırına kimi göstərilən elementi göstərilən elementlə əvəz et.
	 * 
	 */

	cout << "Deyisiklik edilenden sonra alinan metn: " << endl;
	for (auto k : v_setir)
		cout << k << endl;

	v_setir.clear();
	vector<string>().swap(v_setir);

	return 0;
}

