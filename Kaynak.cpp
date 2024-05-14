// string = metin deðiþkeni oluþturma // int = sayýsal deðiþken oluþturma // char = karakter,harf (tek týrnak) // float = sayý( çift týrnak) // bool = true-false //
/*
#include <iostream> 
using namespace std;
int main()
{
	string isim = "Emre Atis";
	int yas = 20;
	char notOrtalamasi = 'A';
	float sayisalNotOrtalamasi = 3.25;
	int not1 = 70;
	int not2 = 80;
	bool sinavaGirdiMi = true;
	int sinavlarOrtalamasi = (not1 + not2) / 2;

	cout << "Ogrenci Adi/Soyadi: " << isim << endl;
	cout << "Ogrenci Yasi: " << yas << endl;
	cout << "Ogrenci Not ort: " << notOrtalamasi << endl;
	cout << "Sayisal Not Ort: " << sayisalNotOrtalamasi << endl;
	cout << "Sinav Durumu:" << sinavaGirdiMi << endl;
	cout << "Sinav Not Ortalamasi:" << sinavlarOrtalamasi << endl;

	return 0;

}
*/
// cout = kullanýcýya veri vermek için kullanýlýr. // cin = kullanýcýdan veri almak için kullanýlýr.  
/*
#include <iostream>
using namespace std;
int main()
{
	cout << "merhaba! " << endl;

	int en, boy, alan;

	cout << "dikdortgenin enini giriniz.";
	cin >> en;
	cout << endl;

	cout << "Lutfen dikdortgenin boyunu giriniz.";
	cin >> boy;
	cout << endl;

	alan = en * boy;
	cout << "Dikdortgenin alani = " << alan << "metrekaredir.";

	return 0;
}
*/
// pow = üs alma // floor = en yakýn küçük tam sayýya yuvarlama // ceil = en yakýn büyük tam sayýya yuvarlama // round = en yakýn tam sayýya yuvarlama  
/*
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int y;
	y = round(2.5);
	cout << y << endl;

	return 0;
}
*/
// if = sonuç doðruysa ... // else = sonuç yanlýþsa ... (þifre sorgusu)
/*
#include <iostream>
using namespace std;
int main() {
	// þifre belirleme:
	int sifre;
	cout << "Lutfen bir sifre belirleyiniz: ";
	cin >> sifre;
	cout << "Sifreniz belirlendi.. ";

	//þifre sorma:
	int kullaniciSifreDenemesi;
	cout << "Lutfen sifreyi giriniz: ";
	cin >> kullaniciSifreDenemesi;

	if (kullaniciSifreDenemesi == sifre)
		cout << "Sifre dogru !";
	else
		cout << "Sifre yanlis !";

	return 0;

}
*/
// if-else hesap makinesi uygulamasý yapýmý :
/*
#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2, secilenIslem, sonuc;
	cout << "Lutfen 1.sayiyi giriniz:";
	cin >> sayi1;
	cout << "Lutfen 2.sayiyi giriniz:";
	cin >> sayi2;

	cout << "Lutfen isleminizi seciniz (1:+ 2:- 3:* 4:/): ";
	cin >> secilenIslem;
	cout << endl;

	if (secilenIslem == 1)
	{
		sonuc = sayi1 + sayi2;
	}
	else if (secilenIslem == 2)
	{
		sonuc = sayi1 - sayi2;
	}
	else if (secilenIslem == 3)
	{
		sonuc = sayi1 * sayi2;
	}
	else if (secilenIslem == 4)
	{
		sonuc = sayi1 / sayi2;
	}
	else
	{
	cout << "Lutfen 1-4 arasinda bir sayi giriniz !";
	}
	cout << "Isleminizin sonucu = " << sonuc;

	return 0;
}
*/
// printf = Cde kullanýlan cout. // scanf = Cde kullanýlan cin. //  #define _CRT_SECURE_NO_WARNINGS = çalýþmalarý için.
/*
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {

	//int x = 5;
	//float y = 3.2;
	//cout << "Sayilar x: " << x << "ve y: " << y;
	//printf("Sayilar x: %d ve y: %.2f , x, y);

	//string metin = "Merhaba";
	//cout << metin;
	char metin[] = "Merhaba";
	//printf("Metin : %s", metin);
	//cout << metin;

	//cin >> x;
	//cout << x;

	//scanf("%d", &x);
	//printf(^%d", x);

}
*/
// mantýksal operatörler:
/*
#include <iostream>
using namespace std;
int main() {

	int sayi1, sayi2;

	cout << "1.sayi giriniz = ";
	cin >> sayi1;
	cout << "2.sayi giriniz = ";
	cin >> sayi2;

	if (sayi1 > 0 && sayi2 > 0)
	{
		cout << "Her iki sayiniz da pozitif !";
	}
	else if (sayi1 < 0 && sayi2 < 0)
	{
		cout << "Her iki sayiniz da negatif !";
	}
	else if (sayi1 < 0 || sayi2 < 0)
	{
		cout << "Sayilarinizdan biri negatif !";
	}
	
	int x = 0;
	if (x >= 0)
		cout << endl << "x sifira esit veya buyuk";

	return 0;
}
*/
// C++ örnek soru1:
// kullanýcýdan 3 tane tam sayý alýnýnz.
// bu üç tamsayýnýn en büyüðünü bulup ekrana yazdýrýnýz.
// bunlarý yaparken en az sayýda kod yazarak yapmaya çalýþýnýz.
/*
#include <iostream>
using namespace std;
int main() {
	
	int sayi1, sayi2, sayi3, sonuc;
	
	cout << "Lutfen 3 sayi giriniz: ";
	cin >> sayi1 >> sayi2 >> sayi3;
	cout << endl;

	if (sayi1 >= sayi2 && sayi1 >= sayi3)
	{
		sonuc = sayi1;
	}
	if (sayi2 >= sayi1 && sayi2 >= sayi3)
	{
		sonuc = sayi2;
	}
	else
	{
		sonuc = sayi3;
	}

	cout << "Girilen en buyuk sayi: " << sonuc;
	return 0;
}
*/
// C++ while döngüsü: "Doðru sonucu girene kadar döngü tekrar eder"
/*
#include <iostream>
using namespace std;
int main() {

	int index = 0;

	while (index <=4) {
		cout << "yasuo" << endl;
		index = index + 1;
	}

	cout << endl;
	return 0;
}
*/
// C++ örnek soru2:
// 1'den kullanýcýnýn girdiði sayýya kadar 7'nin katlarýný ekrana yazdýran bir kod yazýnýz.
/*
#include <iostream>
using namespace std;
int main() {

	int x = 1;
	int max;
	cout << "Lutfen max degerini giriniz: ";
	cin >> max;

	while (x < max) {
		if (x % 7 == 0) {
			cout << x << "  ";
		}
		x--;
	};

	cout << endl;
	return 0;
}
*/
// C++ do while döngüsü: "Sifre doðru girilene kadar tekrar ediyor"
/*
#include <iostream>
using namespace std;

int main() {

	string sifre = "1234";
	string girilenDeger;

	do {
		cout << "Lutfen sifreyi giriniz : ";
		cin >> girilenDeger;
	} while (sifre != girilenDeger);

	cout << "Hosgeldiniz";
	cout << endl;
	return 0;
}
*/
// C++ for döngüsü: "1'den 20'ye kadarsayýlarý ekrana yazdýran bir for loop yazalým:
/*
#include <iostream>
using namespace std;
int main() {
	
	for (int x = 1; x <= 10; x = 1) {
			cout << x << endl;
	}
	cout << endl;
	return 0;
}
*/
// C++ örnek soru3:
// kullanýcýnýn konsoldan girdiði sayýnýn faktöriyelini hesaplayan bir C++ programý yazýnýz.
/*
#include <iostream>
using namespace std;
int main() {

	int sayi;
	cout << "Lutfen sayiyi giriniz" << endl; 
	cin >> sayi;

	int sonuc = 1; // kullanýcýnýn girdiði faktöriyel

	for (int i = 1; i <= sayi; i++) {
		sonuc = sonuc * i;
	}

	cout << "Sonuc" << sonuc;
	cout << endl;
	return 0;
}
*/
// C++ örnek soru4:
/*
#include <iostream>
using namespace std;
int kod;
int main() {
	cout << "Basinc kodunu giriniz: ";
	cin >> kod;
	switch (kod) {
	case 8:
		cout << "Basinc Yuksek ; Sistemi kapat!" << endl; break; case 7:
		cout << "Sicakligi dusur ; Surekli kontrol et!" << endl; break;
		case 6:
		cout << "Dikkat ; Her 5 dakikada bir kontrol et!" << endl; break; default:
		cout << "Calisma kosullari normal." << endl; break;
	} return 0;
}
*/
// C++ örnek soru5: // #define emri sembolik deðiþmezlerin tanýmlanmasýný saðlar. // 
/*
#include <iostream> 
using namespace std;
int main() {
	int num;
	num = 100;
	cout << "sayi:" << num << endl;
	return 0;
}
*/
// C++ ders kodlarý 1:
/*
#include <iostream>
using namespace std;
int main() {
	cout << "Hello World!" << endl;
	cout << "I'm a C++ Program" << endl;

	return 0;
}
*/
// C++ ders kodlarý 2:
/*
#include <iostream>
using namespace std;
int main()
 {
	int i; // Deðiþken tanýmlama
	cout << "Bir sayi giriniz: ";
	cin >> i;
	i = (i + i);
	cout << "sonuc: " << i;
	return 0;
	
}
*/
// C++ ders kodlarý 3:
/*
// Deðiþkenler ile iþlem yapma.
#include <iostream>
using namespace std;
int main()
{
	// Deðiþken tanýmlama:
	int a, b;
	int sonuc;
	// Ýþlem:
	a = 5;
	b = 6;
	a = a + 5;
	sonuc = a - b;
	// Ekrana sonucu yazdýrýr:
	cout << sonuc;
	return 0;
}
*/
// C++ ders kodlarý 4:
/*
// Deðiþkenleri ilk kullanýma hazýrlama
#include <iostream>
using namespace std;
int main()
{
	int a = 5; // Ýlk deðeri = 5
	int b = 2; // Ýlk deðeri = 2
	int sonuc; // Ýlk deðeri þu an için belli deðil.
	a = a + 3;
	sonuc = a - b;
	cout << sonuc;
	return 0;
}
*/
// C++ ders kodlarý 5:
/*
// toplama.cpp
//Vize ve final notlarinindan geçme notunu hesaplama
#include <iostream>
#include <math.h>
using namespace std;
int main()
 {
	int vize, final, ort;
	vize = 100;
	final = 18;
	ort = vize * 0.4 + final * 0.6;
	cout << "Gecme notunuz: " << ort << endl;
	if (ort < 50) {
		cout << "Kaldiniz!" << endl;
	}
		if (ort >= 50) {
			cout << "Gectiniz!" << endl;
		}
	return 0;

}
*/
// C++ ders notlarý 6:
/*
// carpim.cpp
// x i bir arttýrýp y yi bir azaltýp çarptýk.
#include <iostream>
using namespace std;
int main()
 {
	int x = 5;
	int y = 10;
	cout << "x = " << x << endl;
	cout << "y = " << y << endl;
	cout << "++x * --y = " << ++x * --y;

}
*/
// C++ ders notlarý 7:
/*
// Islem belirleme
#include <iostream>
using namespace std;
int main()
{
	int a, b; // a:?, b:?
	a = 10; // a:10, b:?
	b = 4; // a:10, b:4
	a = b; // a:4, b:4
	b = 7; // a:4, b:7
	cout << "a:";
	cout << "a";
	cout << "b:";
	cout << "b";
	return 0;
}
*/
// C++ ders notlarý 8:
/*
// operators
#include <iostream>
using namespace std;
int main()
{
	int a, b = 3;
	a = b;
	a += 2;// a=a+2
	cout << a;
	return 0;
}
*/
// C++ ders notlarý 9:
/*
// Kosullu Islemler
#include <iostream>
using namespace std;
int main()
{
	int a, b, c;
	a = 2;
	b = 7;
	c = (a > b) ? a : b;
	cout << c;
	return 0;
}
*/
// C++ ders notlarý 10:
/*
// i/o (Giriþ/Çýkýþ) ornegi
#include <iostream>
using namespace std;
int main()
{
	int i;
	cout << "Lutfen tamsayi bir deger giriniz: ";
	cin >> i;
	cout << "Girdiginiz deger " << i;
	cout << " ve girdiginiz degerin iki kati: " << i * 2 << endl;
	return 0;
}
*/
// C++ ders notlarý 11:
/*
#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2, max;
	cout << "Iki sayi giriniz: ";
		cin >> sayi1 >> sayi2;
	if (sayi1 > sayi2) //ilk sayi ikincisinden buyuk mu kontrol et
	{
		max = sayi1; // eðer oyle ise maximum ilk sayidir
	}
	else
	{
		max = sayi2; // degilse maximum ikinci sayidir
	}
	cout << " bu sayilarin maximumu: " << max << endl;
	return 0;
}
*/
// C++ ders notlarý 12:
/*
#include <iostream>
using namespace std;
int main()
{
	int sayi1, sayi2, max;
	cout << "Iki sayi giriniz : ";
		cin >> sayi1 >> sayi2;
	max = sayi1;// default atama -maximum ilk sayýdýr
	if (sayi2 > max) // ikinci sayý ilkinden büyük mü kontrol et
	{
		max = sayi2; // eðer öyle ise maximumu güncelle,
		// deðilse hiçbirþey yapma
	}
	cout << "bu iki sayinin maximimumu: " << max << endl;
	return 0;
}
*/
// C++ ders notlarý 13:
/*
#include <iostream>
using namespace std;
int main() {
	int sicaklik;
	bool sicakmi = false;
	cout << "sicakligi giriniz : ";
	cin >> sicaklik;
	if (sicaklik > 35)
	{
		sicakmi = true;
		cout << "hava sicak" << endl;
	}
	else
		cout << "hava sicak degil" << endl;
	return 0;
}
*/
// C++ ders notlarý 14:
/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c, islem;
	a = 3;
	b = 4;
	c = -8;
	islem = a * b * c;
	if (islem == 10)
	{
		cout << "selam";
	}
	else {
		cout << "hoscakal";
	}
}
*/
// C++ ders notlarý 15:
/*
#include <iostream>
using namespace std;
int main() {
	int sayi, a, b;
	a = 1;                        
	b = 90;
	sayi = a * b;
	if (sayi >= 0 && sayi <= 100)
	{
		cout << "sayi aralik icinde" << endl;
	}
	else
	{
		cout << "sayi aralik disinda" << endl;
	}
	return 0;
}
*/
// C++ ders notlarý 16:
/*
#include <iostream>
using namespace std;
int main() {
	int sayi, a, b;
a = 9;
b = 12;
sayi = a * b;
	if (!(sayi >= 0 && sayi <= 100))
	{
		cout << "sayi aralik disinda";
	}
	else
	{
		cout << "sayi aralik icinde";
	}
	return 0;
}
*/
// C++ ders notlarý 17:
/*
#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, sayi;
	a = 20;
	b = 2;
	c = 3;
	sayi = a * b + c;
	if (sayi < 0 || sayi > 100)
	{
		cout << "sayi aralik disinda";
	}
	else
	{
		cout << "sayi aralik icinde";
	}
	return 0;
}
*/
// C++ ders notlarý 18:
/*
#include <iostream>
using namespace std;
int main() 
{
	int kosul1, kosul2, kosul3;
	kosul1 = 1 > 5;
	kosul2 = 20 > 30;
	kosul3 = 30 > 15;
	if (kosul1)
	{
		if (kosul2)
		{
			if (kosul3)
			{
				(kosul1, kosul2, kosul3 == true);
					cout << "Tum kosullar dogru";
			}
			else
			{
				(kosul1, kosul2 == true and kosul3 == false);
					cout << "Birinci ve ikinci kosul dogru, ucuncu kosul yanlis";
			}
		}
		else
		{
			(kosul1, kosul3 == true and kosul2 == false);
				cout << "Birinci ve ucuncu kosul dogru, ikinci kosul yanlis";
		}
	}
	else
	{
		(kosul1 == false);
			cout << "Birinci kosul yanlis oldugu icin diger kosullar da yanlis kabul edildi!";
		return 0;
	}
}
*/
// C++ ders notlarý 19:
/*
#include <iostream>
using namespace std;
int main()
{
	int puan, toplam;
	puan = 100;
	toplam = 2000;

	if (puan!= 0 && toplam / puan <= 60)
	{
	cout << "dusukortalama" << endl;
	}

	return 0;
}
*/
// C++ CHAT GPT ÖRNEKLERÝ 1:
/*
#include <iostream>
using namespace std;

int main() {
	int sayi1 = 5;
	int sayi2 = 3;
	int toplam = sayi1 + sayi2;

	cout << "Toplam: " << toplam << endl;
	return 0;
}
*/
// C++ CHAT GPT ÖRNEKLERÝ 2:
/*
#include <iostream>
using namespace std;

int main() {
	int yas = 20;

	if (yas >= 18) {
		cout << "Ehliyet alabilirsiniz." << endl;
	}
	else {
		cout << "Ehliyet alamazsýnýz." << endl;
	}

	return 0;
}
*/

