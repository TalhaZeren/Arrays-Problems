#include<stdio.h>

int main(){
	
float dizi[10];
float ort,adet = 0;

printf("10 tane degeri girin");

for(int i=0;i<10;i++){
	scanf("%f",&dizi[i]);
	adet += dizi[i];
}	

ort = adet / 10;  	

printf("\n%.2f\n",ort);

for(int i=0;i<10;i++){
	
	if(dizi[i]>ort){
		printf("a'nin(Ortalamasi buyuk olanlarin) elemani : %.2f \n",dizi[i]);
	}
}

for(int i=0;i<10;i++){
	
		if(dizi[i]<ort){
		printf("b'nin (Ortalamasi kucuk olanlarin) elemani : %.2f\n",dizi[i]);
	}
	
}
	return 0 ;
}
