#include <limits.h> 
#include <stdio.h> 


	 

	/* Function to get minimum number of 	needed in worst case with m snooker ball  n floors */
		int funct(int m, int n){ 
	
	if (n == 1 || n == 0) 	// If there are no floors, then no trials needed. OR if there is one floor, one trial needed.
		return n; 

	// We need n trials for snooker ball and 
	// n floors 
		if (m == 1) 
			return n; 

		int min = INT_MAX, i, y; 

	// Consider all droppings from 1st floor to nth floor and return the minimum of these values  plus 1. 
	for (i = 1; i <= n; i++) { 
		
		y = high( funct(m - 1, i - 1), funct(m, n - i)); 
			
			if (y < min) 
				
				min = y; 
	} 

		return min + 1; 
} 


	// maksimum
	int high(int x, int y) { 
		
		if(x>y)
		return x;
		return y;
		
	}	


		int main() { 
	
			int m , n; 
			scanf("%d",&n);
			scanf("%d",&m);	
	
			printf("%d",funct(m,n)); 
	
			return 0; 
} 

