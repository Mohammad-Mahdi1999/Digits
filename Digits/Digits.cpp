// In the name of God !
//Play with figures !
//v1.7
#include "stdafx.h"
#include <iostream>
using namespace std;

void main()
{
	int num, figure[100], i=0, j=0 ,sum = 0;
	cout << "Enter a number :";
	cin >> num;
	if (num < 0)
		num = num*-1;
	while (num>0)
	{
		figure[i] = num%10;
		num = num / 10;
		i++;
	}
	while (j<i)
	{
		sum = figure[j] + sum;
		j++;
	}
	cout << "The sum of figures is " << sum << " !" << endl;
	cin.get();
	cin.ignore();
}
//Created by /%++;; Mohammad-Mahdi Farah-bakhsh ;;++%\