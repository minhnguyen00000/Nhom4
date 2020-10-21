#include <iostream>
#include <random>
#include <cstdlib> 
#include <ctime> 
using namespace std;

int main()
{
	srand(time(NULL));
	int kq;
	int a = rand() % (100 - 1 + 1) + 1;
	cout << a;
	cout << endl;
	int b = rand() % (100 - 1 + 1) + 1;
	cout << b;
	cout << endl;
	int ketqua = a - b;
	cout << "\nMoi ban nhap ket qua cua tong 2 so : ";
	cin >> kq;
	if (ketqua == kq)
	{
		cout << "Nhap dung";
	}
	else
	{
		cout << "Ket qua sai a ";
	}
	return 0;
}