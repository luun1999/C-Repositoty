#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	unsigned int soGiay;
	int gio, phut, giay;
	cout<<"Nhap vao so giay trong khoang tu 0 den 86399: ";
	cin >> soGiay;
	gio = soGiay / 3600;
	phut = (soGiay % 3600) / 60;
	giay = soGiay % 60;
	printf("Thoi gian la: %02d:%02d:%02d \n", gio, phut, giay);
	system("pause");
	return 0;

}
