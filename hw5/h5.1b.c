
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX 100000





void printPairs(int arr[], int arr_size, int sum){//this function is býgoh(n)
	int i, temp;
	int flag=0;
	/*initialize hash set as 0*/
	bool s[MAX] = { 0 };
	
	for (i = 0; i < arr_size; i++) 
	{
		temp = sum - arr[i];
		if (s[temp] == 1){
		
			printf("YES");
			flag=1;
			}
			
		s[arr[i]] = 1;
	}
	if(flag==0){
		printf("NO");
	}

}

	


// Driver program to test above functions 

int main(){
	
	int n,x,y,z;
	//WE TAKE INPUT
	scanf("%d",&n);
	int array[n];
	for(y=0;y<n;y++){
		scanf("%d",&x);
		array[y]=x;
	}
	
	scanf("%d",&x);
	printPairs(array, n, x);

	
	
	return 0;
}
