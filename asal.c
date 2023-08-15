#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
int sayi,sayac=0;;
printf("lutfen sayiyi giriniz:");
scanf("%d",&sayi);
int i; 
printf("%d sayisini bolen sayilar:",sayi);
for(i=1;i<=sayi;i++){
   
	if(sayi%i==0){
		
		printf("%d ",i);
		
	sayac++;	
	}
	
}
printf("\n");
if(sayac==2){
	printf("sayi asaldir");
}
else{
	printf("sayi asal degildir");
}
		
	
		
	

	
	
	return 0;
}
