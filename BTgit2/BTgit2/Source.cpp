#include <stdio.h>
#include <iostream>
#define pi 3.1415
using namespace std;

int main()
{
	int a, b,c;
	cout << "-----------Tinh DT HCN----------\n";
	cout << "nhap vao 2 canh a, b: ";
	cin >> a >> b;
	cout << "Dien tich hcn : " << a * b;

	cout << "\n--------------Tinh chu vi HCN-------\n";
	cout << "chu vi hcn : " << (a + b)*2;

	cout << "\n-----------Tinh DT HV----------\n";
	cout << "nhap vao 2 canh c ";
	cin >> c;
	cout << "Dien tich hinh vuong : " << c * c;

	cout << "\n--------------Tinh chu vi HV-------\n";
	cout << "chu vi hv : " << c*4;

	cout << "\n-----------Tinh DT HT----------\n";
	float r;
	cout << "nhap vao ban kinh r = ";
	cin >> r;
	cout << "dien tic hinh tron la : " << r * r*pi;

	cout << "\n--------------Tinh chu vi HT-------\n";
	cout << "chu vi ht : " << 2*r*pi;

	return 0;
}