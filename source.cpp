int USCLN(int a, int b)
{
   while(a * b != 0)
   {
	   if(a>b) {
	   a %= b;}
	   else {
		   b %= a ;
	   }
   }
   return a + b;
}
void hello()
{
	
	cout<<"Hello";
}
int tru(int a, int b)
{
	cout << "Nhap a,b :" ;
	cin >> a,b ;
	cout<< a-b;
int cong(int a, int b)
{
   cout << "Nhap a,b :" ;
	cin >> a,b ;
	cout<< a+b;
}
int nhan(int a, int b)
{
	cout << "Nhap a,b :" ;
	cin >> a,b ;
	cout<< a*b;
}