// In the name of God !
//Play with figures !
//v1.0
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, sum = 0;
	cout << "Enter a number :";
	cin >> num;
	while (num>0)
	{
		sum = sum + num % 10;
		num = num / 10;
	}
	cout << "The sum of figures is " << sum << " !" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\