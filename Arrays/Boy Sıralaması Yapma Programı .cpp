#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

/*
bir basketbol takýmýnýn koçu 12 kiþilik takýmýn boylarýný oyuncular bir kýsa ve bir uzun olacak þekilde sýraya sokmak istemektedir.
bu iþlem için ilk iki sýraya takýmýn en kýsasý ve en uzunu yerleþtirilir.Devamýnda ayný þekilde düþünülerek
 geri kalanlarýn en kýsasý ve en uzunu yerleþtirilerek düzenlemeye devam edilir.
  Klavyeden girilen boy uzunluklarýna göre takým oyuncularýný boylarýný örnek çalýþmaya uygun bir kýsa bir uzun olacak þekilde düzenleyen programý yazalým
 programda boylarýn klavyeden girilmesi ve ekrana yazdýrýlmasý main fonksiyonunda boylarýn üzerine sokulma iþlemi 'birKisaBirUzun' adýndaki fonksiyonda gerçekleþtirilmelidir
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
