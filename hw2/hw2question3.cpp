#include<stdio.h>

/* bigoh(n^2) */



int main(){
	
	char harf;
	int control=1;
	int control2=0;
	int control3=0;
	char sampleArray[50];
	int count=0;
	int number=0;
	int i,j,x;
	
/* kullan�c�dan tektek karakter al�p ge�ici arraya yerle�tirme */
		
		while(scanf("%c",&harf)!=EOF){     
		
			sampleArray[count]=harf; 
		
		
			count++;
			
		}

	/*as�l arrayi tan�mlay�p ge�ici arrayi ona atma */	
	
	count--;
	char array[count];
		
	
		for(i=0;i<count;i++){
			
		array[i]=sampleArray[i];
		
			}

/*palindroma gruplar�n� bulma k�sm� */

		for(i=0;i<count;i++){
			x=i;                        /*ikinci for da i nin eski halinin al�nmas�n� istedigimde x e e�itlemek i�in */
			for(j=count-1;j>=i;j--){
					
				if(array[i]==array[j]&&(i+1==j-1||i+1==j)){/* bu ifle palindroma buldugumuzda number artt�r�p hem say�y� tutuyoruz hemde i�lemleri	
																engellemesin diye control3le kontrol ediyoz */
					
					number++;
					i=x;/*i yi eski haline d�nd�rme */
					control3=1;/*if kontrol� i�in */ 
					
				}
				
				if(control3==0){
				
					if(array[i]!=array[j]){/*e�it olmad�g�nda i yi eski haline getirip kontrola devam etme ve 3.c� if e girip girmemeyi kontrol etme 
											ayr�ca j yi ayarlama i�lemleri i�in kullan�yoruz bu if i */
				
						i=x;
						j=j+control2;
						control=0;
						control2=0;
					}
				
					if(array[i]==array[j]&&i+1<j&&control==1){/* j yi ay�rlama ve buyukten daha k����e giderek palindroma kontrolu i�in i yi
																kontrol etme */
					
						i++;
						control2++;
					
					}
				
				}
				
				
				control=1;		/*if lere giri�leri kontrol etme */
				control3=0;	
				
				}
		
					
		}

	printf("%d",number);   /*adet say�s�n� bast�rma */
	
	return 0;
}
