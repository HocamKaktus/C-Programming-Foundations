#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* copyString(char* source); //prototipleri tanımladık.
char* concetenate(char* str1,char* str2);
char* reverseString(char* source);
void printString(char* str);


int main(void) {
   char *metin1 = (char*)malloc(100*sizeof(char)); //malloc kullanarak metin ve metin2 için dinamik alan açtık.
   char *metin2 = (char*)malloc(100*sizeof(char));
   printf("İlk metni giriniz: "); //metinleri taradık.
   scanf("%s",metin1);
   printf("\nİkinci metni giriniz: ");
   scanf("%s",metin2);
   puts("");
  
   char *kopya = copyString(metin1); //Kopyalanmış metni pointera atayıp çıktısını aldık.
   printf("Kopyalanan metin: %s",kopya);
   puts("");


   char *birlestirilmis = concetenate(metin1,metin2); //Birleştirilmiş metni de aynı şekilde yaptık.
   printf("\bBirleştirilmiş metin: %s",birlestirilmis);
   puts("");


   char *ters = reverseString(metin2); //Tersi de öyle.
   printf("Tersine çevrilmiş metin: %s",ters);
   puts("");


   printf("Yazdırılmış metin: "); // Metni yazdırmak için yazılan fonksiyonla yazdırdık.
   printString(metin1);


   free(metin1); //mallocla ayrılmış alanı boşalttık.
   free(metin2);
   free(kopya);
   free(birlestirilmis);
   free(ters);
   return 0;//Programı bitirdik.
}


char* copyString(char* source) {//Kopyasını yapmak için yazılan fonksiyon.
   int uzunluk = strlen(source); //Uzunluk belirledik.
   char *yeni = (char*)malloc(uzunluk + 1); //Yeni bir dizi belirledik mallocla alan ayırdık.
   for(int i=0;i<uzunluk;i++) { //For döngüsüyle source dizisini yeni adlı diziye kopyaladık.


       yeni[i] = source[i];
  
}
return yeni; //Yeni adlı diziyi döndürdük.
}


char *concetenate(char* str1,char* str2) {//Birleştirmek için yazılan fonksiyon
   int len1 = strlen(str1);//Alınan stringlerin uzunluğunu aldık.
   int len2 = strlen(str2);
   char *yeni = (char*)malloc(strlen(str1)+strlen(str2)+1); //Mallocla bir dizi ayarladık.
   int k=0; //Yeni dizi için bir değer ayarladık.
   for(int i=0;i<len1;i++){//İlk stringdeki değerleri 0 dan başlayarak i ye kadar yeni diziye atadık.
       yeni[k] = str1[i];
       k++; //Her atamadan sonra k'yı arttırdık.
   }


   for(int i=0 ; i<len2 ; i++) {//aynı mantık burda 2.string için.
       yeni[k] = str2[i];
       k++;
   }
   return yeni;//yeni diziyi döndürdük.
}


char* reverseString(char* source) {//Tersini almak için yazılan fonksiyon
   int uzunluk = strlen(source);//Uzunluğunu aldık.
   char *yeni = (char*)malloc(uzunluk+1);//Mallocla yeni bir dizi ayarladık.


   for(int i=0;i<uzunluk;i++) {//For döngüsüyle source dizisinin sonundan başlayarak yeni dizinin başına doğru atadık.
       yeni[i] = source[uzunluk-1-i];//uzunluk-1-i ile son elemandan başlayarak atama yaptık.
   }
   return yeni;//Yeni diziyi döndürdük.
}


void printString(char* str) {//Yazdırmak için yazılan fonksiyon
   printf("%s",str);//Yazdırdık.
}