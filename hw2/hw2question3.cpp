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
	
/* kullanýcýdan tektek karakter alýp geçici arraya yerleþtirme */
		
		while(scanf("%c",&harf)!=EOF){     
		
			sampleArray[count]=harf; 
		
		
			count++;
			
		}

	/*asýl arrayi tanýmlayýp geçici arrayi ona atma */	
	
	count--;
	char array[count];
		
	
		for(i=0;i<count;i++){
			
		array[i]=sampleArray[i];
		
			}

/*palindroma gruplarýný bulma kýsmý */

		for(i=0;i<count;i++){
			x=i;                        /*ikinci for da i nin eski halinin alýnmasýný istedigimde x e eþitlemek için */
			for(j=count-1;j>=i;j--){
					
				if(array[i]==array[j]&&(i+1==j-1||i+1==j)){/* bu ifle palindroma buldugumuzda number arttýrýp hem sayýyý tutuyoruz hemde iþlemleri	
																engellemesin diye control3le kontrol ediyoz */
					
					number++;
					i=x;/*i yi eski haline döndürme */
					control3=1;/*if kontrolü için */ 
					
				}
				
				if(control3==0){
				
					if(array[i]!=array[j]){/*eþit olmadýgýnda i yi eski haline getirip kontrola devam etme ve 3.cü if e girip girmemeyi kontrol etme 
											ayrýca j yi ayarlama iþlemleri için kullanýyoruz bu if i */
				
						i=x;
						j=j+control2;
						control=0;
						control2=0;
					}
				
					if(array[i]==array[j]&&i+1<j&&control==1){/* j yi ayýrlama ve buyukten daha küçüðe giderek palindroma kontrolu için i yi
																kontrol etme */
					
						i++;
						control2++;
					
					}
				
				}
				
				
				control=1;		/*if lere giriþleri kontrol etme */
				control3=0;	
				
				}
		
					
		}

	printf("%d",number);   /*adet sayýsýný bastýrma */
	
	return 0;
}