// C++ CHAT GPT ÖRNEKLERÝ 3:
/*
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 5; ++i) {
		cout << "Dongu " << i + 1 << " kez calisti" << endl;
	}

	return 0;
}
*/
// C++ CHAT GPT ÖRNEKLERÝ 4:
/*
#include <iostream>
using namespace std;
int main() {
	int i = 0;
	while (i < 10) {
		cout << i << endl;
		i--;
	}
	return 0;
}
*/
/*
// WHILE DÖNGÜSÜ ÖRNEK 1:
#include <iostream>
using namespace std;

int main() {
	int toplam = 0;
	int sayi;

	cout << "Bir sayi girin (Bitirmek icin 0'a basin): ";
	cin >> sayi;

	while (sayi != 0) {
		toplam += sayi;
		cout << "Bir sayi girin (Bitirmek icin 0'a basin): ";
		cin >> sayi;
	}

	cout << "Girilen sayilarin toplami: " << toplam << endl;

	return 0;
}
*/
// WHILE DÖNGÜSÜ ÖRNEK 2:
/*
#include <iostream>
using namespace std;

int main() {
	int sayi, carpim = 1;

	cout << "Bir sayi girin: ";
	cin >> sayi;

	cout << "Carpim Tablosu " << sayi << ":\n";

	while (carpim <= 10) {
		cout << sayi << " x " << carpim << " = " << sayi * carpim << endl;
		carpim--;
	}

	return 0;
}
*/
// DO-WHILE DÖNGÜSÜ ÖRNEK 1:
/*
#include <iostream>
using namespace std;

int main() {
	int girilenSifre, dogruSifre = 1234;

	do {
		cout << "Sifreyi girin: ";
		cin >> girilenSifre;

		if (girilenSifre != dogruSifre) {
			cout << "Yanlis sifre! Tekrar deneyin." << endl;
		}
	} while (girilenSifre != dogruSifre);

	cout << "Dogru sifre girdiniz. Giris yapildi." << endl;

	return 0;
}
*/
// DO-WHILE DÖNGÜSÜ ÖRNEK 2:
/*
#include <iostream>
using namespace std;

int main() {
	int secim;

	do {
		cout << "1. Dosya Ac"<< endl;
		cout << "2. Dosya Kaydet" << endl;
		cout << "3. Cikis" << endl;
		cout << "Seciminizi yapin:" << endl;
		cin >> secim;

		switch (secim) {
		case 1:
			cout << "Dosya acildi." << endl;
			break;
		case 2:
			cout << "Dosya kaydedildi." << endl;
			break;
		case 3:
			cout << "Programdan cikis yapiliyor." << endl;
			break;
		default:
			cout << "Gecersiz secim! Tekrar deneyin." << endl;
			break;
		}
	} while (secim != 3);

	return 0;
}
*/
// FOR DÖNGÜSÜ ÖRNEK 1:
/*
// 1'den 10'a kadar sayýlarý alt alta yazan komut:
#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 10; i++) {
		cout << i << endl;
	}

	return 0;
}
*/
// FOR DÖNGÜSÜ ÖRNEK 2:
/*
// 1 ile 20 arasýndaki çift sayýlarýn toplamýný hesaplayan komut:
#include <iostream>
using namespace std;

int main() {
	int toplam = 0;

	for (int i = 2; i <= 20; i += 2) {
		toplam += i;
	} 
	cout << "1 ile 20 arasindaki cift sayilarin toplami: " << toplam << endl;

	return 0;
}
*/
// FOR DÖNGÜSÜ ÖRNEK 3:
/*
#include <iostream>
using namespace std;

int main() {
	int satir;

	cout << "Ucgen yuksekligi icin bir sayi girin: ";
	cin >> satir;

	for (int i = 1; i <= satir; i++) {
		for (int k = 1; k <= i; k++) {
			cout << " * ";
		}
		cout << endl;
	}

		return 0;
}
*/
// C++ ÖRNEK SORU 1:
/*
// deneme 
#include <iostream> 
using namespace std;
int main() {
	int a, b, c, sonuc, sayi;
	cout << "Bir sayi giriniz" << endl;
	cin >> sayi;
	a = 5;
	b = sayi + 2;
	c = a + 5;
	sonuc = a + b + c;
	sayi = sonuc * (a + b - c); 
	cout << "isleminizin sonucu" << sonuc << endl;
	cin >> sayi;
	
	if (a > b && c > a) {
		cout << "Yapilan islem gecersiz oldugu icin tekrar deneyiniz" << endl;
	}
	else {
		cout << "Yapilan islem dogru giris yapabilirsiniz" << endl;
		while (sonuc = a + b - c) {
			cout << "yapilan islem dogru" << endl;
			
			return 0;
		}
	}
	
}
*/
// C++ ÖRNEK SORU 2:
/*
#include <iostream>
using namespace std;
int main() {
	int numA, numB, numC, numD, numX;
	numA = 1;
	numB = 2;
	numC = 3;
	numD = 4;
	numX = 5;
	cout << "En buyuk sayiyi bulunuz:" << endl;
		if (numA > numB) {
			cout << "A sayisi B sayisinden buyuktur!" << endl;
		} 
		else {
			cout << "B sayisi A sayisindan buyuktur!" << endl;
		}
		if (numB > numC) {
			cout << "B sayisi C sayisindan buyuktur!" << endl;
		}
		else {
			cout << "C sayisi B sayisinden buyuktur!" << endl;
		}
		if (numC > numD) {
			cout << "C sayisi D sayisinden buyuktur!" << endl;
		}
		else {
			cout << "D sayisi C sayisinden buyuktur!" << endl;
		}
		cin >> numX;
	return 0;

}
*/
// C++ Türkçe Karakter Kullanma:
/*
#include <iostream>
using namespace std;
 int main() {
	 setlocale(LC_ALL, "Turkish");
	 cout << "Bugün Günlerden Salý" << endl;

	 return 0;
 }
 */
