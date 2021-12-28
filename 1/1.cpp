#include<iostream>
#include<math.h>
using namespace std;
void nhap_mang(int a[], int& n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan tu [" << i << "] : "; cin >> a[i];
	}
}
void xuat_mang(int a[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}cout << "\n";
}
void xoa_phan_tu(int a[], int n, int x)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < x)
		{
			for (int j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
			i--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}cout << "\n";
}
int main()
{
	int n;
	int a[100];
	int x;
	cout << "nhap so phan tu cua mang 1 chieu: "; cin >> n;
	nhap_mang(a, n);
	xuat_mang(a, n);
	cout << "nhap x: "; cin >> x;
	xoa_phan_tu(a, n, x);
	xuat_mang(a, n);
	return 0;
}