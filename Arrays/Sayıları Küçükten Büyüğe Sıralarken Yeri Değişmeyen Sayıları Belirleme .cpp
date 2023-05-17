#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){

int yedek,sayi,i,j,toplam = 0,c=0;

printf("Eleman sayisini giriniz :");
scanf("%d",&sayi);

printf("\n\n");

int a[sayi];
int b[sayi];
b[sayi] == a[sayi];

printf("Sayilari giriniz : \n");
	for(i=0;i<sayi;i++){
		scanf("%d",&a[i]);
	}
	
for(i=0;i<sayi;i++){

b[i] = a[i];
}
	
printf("Karma : \n");

for(i=0;i<sayi;i++){
	printf("%d \t",a[i]);
}

printf("\n\n");

for(i=0;i<sayi;i++){
	
	for(j=0;j<sayi-1;j++){
		
		if(a[j] > a[j+1]){
			yedek = a[j];
			a[j] = a[j+1];
			a[j+1] = yedek;
		}
	}
}

printf("Sayilarin sirali hali :\n");

for(i = 0;i<sayi;i++){
	printf("%d \t",a[i]);	
}

printf("\n\n");

for(i=0;i<sayi;i++){
	if(a[i] == b[i]){
		c++;
	}
}
printf("\nYeri Degismeyenlerin sayisi :%d",c);
return 0;
}
