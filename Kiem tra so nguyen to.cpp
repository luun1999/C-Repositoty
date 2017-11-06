#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap vao so N: "; cin >> n;
	while (n <= 1)
	{
		cout << "So N khong hop le. Nhap lai: "; cin >> n;
	}
	if (n % 2 == 0)
	{
		if (n == 2)
			cout << "N la so nguyen to" << endl;
		else cout << "N khong la so nguyen to" << endl;
		system("pause");
		return 0;
	}
	else
	{
		for (int i = 3; i <= sqrt(n); i = i + 2)
			if (n % i == 0)
			{
				cout << "N khong la so nguyen to";
				cout << endl;
				system("pause");
				return 0;
			}
		cout << "N la so nguyen to";
		cout << endl;
		system("pause");
		return 0;

	}

}
