#include<stdio.h>
#include<stdlib.h>																							
#include<math.h>
#include<time.h>
/*
bir araba yar�� parkurunda 1'den  50'ye kadar numaraland�r�lm�� 50 adet ayd�nlatma lambas� bulunmaktad�r
 ba�lang��ta b�t�n lambalar s�n�kt�r 1'den  10 'a  kadar numaraland�r�lm�� 10 adet araba tek tek ve s�ra ile piste ��kar�larak parkuru tamamlamaktad�rlar.
  Yani bir araba parkuru tamamlad�ktan sonra bir sonraki arama piste ��kmaktad�r
 Araba lamban�n �n�nden ge�erken E�er lamban�n numaras� araban�n numaras�na tam olarak b�l�n�yorsa yan�k lamba s�nmekte s�n�k lamba ise yanmaktad�r.
  Onuncu araba da parkuru tamamlad���nda hangi lamban�n yan�k hangilerinin s�n�k oldu�unu bulan program� �rnek �al��maya uygun olarak bulal�m.
  */
  
int main(){

int a[10] = {1,2,3,4,5,6,7,8,9,10};
int lamba,sonuc,son[50];
int sayac[50];
int i,j,b;

for(i=0;i<50;i++){	
son[i] = i+1;
sayac[i] =0;
}

for(i=0;i<10;i++){
	
	for(j=0;j<50;j++){
		if(son[j] % a[i] == 0){
			
			if(sayac[j] == 0){
				sayac[j] = 1;
			}
			else if(sayac[j] !=0){
				sayac[j] = 0;
			}
		}
	}
}

printf("\nSonuk Lambalar :\n");
for(b=0;b<50;b++){
	if(sayac[b] == 0 ){
	printf("%d \t",son[b]);
}
}

printf("\n\n");
printf("\nYanik Lambalar :\n");

for(b=0;b<50;b++){
	if(sayac[b] !=0 ){
	printf("%d \t",son[b]);
}	
}





	
	
	return 0;
}
