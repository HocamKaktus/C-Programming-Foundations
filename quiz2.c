#include <stdio.h>

int cift_say(int dizi[],int n) {
   int cift_adet=0; //çift sayı adedini 0 girdik saçma sapan sayı vermesin diye.
   for(int i=0 ; i<n ; ++i) {
       if(dizi[i] % 2 == 0) { //burda 2 ye bölünüp 0 veriyorsa çifttir diye yaptık.
           cift_adet++; // koşulsa sağlanıyorsa sayıyı 1 arttırdık.
       }
   }
   return cift_adet; //değeri döndürdük
}

int tek_say(int dizi[],int n) { //çift sayı fonksiyonu ile aynı mantıkta çalışır.
   int tek_adet=0;
   for(int i=0 ; i<n ; ++i) {
       if(dizi[i] % 2 !=0) {
           tek_adet++;
       }
   }
   return tek_adet;
}

void sirala(int dizi[],int n) { //burda diziyi sıralayacağız.
   int temp;
   for(int i=0 ; i<n ; ++i) {
       for(int j=i+1 ; j<n ; ++j) {
           if(dizi[i]> dizi[j]) { //burda i, j den bir büyük ve 0. ve 1. elemanları kontrol ediyor ve sırayla 1. 2. , 2. 3. tek tek kontrol ediyor.
               temp = dizi[i];
               dizi[i] = dizi[j];
               dizi[j] = temp;
           }
       }
   }
}

float ortalama(int dizi[],int n) { //burda dizinin elemanlarını toplayım boyutuna yani n e böldük.
   float toplam =0;
   for(int i=0 ; i<n ; ++i) { // dizideki sayıların toplamı
       toplam += dizi[i];
   }
   return toplam/n; // aritmetik değeri döndürdük
}

int main() {
   int boyut;
   printf("Dizinin boyutunu giriniz: ");
   scanf("%d",&boyut);
   if (boyut <= 0) {
       printf("Lütfen pozitif bir sayi giriniz!");
       return -1;
   }
   int dizi[boyut]; // diziyi tanımladık üstteki kodlarla beraber.

   for(int i=0 ; i<boyut ; ++i) { // kullanıcıdan dizideki sayıları aldık
       printf("Dizinin %d. elemanını giriniz: ",i+1);
       scanf("%d",&dizi[i]);
   }
   printf("Dizinin sıralanmamış hali: "); //diziyi sıralanmamış şekilde girdik
   for(int i=0; i<boyut; ++i) {
       printf("%d ",dizi[i]);
   }
   puts("");
   sirala(dizi,boyut); //diziyi sıraladık.
   printf("Küçükten büyüğe doğru sıralanmış dizi: "); // sıralanmış diziyi yazdırdık.
   for(int i=0 ; i<boyut ; ++i) {
       printf("%d ",dizi[i]);
   }
   puts("");
   printf("Çift sayı adedi: %d\n",cift_say(dizi,boyut)); //çift tek ve ortalamaları printf ile yazdırdık.
   printf("Tek sayı adedi: %d\n",tek_say(dizi,boyut));
   printf("Dizinin ortalamsı: %f",ortalama(dizi,boyut));
  
return 0;
}
