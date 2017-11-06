#include <iostream>
using namespace std;
int main()
{
	int n,nn = 0,k;
	cout << "Nhap so nguyen N: "; cin >> n;
	while (n > 0)
	{
		k = n % 10;
		nn = nn * 10 + k;
		n = n / 10;
	}
	cout << "So dao nguoc la: " << nn;
	cout << endl;
	return 0;
}