int USCLN(int a, int b)
{

}
void hello()
{
	
	cout<<"Hello";
}
int kiemTraSoChinhPhuong(int n)
{
	int i = 0;
	while (i*i<n) ++i;
	return (i*i == n);
}
int soNguyenTo(int soA)
{
	if (soA < 2)
		return 0;

	for (int i = 2; i <= sqrt((float)soA); i++)
	{
		if (soA%i == 0)
		{
			return 0;
		}
	}
	return 1;
}