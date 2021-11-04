#include <iostream>
#include <iomanip>

// з використанням функцій

using namespace std;

void Input(int* a, const int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
	cout << endl;
}
void Print(int* a, const int size)
{
	cout << "a = {";
	for (int i = 0; i < size; i++)
		cout << setw(4) << a[i];
	cout << "}" << endl;
}
int Count(int* a, const int size)
{
	int count = 0;
	for (int i = 0; i < size; i++)
		if (a[i] < 0)
			count++;
	return count;
}

int main()
{
	int n;
	cout << "n = "; cin >> n;
	int* a = new int[n];

	Input(a, n);
	Print(a, n);

	cout << "Count = " << Count(a, n) << endl;

	return 0;
}