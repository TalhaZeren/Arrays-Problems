#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/*
bir basketbol tak�m�n�n ko�u 12 ki�ilik tak�m�n boylar�n� oyuncular bir k�sa ve bir uzun olacak �ekilde s�raya sokmak istemektedir.
bu i�lem i�in ilk iki s�raya tak�m�n en k�sas� ve en uzunu yerle�tirilir.Devam�nda ayn� �ekilde d���n�lerek
 geri kalanlar�n en k�sas� ve en uzunu yerle�tirilerek d�zenlemeye devam edilir.
  Klavyeden girilen boy uzunluklar�na g�re tak�m oyuncular�n� boylar�n� �rnek �al��maya uygun bir k�sa bir uzun olacak �ekilde d�zenleyen program� yazal�m
 programda boylar�n klavyeden girilmesi ve ekrana yazd�r�lmas� main fonksiyonunda boylar�n �zerine sokulma i�lemi 'birKisaBirUzun' ad�ndaki fonksiyonda ger�ekle�tirilmelidir
*/


float birKisaBirUzun(float boy[],int size){
int i,j;
float yedek;

for(i=0;i<size;i++){
	
	for(j=0;j<size-1;j++){
		
		if(boy[j]>boy[j+1]){
		yedek = boy[j];
		boy[j] = boy[j+1];
		boy[j+1] = yedek;
		
		}
		
	}
}
	printf("Siralanmis Hali : \n");
		for(i=0;i<size;i++){
		printf("%.2f \t",boy[i]);
	}
	printf("\n\n");
	}	// function end.
	
//			//			//			//
	int main(){
		
	int sayi;

	printf("Cift bir sayi giriniz : ");
	scanf("%d",&sayi);
	
	float boy[sayi],boy1[sayi];	
	int i,j;	
		
	printf("\nOyuncularin Boylarini Giriniz : \n");
	for(i=0;i<sayi;i++){
		scanf("%f",&boy[i]);
	}
	
	birKisaBirUzun(boy,sayi);
	
	printf("Bir Kisa Bir Uzun Olarak Siralanmis Hali :\n\n");
	for(i=0;i<6;i++){
		printf("%.2f %.2f\t",boy[i],boy[11-i]);
	}
	
	return 0;
	}
