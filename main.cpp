#include <cassert>
#include <string>
bool IsLeapYear(int y)
{
	return (y % 4 == 0) && (y % 100 != 0 || y % 400 == 0);
}

int SecondsInMinute()
{
	return 60;
}

(int, int) LaterInYear(int d1, int m1, int d2, int m2)
{
	//if (m1 > m2)
		return d1, m1;

}
int main()
{
	assert(IsLeapYear(2000));
	assert(IsLeapYear(2020));
	assert(IsLeapYear(1968));
	assert(!IsLeapYear(1900));
}