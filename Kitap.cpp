// Yağızcem CENGİZ



#include "Kitap.h"
#include <iostream>
#include <string>
using namespace std;

//------------------------------------------
void Kitap::setAd(string a)
{
	ad = a;
}

string Kitap::getAd()
{
	return ad;
}
//------------------------------------------
void Kitap::setYazar(string y)
{
	yazar = y;
}

string Kitap::getYazar()
{
	return yazar;
}
//------------------------------------------
void Kitap::setTur(string t)
{
	tur = t;
}

string Kitap::getTur()
{
	return tur;
}
//------------------------------------------
void Kitap::setYayinevi(string yayin)
{
	yayinevi = yayin;
}

string Kitap::getYayinevi()
{
	return yayinevi;
}
//------------------------------------------
void Kitap::setIsbnNo(string isbn)
{
	isbnNo = isbn;
}

string Kitap::getIsbnNo()
{
	return isbnNo;
}
//------------------------------------------
void Kitap::setSayfaSayisi(int sayfa_sayisi)
{
	sayfaSayisi = sayfa_sayisi;
}

int Kitap::getSayfaSayisi()
{
	return sayfaSayisi;
}
//------------------------------------------
void Kitap::setBaskiYili(int baski_yili)
{
	baskiYili = baski_yili;
}

int Kitap::getBaskiYili()
{
	return baskiYili;
}
//------------------------------------------
void Kitap::setBaskiSayisi(int baski_sayisi)
{
	baskiSayisi = baski_sayisi;
}

int Kitap::getBaskiSayisi()
{
	return baskiSayisi;
}
//------------------------------------------
void Kitap::setFiyat(double kitap_fiyati)
{
	fiyat = kitap_fiyati;
}

double Kitap::getFiyat()
{
	return fiyat;
}
//------------------------------------------
void Kitap::alinanBilgi()
{

	string a, y, t, yE, iNo;
	int sS, bY, bS;
	double f;

	cout << "Kitap adini giriniz : ";
	getline(cin, a);
	setAd(a);
	cout << "\nKitabin yazarini giriniz : ";
	getline(cin, y);
	setYazar(y);
	cout << "\nKitabin turunu giriniz : ";
	getline(cin, t);
	setTur(t);
	cout << "\nKitabin Yayin Evini giriniz : ";
	getline(cin, yE);
	setYayinevi(yE);
	cout << "\nKitabin Isbn Numarasini giriniz : ";
	getline(cin, iNo);
	setIsbnNo(iNo);
	cout << "\nKitabin Sayfa Sayisini giriniz : ";
	cin >> sS;
	setSayfaSayisi(sS);
	cout << "\nKitabin Baski Yilini giriniz : ";
	cin >> bY;
	setBaskiYili(bY);
	cout << "\nKitabin Baski Sayisini giriniz : ";
	cin >> bS;
	setBaskiSayisi(bS);
	cout << "\nKitabin Fiyatini giriniz : ";
	cin >> f;
	setFiyat(f);
}
//------------------------------------------
void Kitap::bilgileriYazdir()
{

	cout << "\n\nKitap Hakkindaki Bilgiler : \n"
		<< "Ad : " << getAd() << "\n"
		<< "Yazar : " << getYazar() << "\n"
		<< "Tur : " << getTur() << "\n"
		<< "Yayin Evi : " << getYayinevi() << "\n"
		<< "Isbn Numarasi : " << getIsbnNo() << "\n"
		<< "Sayfa Sayisi : " << getSayfaSayisi() << "\n"
		<< "Baski Yili : " << getBaskiYili() << "\n"
		<< "Baski Sayisi : " << getBaskiSayisi() << "\n"
		<< "Fiyat : " << getFiyat() << "\n";
}
//------------------------------------------

void Kitap::guncellenenBilgiler()
{
	char cevap1, cevap2;
	string a, y, t, yE, iNo;
	int sS, bY, bS;
	double f;
	bool dongu = true;

	while (dongu)
	{
		cout << "\nDegistirmek istediginiz bilgi varsa e/E yoksa h/H ye basiniz : ";
		cin >> cevap1;

		if (cevap1 == 'e' || cevap1 == 'E')
		{
			cout << "\n\nHangi bilgiyi guncellemek istiyorsunuz ? \n"
				<< "Ad (1) : " << "\n"
				<< "Yazar (2) : " << "\n"
				<< "Tur (3) : " << "\n"
				<< "Yayin Evi (4) : " << "\n"
				<< "Isbn Numarasi (5) : " << "\n"
				<< "Sayfa Sayisi (6) : " << "\n"
				<< "Baski Yili (7) : " << "\n"
				<< "Baski Sayisi (8) : " << "\n"
				<< "Fiyat (9) : " << "\n"
				<< "Hepsi (0) : " << "\n";
			cin >> cevap2;
			cin.ignore();

			switch (cevap2)
			{
			case '1':
			{
				cout << "Kitabin yeni adini giriniz : ";
				getline(cin, a);
				setAd(a);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '2':
			{
				cout << "Yazar : ";
				getline(cin, y);
				setYazar(y);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '3':
			{
				cout << "Tur : ";
				getline(cin, t);
				setTur(t);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '4':
			{
				cout << "Yayin Evi : ";
				getline(cin, yE);
				setYayinevi(yE);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '5':
			{
				cout << "Isbn Numarasi : ";
				getline(cin, iNo);
				setIsbnNo(iNo);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '6':
			{
				cout << "Sayfa Sayisi : ";
				cin >> sS;
				setSayfaSayisi(sS);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '7':
			{
				cout << "Baski Yili : ";
				cin >> bY;
				setBaskiYili(bY);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '8':
			{
				cout << "Baski Sayisi : ";
				cin >> bS;
				setBaskiSayisi(bS);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '9':
			{
				cout << "Fiyat : ";
				cin >> f;
				setFiyat(f);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			case '0':
			{
				cout << "Kitap adini giriniz : ";
				getline(cin, a);
				setAd(a);
				cout << "\nKitabin yazarini giriniz : ";
				getline(cin, y);
				setYazar(y);
				cout << "\nKitabin turunu giriniz : ";
				getline(cin, t);
				setTur(t);
				cout << "\nKitabin Yayin Evini giriniz : ";
				getline(cin, yE);
				setYayinevi(yE);
				cout << "\nKitabin Isbn Numarasini giriniz : ";
				getline(cin, iNo);
				setIsbnNo(iNo);
				cout << "\nKitabin Sayfa Sayisini giriniz : ";
				cin >> sS;
				setSayfaSayisi(sS);
				cout << "\nKitabin Baski Yilini giriniz : ";
				cin >> bY;
				setBaskiYili(bY);
				cout << "\nKitabin Baski Sayisini giriniz : ";
				cin >> bS;
				setBaskiSayisi(bS);
				cout << "\nKitabin Fiyatini giriniz : ";
				cin >> f;
				setFiyat(f);
				cout << "\n\nBilgiler guncellendi ! Kitap bilgileri : \n";
				bilgileriYazdir();
				break;
			}

			default:
				cout << "\nGecersiz bir islem girdiniz.\n";
			}



		}
		if (cevap1 == 'h' || cevap1 == 'H')
		{
			cout << "Programdan cikildi.";
			dongu = false;
		}
	}

}



