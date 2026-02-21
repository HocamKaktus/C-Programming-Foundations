#include <stdio.h> //printf ve benzer fonksiyonlar için bu kütüphaneyi ekledik

int asalmı(int sayı1) { //asal sayıyı bulan fonksiyon.
   if (sayı1 <= 0) { // 0 ve negatif sayı kontrölü
       printf("%d asal değildir. (Asal sayılar 2'den başlar)\n", sayı1);
       return 0;
   }
   if (sayı1 == 1) { // 1 sayısı kontrölü
       printf("%d sayısı asal değildir. (Asallar 2'den başlar.) \n",sayı1);
   }
  
   for(int i = 2; i < sayı1; i++) { //i sayısını 2 olarak atayıp sayı1'e kadar bölme işlemi ve ona göre sonuç çıkarma yapılır.
       if (sayı1 % i == 0) {
           return 0; // Asal değil
       }
   }
   return 1; // Asal sayı
}

int basamak(int sayı) { // basamak sayısını bulan fonksiyon
   int basamak_sayısı=0;
   if (sayı <0) { // negatif sayı kontrölü
       printf("Pozitif sayı girmediğiniz için basamak sayısı hesaplanmadı.\n");
       return 1;
   } else if (sayı ==0) { // 0 kontrölü
       printf("Basamak sayısı 1'dir.\n");
       return 1;
   }
   else {
       while (sayı != 0) { // burda sayı 0 a eşit olana kadar sayıyı 10 a bölüp basamak sayısını 1 arttırırız.
           sayı /= 10;
           basamak_sayısı++;
       }

   }
   printf("Basamak sayısı %d\n" ,basamak_sayısı);
   return basamak_sayısı; // basamak sayısını döndürdük.
}


int main() {
   int sayı;
   printf("Lütfen pozitif bir sayı giriniz: "); // pozitif sayı istedik.
   scanf("%d",&sayı);
  
   basamak(sayı); // basamak bulma fonksiyonunu çağırdık.

   printf("asal olup olmadığının sonucu(1 ise asal, 0 ise asal değil.): %d",asalmı(sayı)); // asalmı sonucunu 1 ve 0 olarak aldığımız için bunu yazdırdık.
  
   return 0; // fonksiyonu bitir.
}
