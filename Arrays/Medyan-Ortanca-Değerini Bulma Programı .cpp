#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
int i,b,j,c = 0,toplam = 0;
int yedek,sayi;
float ortanca;

printf("Eleman sayisini giriniz :");
scanf("%d",&sayi);
printf("\n\n");

int array[sayi];
printf("Elemanlari giriniz :\n");

for(i=0;i<sayi;i++){
	scanf("%d",&array[i]);
	toplam += array[i];
}

printf("Sayilarin Sirasiz Hali :\n");

for(i=0;i<sayi;i++){
	printf("%d \t",array[i]);
}

printf("\n\n");

for(i=0;i<sayi;i++){
	
	for(j=0;j<sayi-1;j++){
		
		if(array[j] > array[j+1]){
			yedek = array[j];
			array[j] = array[j+1];
			array[j+1] = yedek;
		}
	}
}

printf("Sayilarin sirali hali :\n");

for(i = 0;i<sayi;i++){
	printf("%d \t",array[i]);	
}

printf("\n\n");

	if(sayi % 2 == 0){
	ortanca = (array[sayi/2] + array[(sayi + 2)/2])/2;
	}
	else if(sayi % 2 !=0){
	ortanca = array[sayi/2]; 
	}	

printf("Ortanca : %.2f",ortanca);

	return 0;
}
