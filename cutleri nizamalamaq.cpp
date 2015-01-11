// cutleri nizamalamaq.cpp : cüt yerdə dayanan elementləri nizamalamaq

#include "stdafx.h"
#include <iostream>
#include <vector>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int eded, n, _temp, min_i;
	size_t i, j;

	cout << "Nece eded daxil edeceksiniz?" << endl << ">>> ";
	cin >> n;

	vector<int> v_eded;
	v_eded.reserve(n);

	cout << "Ededleri daxil edin:" << endl;
	
	for (int i = 0; i < n; i++)
	{
		cin >> eded;
		v_eded.push_back(eded);
	}

	for (i = 1; i <= n; i += 2)
	{
		min_i = i;
		for (j = i; j < n; j += 2)
		{
			if (v_eded[j] < v_eded[min_i])
				min_i = j;

			_temp = v_eded[i];
			v_eded[i] = v_eded[min_i];
			v_eded[min_i] = _temp;
		}
	}

	cout << endl << endl;
	for (auto v : v_eded)
		cout << v << "  ";

	return 0;
}

