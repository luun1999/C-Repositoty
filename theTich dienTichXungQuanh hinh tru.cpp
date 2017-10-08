#include <iostream>
using namespace std;
#define PI 3.14
int main()
{
	
	float r, h, sDay, sXungQuanh, v;
	cout << "Nhap vao ban kinh cua hinh tru: "; cin >> r;
	cout << "Nhap vao chieu cao h cua hinh tru: "; cin >> h;
	
	sDay = PI*r*r;
	sXungQuanh = 2 * r*PI*h;
	v = sDay*h;
	
	cout << "Dien tich day hinh tru la: " << sDay << endl;
	cout << "Dien tich xung quanh hinh tru la: " << sXungQuanh << endl;
	cout << "The tich cua hinh tru la: " << v << endl;
	system("pause");
	return 0;

}