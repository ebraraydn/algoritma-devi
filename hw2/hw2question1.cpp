#include<stdio.h>
 
 
 /*bigoh(n^2) */

int main(){
	
	int dizi[1000];
	int i,j;
	int a=0;
	int b=0;
	int lasti=0;
	int lastj=0;
	int flag=1;
	int number;
	int average=0;
	int x=0;

	/*kullanıcıdan sayıların alınması arraya atılması ortalamanın bulunması */
	while(scanf("%d",&number)!=EOF){
	
	dizi[x]=number;
	average=average+number;
	x++;	
	
	}
	
	
	average=average/2;
	
	/*arrayin çift boyutlu matrise çevrilmesi */
	int dizi2[x][x];
	
	for(i=0;i<x;i++){
		for(j=0;j<x;j++){
			
			dizi2[i][j]=dizi[j];
			if(i>j){
				dizi2[i][j]=0;
			}
		}
	}
	
/* sayıların tek tek denenmesi ve bulması */
	for(i=0;i<10;i++){
		
		a=0;
		
		for(j=0;j<10;j++){
			
			a=a+dizi2[i][j];
			
			if(a==average){
				
				lasti=i;/*i ve j nin son indislerinin tutulması */
				lastj=j;
				flag=0;
				break;
				}
			
			}
				
		if(flag==0){
			break;
				   }
			
		}
	
	/* bastırma */
	
	for(j=lasti;j<=lastj;j++){
	printf("%d ",dizi2[i][j]);
	}
	
	printf("\n");
	
	for(i=0;i<x;i++){
		
		if(i<lasti||i>lastj){
		printf("%d ",dizi2[0][i]);
	}
	}

	return 0;
}
