#include<stdio.h>										// Çeyrekler Arasý Ortalama
#include<stdlib.h>
#include<time.h>
#include<math.h>

float interQuartile(int ar[],int size){
	
	int i,j,ic,sc,c=0;
	float deger,toplam = 0;

		ic = size / 4;
		sc = (size*3)/4;
		for(i=ic;i<sc;i++){
			toplam += ar[i];
			c++;
		}
		deger = toplam/c;
		printf("%d Tane Sayi \n",c);
		
		return deger;
		
}

int main(){
	
int sayi,i,j,toplam=0,deger,yedek;
float ort;

printf("Dizinin Eleman Sayisini Giriniz : ");
scanf("%d",&sayi);

int a[sayi];

printf("Dizinin Elemanlarini giriniz : \n");

for(i=0;i<sayi;i++){
	scanf("%d",&a[i]);
}

printf("Sayilarin Sirasiz Hali :\n");

for(i=0;i<sayi;i++){
	printf("%d \t",a[i]);
}

printf("\n\n");

for(i=0;i<sayi;i++){
	
	for(j=0;j<sayi-1;j++){
		
			if(a[j]>a[j+1]){
			yedek = a[j];
			a[j] = a[j+1];
			a[j+1] = yedek;
		}
	}
}
printf("Sayilarin Sirali Hali : \n");

for(i=0;i<sayi;i++){
	printf("%d \t",a[i]);
}

printf("\n\n");

ort = interQuartile(a,sayi);

printf("\nDizinin ceyrekler ortalamsi : %.2f",ort);	
	return 0;
}
