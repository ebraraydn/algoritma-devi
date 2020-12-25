
#include<stdio.h> 

							
	
	
	
	int funct(int array[], int n, int k) { 	// Returns maximum sum of a subarray with at-least  2 elements. 



		// maxToplam[i] is going to store maximum sum  till index i such that a[i] is part of the sum. 
		int maxToplam[n]; 
	
			maxToplam[0] = array[0]; 

		// We use Kadane's algorithm to fill maxToplam[] 

	int i;
	int chigh = array[0]; 
	
		for (i = 1; i < n; i++) { 
		
			chigh = high(array[i], chigh+array[i]); 
				
			maxToplam[i] = chigh; 
		} 

		// Sum of first k elements 
		int toplam = 0; 
	
			for (i = 0; i < k; i++) 
				toplam += array[i]; 

		// Use the concept of sliding window 
		int son= toplam; 
	
			for (i = k; i < n; i++) { 
				
				// Compute sum of k elements ending  with a[i]. 
				toplam = toplam + array[i] - array[i-k]; 

				// Update son if required 
				son = high(son, toplam); 

				// Include maximum sum till [i-k] also if it increases overall max. 
				son = high(son, toplam + maxToplam[i-k]); 
			}			 
		
		
		return son; 
	}	 
		
		
		
		
		int high(int a,int b){
			
			if(a>b)
			return a;
				
			return b;
			}
 
		int main() { 
		
			int i,n,x;
				
			scanf("%d",&n);
				
			int array[n];
			
			for(i=0;i<n;i++){
	
				scanf("%d",&x);
				array[i]=x;
	
			}
			
			int k = 2; 

			printf("%d",funct(array, n, k)); 
			
			return 0; 
		
		
		} 

