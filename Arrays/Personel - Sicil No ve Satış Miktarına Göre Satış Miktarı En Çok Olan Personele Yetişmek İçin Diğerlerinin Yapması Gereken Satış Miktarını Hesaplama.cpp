#include<stdio.h>													// Personel / sicil no / satýþ miktarý
#include<stdlib.h>
#include<math.h>
#include<time.h>

int main(){
	
int sayi,sicilno[50],satis[50];
int sonuc,i,enbuyuk,j;

printf("Personel Sayisini Giriniz :");
scanf("%d",&sayi);

	printf("\nSicil No Giriniz (Personel Sayisi Kadar) :\n");
	
for(i = 0;i<sayi;i++){
	printf("\n%d. Personelin Sicili ve Satis Sayisi:",i+1);
	scanf("%d %d",&sicilno[i],&satis[i]);	
}

enbuyuk = satis[0];

for(i=0;i<sayi;i++){
	
	for(j=0;j<sayi-1;j++){
		
		if(satis[i]<satis[j+1]){
			enbuyuk = satis[j+1];
		}
	}
}

printf("\nDiger Personellerin Diger Saticiya Yetisebilmeleri Icin;\n\n");

for(i=0;i<sayi;i++){
printf("%d. Personel yani %d Sicil No lu Satici, %d tane daha daha satis yapmalidir\n",i+1,sicilno[i],enbuyuk - satis[i]);
}
	
	return 0;
}
