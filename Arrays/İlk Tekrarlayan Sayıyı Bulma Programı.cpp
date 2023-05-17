#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

int found(int array[],int size){

int i,j,a;
	
for(i=0;i<7;i++){
	a = i;
	
	for(j=1;j<7;j++){
		
		if(array[i] == array[a+1]){
			return array[i];
		}
		a++;
	}
}
return -1;
}

int main(){
	
int c,i,j;
int array[7] = {3,12,4,5,7,8,8};	

printf("Sayilari Giriniz :\n");	
c = found(array,7);

printf("Dizinin ilk tekrarlayani : %d",c);
	return 0;
}


