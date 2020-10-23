// Ya��zcem CENG�Z
// 170757058
// Bilgisayar M�hendisli�i
// Nesneye Y�nelik Programlama BIM - 104
// II. D�nem (2. yar�y�l)
// Proje3
// Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


#include <iostream>
using namespace std;
#include <string>


class Kitap
{
public:
	string getAd();
	string getYazar();
	string getTur();
	string getYayinevi();
	string getIsbnNo();
	int getSayfaSayisi();
	int getBaskiYili();
	int getBaskiSayisi();
	double getFiyat();
	void setAd(string);
	void setYazar(string);
	void setTur(string);
	void setYayinevi(string);
	void setIsbnNo(string);
	void setSayfaSayisi(int);
	void setBaskiYili(int);
	void setBaskiSayisi(int);
	void setFiyat(double);
	void bilgileriYazdir();
	void alinanBilgi();
	void guncellenenBilgiler();

private:
	string ad, yazar, tur, yayinevi, isbnNo;
	int sayfaSayisi, baskiYili, baskiSayisi;
	double fiyat;
};



