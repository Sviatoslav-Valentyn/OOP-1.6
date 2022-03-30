#include "Time.h"
#include <iostream>
using namespace std;

int main()
{
	Time s;
	s.Read();
	s.Display();
	int c, b;
	do
	{
		cout << "IncreaseSecond = "; cin >> c;

	} while (!s.secondCheck(c));

	s.IncreaseSecond(c);
	s.Display();

	do
	{
		cout << "IncreaseMinute = "; cin >> b;

	} while (!s.minuteCheck(b));
	s.IncreaseMinute(b);
	s.Display();
	return 0;
}