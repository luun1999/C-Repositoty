//Bai toan doi tien 
#include <iostream>
using namespace std;
int main()
{
	unsigned int tien;
	int dem10 = 0, dem5=0 , dem2=0, dem1=0;
	cout << "Nhap vao so tien can doi: "; cin >> tien;
	
	if (tien / 10 != 0)
	{
		dem10 = tien / 10;
		tien = tien % 10;
	}
	else tien = tien % 10;
	
	if (tien / 5 != 0)
	{
		dem5 = tien / 5;
		tien = tien % 5;
	}
	else tien = tien % 5;
	
	if (tien / 2 != 0)
	{
		dem2 = tien / 2;
		tien = tien % 2;
	}
	else tien = tien % 2;
	dem1 = tien;
	
	cout << "Ban doi duoc " << dem10 << " to 10d, " << dem5 << "to 5d, " << dem2 << "to 2d va " << dem1 << "to 1d" << endl;

	system("pause");
	return 0;


}