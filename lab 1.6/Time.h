#pragma once
#include <string>
using namespace std;

class Time
{
private:
		class Triad
	{
	private:
		int a;
		int b;
		int c;
	public:
		int getA() const { return a; }
		int getB() const { return b; }
		int getC() const { return c; }
		void setA(int a) { this->a = a; }
		void setB(int b) { this->b = b; }
		void setC(int c) { this->c = c; }

		void Init(int a, int b, int c);
		void augmentationA();
		void augmentationB();
		void augmentationC();

		void Display() const;
		void Read();
	};
	Triad triad;
public:
	Triad getTriad() const { return triad; }
	void setTriad(Triad triad) { this->triad = triad; }

	bool Init(int hour, int minute, int second);
	void Display() const;
	void Read();
	void IncreaseSecond(int second);
	void IncreaseMinute(int minute);
	bool secondCheck(int);
	bool minuteCheck(int);
};

