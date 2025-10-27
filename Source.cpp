#include <iostream>

using namespace std;

bool chanVaLe(int a){
	return a%2==0;
}
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b){
	return a-b;
}

int tich(int a, int b);
  return a*b;
float thuong(int a, int b);
bool checksohoanthien(int n);
if (n <= 1) return false;

    int sum = 0;
    for (int i = 1; i <= n / 2; ++i) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}
int main()g
{
	int a,b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"userB";
	cout<<"Hieu la: "<<hieu(a,b);
	cout << "DAY LA CHUONG TRINH  THUC HANH GIT";
	cout<<"Nhap a:";
	cin>>a;
	cout << "Nhap b:";
	cin>>b;
	cout<<"USER A";
	cout<<"Tong: " <<tong(a,b) <<endl;
	cout<<"USER C";
	cout<<"Tich: "<<tich(a,b) <<endl;
	 int number;
    cout << "Nhap so can kiem tra: ";
    cin >> number;

    if (isPerfectNumber(number))
        cout << number << " la so hoan thien." << endl;
    else
        cout << number << " khong phai la so hoan thien." << endl;
	int x;
	cout<<"Nhap x: ";
	cin>>x;
	if(chanVaLe(x)){
		cout<<"x la chan";
	}else{
		cout <<"x la lẻ";
	}
	system("pause");
	return 0;
	}else{
		cout <<"x la lẻ";
	}
	system("pause");
	return 0;

}