#include<iostream>
#include<conio.h>

using namespace std;

int factorial(int n);
double power(int a, int n);
void fibonacci(long long int n, long long int a=0, long long int b=1);

//#define FACTORIAL
//#define POWER

#ifdef FACTORIAL
void main()
{
	setlocale(LC_ALL, "ru");
	int n;
	cin >> n;
	cout << "��������� " <<n <<" = " << factorial(n);

}

int factorial(int n)
{
	/*if (n == 0)
		return 1;
	else
	return  factorial(n - 1) * n;*/
	return n == 0 ? 1 : n * (factorial(n - 1));
};
#endif FACTORIAL
#ifdef POWER
void main()
{
	setlocale(LC_ALL, "ru");
	int a, n;
	cout << "������� �����: \n";
	cin >> a;
	cout << "������� �������: \n";
	cin >> n;
	cout << "������� " << n << " ����� " << a << "  "<<power(a, n);
}

double power(int a, int n)
{
	//if (n == 0) return 1;
	//else if (n > 0) 
	//	return power(a, n - 1) * a;
	//else 
	//	return 1/power(a, -n);//������ ���� �� ������������� � ��������� ������� ������� � ���������
	return n == 0 ? 1 : n > 0 ? a * power (a, n - 1) : 1 / power (a, -n);
}
#endif POWER

int main()
{
	setlocale(LC_ALL, "ru");
	long long int n;
	cout << "������� ���������� �����: \n";	cin >> n;
	fibonacci(n);
}


void fibonacci(long long int n, long long int a, long long int b)
{
	if (a > n) return;
	cout << a << "\n";
	fibonacci(n, b, a + b);


}

