// Yağızcem CENGİZ



#include "Kitap.h"        // Kitap classini dahil ettik
#include <iostream>
#include <string>
using namespace std;

class Kitaplik
{
	public:	
		int kitapSayisi = 0;				// Kitap sayisini en basta 0'a esitliyoruz.
		void kitapEkle(Kitap kitap);		// 
		int kacKitap();						//
		void kitaplariBastir();				// İstenilen fonksiyonlari yazdik.
		void kullaniciGirdisi();			//

	private:		
		Kitap kitaplar[10] = {};     // içinde max 10 adet kitap bulunduracak kitaplar adli Kitap nesnesi olusturduk.


};


