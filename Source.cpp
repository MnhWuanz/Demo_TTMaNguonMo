#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b);
int tich(int a, int b);
float thuong(int a, int b);
int main()
{
	cout << "DAY LA CHUONG TRINH  THUC HANH GIT";
	cout<<"Nhap a:";
	cin>>a;
	cout << "Nhap b:";
	cin>>b;
	cout<<"USER A";
	cout<<"Tong: " <<tong(a,b) <<endl;
	system("pause");
	return 0;
}