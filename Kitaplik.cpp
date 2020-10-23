// Ya��zcem CENG�Z
// 170757058
// Bilgisayar M�hendisli�i
// Nesneye Y�nelik Programlama BIM - 104
// II. D�nem (2. yar�y�l)
// Proje3
// Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


#include "Kitaplik.h"
#include <iostream>
#include <string>
using namespace std;


void Kitaplik::kitapEkle(Kitap kitap)
{
	kitaplar[kitapSayisi] = kitap;        //Kullanicinin girdigi kitaplari KitapSayisi olarak array i�ine yazd�k ve kitap nesnesine e�itledik.
	kitapSayisi++;      // Kullanici kitap girdikce , kitab� 1 artt�racak
}

int Kitaplik::kacKitap()
{
	return kitapSayisi;     // Kitap sayisini d�nd�ren fonksiyon
}

void Kitaplik::kitaplariBastir()
{
	for (int i = 0; i < kitapSayisi; i++)     // For d�ng�s�yle , kullanicin girdi�i kitaplar�n bilgilerini yazd�r�yoruz.
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
	Kitap k;                // Kitap.h'daki fonksiyonu �ekmek i�in k nesnesi olu�turduk.
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
		switch (cevap)          // kullanicinin verdigi cevaba yonelik sonu�lar..
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
				dongu = false;   // kullanici 'D' ye basarsa dongu = false oluyor. Yani While dongusunden ��k�yor , program bitiyor.
				break;
			}

			default:
				cout << "\nGecersiz bir harf girdiniz.\n\n";
			
			
				

		}
	}

}
