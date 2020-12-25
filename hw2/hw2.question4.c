#include<stdio.h>


/*bıgoh(n^2) */



int main(){


	/* tanımlamalar */
		
	int task;
	scanf("%d",&task);
	int array[task][3];
	
	int count=0;
	int control=0;
	int control2=0;
	int y=0;
	int x=0;
	int a=0;
	
	int i,j,z;
	
  	int min=99;
 	int minj;
 	int mina;
 	int son;	
	
	
	for(i=0;i<task;i++){      /* kullanıcdan değerleri alma */
	
		for(j=0;j<3;j++){
				
			scanf("%d",&z);
			
			array[i][j]=z;
		
		}
	}
	
	
	for(i=0;i<task;i++){     /*kaç tane tekrarlayan sayı olduğunu bulma */
		
		for(j=0;j<task;j++){
			
			if(array[i][1]==array[j][1]&&i!=j){
			
				count++;
			
			}
		}
	}
	
	count=count/2;
	int array2[task-count];
	


	/* işlemlerin oldugu bölüm */
 
	for(i=1;i<task;i++){
		
		for(j=0;j<task;j++){
			
			if(array[j][1]<=i&&array[j][1]>i-1){	/* bu if deadline kontrol ediyor ve en küçükten başlatıyor */
				
				x=array[j][2];	/*eğer eşleşme olursa profiti tutuyor */
		
				}
				
			if(x>y){						/*eğer iki tane deadline aynı olan varsa profitleri kontrol etme id task alma ve profit ayarlama hepsi bu if te */
				
				y=x;
				control=1;
				control2++;
				
					if(control2>1){			/* eğerki 2 tane aynı deadline varsa ve daha önceden profit için yer değiştirme olacaksa bu saglıyor */
						
						array2[mina]=son;
					
					}
				
				
				array2[a]=array[j][0];  	/* task id leri tutma */
			
				
					if(array[j][2]<min){	/*en düşük profiti ve konumu tutma */
						
						min=array[j][2];
						mina=a;		
					
					}
				
				son=array[j][0];			/* 2 tane eşit deadline olan var ve  profit için düşük olanın daha önce birisi ile yerdegiştimesinde ihityac halinde yer için tanımlanır*/
				
			}	
			
		}
		
		
			if(control==1){
			
				a++;
			}
		
		control=0;
		control2=0;
		y=0;
		x=0;
		
	}
	
	
	
	
	for(i=0;i<task-count;i++){			/* outputu bastırma */
		
		printf("%d ",array2[i]);
	
	}
	
	
	
	
	
	


return 0;
}

