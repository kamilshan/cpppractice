#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "enter the size of your digit\n";
	cin >> n;

	if (n <= 0)
	{
		cout << "false\n";
		return 0;
	}

	int num[n];   // c style(compiler extension)

	cout << "enter the digits of your binary numbers one by one\n";
	for (int i = 0; i < n; i++)
	{
		cin >> num[i];
	}

	for (int j = 0; j < n; j++)
	{
		if (num[j] != 0 && num[j] != 1)
		{
			cout << "false\n";
			return 0;
		}
	}

	cout << "true\n";
	return 0;
}
