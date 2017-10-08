//In ngày hôm qua và ngày mai của ngày cho trước
#include <iostream>

using namespace std;
int main()
{
	int day,dayc, month,monthc, year, check = 0, isLeapYear;
	int dayA, dayB, monthA, monthB, yearA, yearB;
	cout << "Nhap so lieu ngay thang nam" << endl;
	//Kiểm tra số liệu
	do {
		cout << "Ngay: "; cin >> day;
		if (day <= 0 || day > 31)
		{
			check = 1;
			cout << "Ngay khong hop le, vui long nhap lai!\n";
			continue;
		}
		cout << "Thang: "; cin >> month;
		if (month <= 0 || month > 12)
		{
			check = 1;
			cout << "Thang khong hop le, vui long nhap lai thang!\n";
			continue;
		}
		cout << "Nam: "; cin >> year;
		if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
			isLeapYear = 1;
		else isLeapYear = 0;
		if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
			dayc = 31;
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			dayc = 30;
		else {
			if (isLeapYear == 1)
				dayc = 29;
			else dayc = 28;
		}
		if (day <= 0 || day > dayc)
		{
			check = 1;
			cout << "Ngay khong hop le, vui long nhap lai!\n";
			continue;
		}
		check = 0;
	}
	while (check == 1);
	//Tìm ngày hôm qua
	if (day == 1 && month == 1)
	{
		dayB = 31;
		monthB = 12;
		yearB = year - 1;
	}
	else if (day == 1)
		{
			monthc = month - 1;
			if (monthc == 1 || monthc == 3 || monthc == 5 || monthc == 7 || monthc == 8 || monthc == 10 || monthc == 12)
				dayB = 31;
			else if (monthc == 4 || monthc == 6 || monthc == 9 || monthc == 11)
				dayB = 30;
			else {
				if (isLeapYear = 0)
					dayB = 29;
				else dayB = 28;
			}
			monthB = monthc;
			yearB = year;
		}
	else
	{
		dayB = day - 1;
		monthB = month;
		yearB = year;
	}
	//Tìm ngày mai
	if (day == 31 || month == 12)
	{
		dayA = 1;
		monthA = 1;
		yearA = year + 1;
	}
	else if (day == dayc)
	{
		dayA = 1;
		monthA = month + 1;
		yearA = year;
	}
	else {
		dayA = day + 1;
		monthA = month;
		yearA = year;
	}


	cout << "Ngay ke tiep cua ngay da nhap: " << dayA << "/" << monthA << "/" << yearA << endl;
	cout << "Ngay truoc cua ngay da cho: " << dayB << "/" << monthB << "/" << yearB << endl;
	system("pause");
	return 0;

}
