// Ya��zcem CENG�Z
// 170757058
// Bilgisayar M�hendisli�i
// Nesneye Y�nelik Programlama BIM - 104
// II. D�nem (2. yar�y�l)
// Proje3
// Dr. ��r. �yesi G�l�ah T�M�KL� �ZYER


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
		void kitaplariBastir();				// �stenilen fonksiyonlari yazdik.
		void kullaniciGirdisi();			//

	private:		
		Kitap kitaplar[10] = {};     // i�inde max 10 adet kitap bulunduracak kitaplar adli Kitap nesnesi olusturduk.


};


