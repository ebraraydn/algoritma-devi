#include<stdio.h>


/*b�goh(n^2) */



int main(){


	/* tan�mlamalar */
		
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
	
	
	for(i=0;i<task;i++){      /* kullan�cdan de�erleri alma */
	
		for(j=0;j<3;j++){
				
			scanf("%d",&z);
			
			array[i][j]=z;
		
		}
	}
	
	
	for(i=0;i<task;i++){     /*ka� tane tekrarlayan say� oldu�unu bulma */
		
		for(j=0;j<task;j++){
			
			if(array[i][1]==array[j][1]&&i!=j){
			
				count++;
			
			}
		}
	}
	
	count=count/2;
	int array2[task-count];
	


	/* i�lemlerin oldugu b�l�m */
 
	for(i=1;i<task;i++){
		
		for(j=0;j<task;j++){
			
			if(array[j][1]<=i&&array[j][1]>i-1){	/* bu if deadline kontrol ediyor ve en k���kten ba�lat�yor */
				
				x=array[j][2];	/*e�er e�le�me olursa profiti tutuyor */
		
				}
				
			if(x>y){						/*e�er iki tane deadline ayn� olan varsa profitleri kontrol etme id task alma ve profit ayarlama hepsi bu if te */
				
				y=x;
				control=1;
				control2++;
				
					if(control2>1){			/* e�erki 2 tane ayn� deadline varsa ve daha �nceden profit i�in yer de�i�tirme olacaksa bu sagl�yor */
						
						array2[mina]=son;
					
					}
				
				
				array2[a]=array[j][0];  	/* task id leri tutma */
			
				
					if(array[j][2]<min){	/*en d���k profiti ve konumu tutma */
						
						min=array[j][2];
						mina=a;		
					
					}
				
				son=array[j][0];			/* 2 tane e�it deadline olan var ve  profit i�in d���k olan�n daha �nce birisi ile yerdegi�timesinde ihityac halinde yer i�in tan�mlan�r*/
				
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
	
	
	
	
	for(i=0;i<task-count;i++){			/* outputu bast�rma */
		
		printf("%d ",array2[i]);
	
	}
	
	
	
	
	
	


return 0;
}

