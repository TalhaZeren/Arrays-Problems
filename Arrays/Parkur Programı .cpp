#include<stdio.h>
#include<stdlib.h>																							
#include<math.h>
#include<time.h>
/*
bir araba yarýþ parkurunda 1'den  50'ye kadar numaralandýrýlmýþ 50 adet aydýnlatma lambasý bulunmaktadýr
 baþlangýçta bütün lambalar sönüktür 1'den  10 'a  kadar numaralandýrýlmýþ 10 adet araba tek tek ve sýra ile piste çýkarýlarak parkuru tamamlamaktadýrlar.
  Yani bir araba parkuru tamamladýktan sonra bir sonraki arama piste çýkmaktadýr
 Araba lambanýn önünden geçerken Eðer lambanýn numarasý arabanýn numarasýna tam olarak bölünüyorsa yanýk lamba sönmekte sönük lamba ise yanmaktadýr.
  Onuncu araba da parkuru tamamladýðýnda hangi lambanýn yanýk hangilerinin sönük olduðunu bulan programý örnek çalýþmaya uygun olarak bulalým.
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
