#include <iostream>
using namespace std;
int main()
{
	float banKinh;
	cout << "Nhap vao ban kinh duong tron: "; cin >> banKinh;
	float chuVi, dienTich;
	chuVi = 2 * banKinh*3.14;
	dienTich = banKinh*banKinh*3.14;
	cout << "Chu vi cua hinh tron la: " << chuVi << endl;
	cout << "Dien tich cua hinh tron la: " << dienTich << endl;
	system("pause");
	return 0;

}