// C++ Break ve Continue Kullanýmý:		//	Break = Döngüyü Sonlandýrýr.
/*
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 20; i++) {
		if (i == 10) 
			break;
			cout << i << endl;
		}
			return 0;
}
*/
// C++ Break ve Continue Kullanýmý:	//	Continue = continuenin altýnda kalan kýsým atlanýr ve tekrar döngünün baþýna dönülür.
/*
#include <iostream>
using namespace std;
int main() {
	for (int i = 0; i < 20; i++) {
		if (i == 10)
			continue;
		cout << i << endl;
	}
	return 0;
}
*/
// C++ Nested For Loop
/*
#include <iostream>
using namespace std;
int main() {
	int sayi;
	cout << "Bir sayi giriniz:";
		cin >> sayi;
	for (int j = 1; j<= sayi; j++) {
		for (int i = 1; i <= j; i++) {
			cout << j << " ";
		}
		cout << endl;
	}
	cout << endl;
	return 0;
}
*/
// C++ Switch Kullanýmý:
/*
#include <iostream>
using namespace std;
int main() {
	int sayi;
	cout << "Lutfen 1 ile 5 arasinda bir sayi giriniz: ";
		cin >> sayi;

	switch (sayi)
	{
		case 1:
			cout << "Seciminiz 1" << endl;
			break;
		case 2:
			cout << "Seciminiz 2" << endl;
			break;
		case 3: 
			cout << "Seciminiz 3" << endl;
			break;
		case 4: 
			cout << "Seciminiz 4" << endl;
			break;
		case 5: 
			cout << "Seciminiz 5" << endl;
			break;
		
	default:
		cout << "1 ile 5 arasinda bir sayi girmediniz! " << endl;
		break;
	}
cout << endl;
	return 0;
}
*/
// C++	Arrays = Diziler:
/*
#include <iostream>
using namespace std;
int main() {

	float arr[5];
	arr[0] = 20.2;
	arr[1] = 33.4;
	arr[2] = 42.0;
	arr[3] = 39.8;
	arr[4] = 55;

	int dizi[] = {23, 34, 57};

	for (int i = 0; i < 3; i++) {
		cout << dizi[i] << endl;
	}
			
	cout << arr[2] << endl;
	return 0;
 }
 */
