// Yaðýzcem CENGÝZ
// 170757058
// Bilgisayar Mühendisliði
// Nesneye Yönelik Programlama BIM - 104
// II. Dönem (2. yarýyýl)
// Proje3
// Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER


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



