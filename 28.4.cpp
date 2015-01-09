// 28.4.cpp : N sayda tam ədəddən ibarət olan massiv verilmişdir. Bu massivin elə elementlərinin cəmini tapin ki, onlarin yazılışında 1 rəqəmi iştirak etmiş olsun.


#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <stack>

int countDigitsInInteger(int n)
{
	int count = 0;
	while (n>0)
	{
		count++;
		n = n / 10;
	}
	return count;
}

using namespace std;

int main(int argc, char *argv[])
{
	int intLength = 0;
	int number;
	int digit;
	int sum = 0;
	string s;
	cout << "Please enter an integer ";
	cin >> number;
	cout << "Orginal Number = " << number << endl;

	//make the number positive
	if (number<0)
		number = -number;

	intLength = countDigitsInInteger(number);
	//break apart the integer into digits

	stack<int> digitstack;
	while (number>0)
	{
		digit = number % 10;
		number = number / 10;
		digitstack.push(digit);
		sum = sum + digit;
	}

	while (digitstack.size() > 0)
	{
		cout << digitstack.top() << " ";
		digitstack.pop();
	}

	cout << endl << "Sum of the digits is: " << sum << endl;
	
	return 0;
}
