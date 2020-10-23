// Yaðýzcem CENGÝZ
// 170757058
// Bilgisayar Mühendisliði
// Nesneye Yönelik Programlama BIM - 104
// II. Dönem (2. yarýyýl)
// Proje3
// Dr. Öðr. Üyesi Gülþah TÜMÜKLÜ ÖZYER


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
		void kitaplariBastir();				// Ýstenilen fonksiyonlari yazdik.
		void kullaniciGirdisi();			//

	private:		
		Kitap kitaplar[10] = {};     // içinde max 10 adet kitap bulunduracak kitaplar adli Kitap nesnesi olusturduk.


};


