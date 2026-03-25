#include <iostream>
using namespace std;
int main() {
	int sayi1, sayi2;
	int secim;
	cout << "1.sayiyi giriniz: "; 
	cin >> sayi1; 
	cout << "2.sayiyi giriniz: ";
	cin >> sayi2; 
	cout << "1-Toplama\n2-cikartma\n3-Carpma\n4-bolme";
	cin >> secim;
	if (secim == 1)
	cout << "Toplama secildi İki Sayinin Toplami:" << (sayi1 + sayi2);
	
	else if (secim == 2)
	{
		cout << "Cıkartma Secildi Sayi 1 Sayi 2 den su kadar buyuk:" << (sayi1 - sayi2);
	}
	else if (secim == 3)
	{
		cout << "Carpma Secildi:" << (sayi1 * sayi2);
	}
	else if (secim == 4)
	{
		cout << "Bölme Seçildi:" << (sayi1 / sayi2);
	}