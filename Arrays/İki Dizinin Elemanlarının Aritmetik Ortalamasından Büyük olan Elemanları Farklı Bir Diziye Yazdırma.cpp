#include<stdio.h>

int main(){
	
float a[5],b[5];	
float c,adeta =0,adetb =0,ort;

printf("a dizisini girin :");	

for(int i =0;i<5;i++){
	scanf("%f",&a[i]);
	adeta += a[i];
}

printf("b dizisini girin :");

for(int i =0;i<5;i++){
	scanf("%f",&b[i]);
	adetb += b[i];
}	

ort = (adeta+adetb)/10;

printf("\n%.2f\n",ort);

for(int i=0;i<5;i++){
	
	if(ort<=a[i]){
		printf("%.2f\t",a[i]);
		
	}
}

for(int i=0;i<5;i++){
	
	if(ort<=b[i]){
		printf("%.2f\t",b[i]);
		
	}
}	
	return 0;
}