// C++ Dizi Örneði:
/*
#include <iostream>
using namespace std;
int main() {
	int a[5] = { 2,7,0,3,9 };
	for (int i = 0; i <= 4; i++)
		cout << "a(" << i << ")= " << a[i] << endl; int toplam = 0;
	for (int j = 0; j <= 4; j++) {
		toplam = toplam + a[j]; // toplam+=a(j) de olabilir
	}
	cout << "TOPLAM= " << toplam << endl;
	return 0;
}
*/
// Ödev 1:
/*
#include <iostream>
#include <cmath>

using namespace std;

void kuvvetleriHesapla() {
	int taban = 2;
	for (int i = 1; i <= 10; ++i) {
		int kuvvet = pow(taban, i);
		cout << "2 uzeri " << i << " = " << kuvvet << endl;
	}
}

int main() {
	kuvvetleriHesapla();
	return 0;
}
*/
// Ödev 2:
/*
#include <iostream>
#include <cmath>

using namespace std;

const double eulerNumber = 2.71828; // E sayýsýnýn yaklaþýk deðeri

void kuvvetleriHesapla() {
	for (int i = 1; i <= 10; ++i) {
		double kuvvet = pow(eulerNumber, i);
		cout << "e uzeri " << i << " = " << kuvvet << endl;
	}
}

int main() {
	kuvvetleriHesapla();
	return 0;
}
*/
// Ödev 3:
/*
#include <iostream>
#include <cmath>

using namespace std;

void karekokleriHesapla() {
	for (int i = 1; i <= 10; ++i) {
		double karekok = sqrt(i);
		cout << i << " sayisinin karekoku = " << karekok << endl;
	}
}

int main() {
	karekokleriHesapla();
	return 0;
}
*/
// Ödev 4:
/*
#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159;

int main() {
	double degerler[] = { 2 * pi, pi, pi / 2, pi / 3, pi / 4, 0 };

	for (int i = 0; i < 6; ++i) {
		double cosDegeri = cos(degerler[i]);
		cout << "cos(" << degerler[i] << ") = " << cosDegeri << endl;
	}

	return 0;
}
*/
// Ödev 5.1:
/*
#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159;

int main() {
	double degerler[] = { 2 * pi, pi, pi / 2, pi / 3, pi / 4, 0 };

	for (int i = 0; i < 6; ++i) {
		double sinDegeri = sin(degerler[i]);
		cout << "sin(" << degerler[i] << ") = " << sinDegeri << endl;
	}

	return 0;
}
*/
// Ödev 5.2:
/*
#include <iostream>
#include <cmath>

using namespace std;

const double pi = 3.14159;

int main() {
	double degerler[] = { 2 * pi, pi, pi / 2, pi / 3, pi / 4, 0 };

	for (int i = 0; i < 6; ++i) {
		double tanDegeri = tan(degerler[i]);
		cout << "tan(" << degerler[i] << ") = " << tanDegeri << endl;
	}

	return 0;
}
/*
// ÝTÜ C++ ders notlarý 1-
/*
#include <iostream>

int main()

{
	
	std::cout << "Welcome\nto\n\nC++\n";

	return 0;

}
*/
// ÝTÜ C++ ders notlarý 2-
/*
#include <iostream>

using std::cout;
using std::endl;

struct Time {
	int hour;
	int minute;
	int second;

};

void printMilitary(const Time&); 
void printStandard(const Time&);

int main()

{
	Time dinnerTime;

	dinnerTime.hour = 18;
	dinnerTime.minute = 30;
	dinnerTime.second = 0;

	cout << "Dinner will be held at";
	printMilitary(dinnerTime);
	cout << " military time, \nwhich is ";
	printStandard(dinnerTime);
	cout << "standard time.\n";

	dinnerTime.hour = 29;
	dinnerTime.minute = 73;

	cout << "\nTime with invalid values:";
	printMilitary(dinnerTime);
	cout << endl;
	return 0;
}

void printMilitary(const Time& t)
{
	cout << (t.hour < 10 ? "0" : "") << t.hour << ":"
		<< (t.minute < 10 ? "0" : "") << t.minute;
}

void printStandard(const Time& t)
{
	cout << ((t.hour == 0 || t.hour == 12) ?
		12 : t.hour % 12)
		<< ":" << (t.minute < 10 ? "0" : "") << t.minute
		<< ":" << (t.second < 10 ? "0" : "") << t.second;

}
*/
/*
#include <iostream>
#include <windows.h>
using namespace std;

int main() {

	for (int i = 1; i <= 10; i++) {

		cout << "Merhaba Dunya" << "\n";

	}
	for (int i = 0; i <= 10; i += 2) {

		cout << i << endl;

	}
	for (int j = 100; j >= 1; j -= 2) {

		cout << j << endl;
		Sleep(600);
	}
	for (int j = 0; j <= 100; j += 2) {

		cout << j << endl;
		Sleep(200);
	}

}

/*
class Zaman {
	int saat;
	int dakika;
	int saniye;
	/**
	* Her çaðrýldýðýnda nesneyi bir saniye sonrasýna götüren yöntem.
	* saniye 59, dakika 59, saat ise 23'ten büyük olamaz.
	
	void ilerle() {
		saniye++;
		if (saniye == 60) {
			saniye = 0;
			dakika++;
			if (dakika == 60) {
				dakika = 0;
				saat++;
				if (saat == 24) {
					saat = 0;
				}
			}
		}
	}
}
*/

