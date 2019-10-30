#include <iostream>
using namespace std;

void CheckAndPrint(int n, int d, int &count);
bool Reduced(int n, int d);

int main()
{
	int limit;
	int numerator = 1, denominator = 1;
	int count = 0;
	cout << "How many years would you like to prepare for?: ";
	cin >> limit;
	limit = limit * 365;
	cout << 0 << ' ';
	for (int i = 1; count <= limit; i++)
	{
		denominator = i;
		while (denominator > 0)
		{
			CheckAndPrint(numerator, denominator, count);
			numerator++;
			denominator--;
		}
		numerator = 1;
	}
	cout << endl << count << endl;
	system("Pause");
	return 0;
}
void CheckAndPrint(int numerator, int denominator, int &count)
{
	if (Reduced(numerator, denominator))
	{
		cout << numerator << "/" << denominator << ' ';
		cout << "-" << numerator << "/" << denominator << ' ';
		count++;
	}
	else
		return;
}
bool Reduced(int numerator, int denominator)
{
	for (int i = numerator; i > 1; i--)
	{
		if (numerator%i == 0 && denominator % i == 0)
		{
			return false;
		}
	}
	return true;
}