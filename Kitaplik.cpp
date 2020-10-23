// Yağızcem CENGİZ



#include "Kitaplik.h"
#include <iostream>
#include <string>
using namespace std;


void Kitaplik::kitapEkle(Kitap kitap)
{
	kitaplar[kitapSayisi] = kitap;        //Kullanicinin girdigi kitaplari KitapSayisi olarak array içine yazdık ve kitap nesnesine eşitledik.
	kitapSayisi++;      // Kullanici kitap girdikce , kitabı 1 arttıracak
}

int Kitaplik::kacKitap()
{
	return kitapSayisi;     // Kitap sayisini döndüren fonksiyon
}

void Kitaplik::kitaplariBastir()
{
	for (int i = 0; i < kitapSayisi; i++)     // For döngüsüyle , kullanicin girdiği kitapların bilgilerini yazdırıyoruz.
	{
		cout << "\n" << i + 1  << "." <<" Kitap Hakkindaki Bilgiler : \n"
			<< "Ad : " << kitaplar[i].getAd() << "\n"
			<< "Yazar : " << kitaplar[i].getYazar() << "\n"
			<< "Tur : " << kitaplar[i].getTur() << "\n"
			<< "Yayin Evi : " << kitaplar[i].getYayinevi() << "\n"
			<< "Isbn Numarasi : " << kitaplar[i].getIsbnNo() << "\n"
			<< "Sayfa Sayisi : " << kitaplar[i].getSayfaSayisi() << "\n"
			<< "Baski Yili : " << kitaplar[i].getBaskiYili() << "\n"
			<< "Baski Sayisi : " << kitaplar[i].getBaskiSayisi() << "\n"
			<< "Fiyat : " << kitaplar[i].getFiyat() << "\n\n";
	}
}

void Kitaplik::kullaniciGirdisi()
{                                  
	Kitap k;                // Kitap.h'daki fonksiyonu çekmek için k nesnesi oluşturduk.
	bool dongu = true;
	char cevap;                // kullanicidan 'A' 'B' 'C' 'D' gibi bilgiler almak icin cevap degiskeni olusturduk.

	while (dongu)
	{
		cout << "Kitap eklemek icin 'A' \n"
			<< "Kac kitap oldugunu ogrenmek icin 'B' \n"
			<< "Tum kitaplara ait bilgileri goruntulemek icin 'C' giriniz : \n"
			<< "Cikmak icin 'D' giriniz : \n";
		cin >> cevap;
		cin.ignore();
		switch (cevap)          // kullanicinin verdigi cevaba yonelik sonuçlar..
		{
			case 'A':
			{
				k.alinanBilgi();
				kitapEkle(k);
				break;
			}
			case 'B':
			{	
				cout << "\n" << "Kitaplikta " << kacKitap() << " adet kitap bulunuyor." << "\n\n";
				break;
			}

			case 'C':
			{
				if (kitapSayisi == 0)
					cout << "\n\nBilgilerini goruntuleyecegimiz kitap yok !\n\n";

				kitaplariBastir();
				break;
			}

			case 'D':
			{
				cout << "\nProgramdan cikis yaptiniz.";
				dongu = false;   // kullanici 'D' ye basarsa dongu = false oluyor. Yani While dongusunden çıkıyor , program bitiyor.
				break;
			}

			default:
				cout << "\nGecersiz bir harf girdiniz.\n\n";
			
			
				

		}
	}

}
