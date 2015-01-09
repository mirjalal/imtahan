// 1.4.cpp : N natural ədədi verilmişdir. Bu ədədin rəqəmləri cəmini hesablayan proqram tərtib edin.
#include "stdafx.h"
#include <iostream>

using namespace std;

// aşağıda yazdığım define-dan çox da qorxma -_- adi bir koddu, sadəcə olaraq daha SƏLİQƏLİ ( :D ) görünsün deyə
// bir neçə sətirdə yazmışam. bunun üçün də " \ " simvolundan istifadə etmişəm. vəssəlam :)
#define hesabla while (eded) \
	{ \
		cem += eded % 10; \
		eded /= 10; \
	} \
	cout << cem << endl \

int _tmain(int argc, _TCHAR* argv[])
{
	int cem = 0, eded;
	cout << "ededi daxil edin: ";
	cin >> eded;
	hesabla;

	return 0;
}

