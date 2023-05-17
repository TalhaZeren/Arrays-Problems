#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
int sayi,i,j,yedek,deger;

printf("Eleman sayisini giriniz : ");
scanf("%d",&sayi);

int a[sayi];

printf("\nElemanlari Giriniz : \n");

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

deger = ((sayi+1)*3)/4;

printf("Ucuncu Ceyrek Degeri(%d. siradaki) : %d ",deger,a[deger-1]);
	return 0;
}
