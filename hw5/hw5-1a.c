
#include<stdio.h> 
#include <stdlib.h>


/* --------INFORMATION----------


I USED MERGESORT FOR SORTING AND BIGOH OF MERGESORT �S (NLOGN)
I USED YESNO AND YESNO2 FUNCT�ON AND BIGOH OF YESNO AND YESNO2 �S (NLOGN)
*/




// Merges two subarrays of arr[].
// First subarray is arr[l..m]
// Second subarray is arr[m+1..r]
void merge(int arr[], int l, int m, int r)
{
	int i, j, k;
	int n1 = m - l + 1;
	int n2 = r - m;

	/* create temp arrays */
	int L[n1], R[n2];

	/* Copy data to temp arrays L[] and R[] */
	for (i = 0; i < n1; i++)
		L[i] = arr[l + i];
	for (j = 0; j < n2; j++)
		R[j] = arr[m + 1 + j];

	/* Merge the temp arrays back into arr[l..r]*/
	i = 0; // Initial index of first subarray
	j = 0; // Initial index of second subarray
	k = l; // Initial index of merged subarray
	while (i < n1 && j < n2) {
		if (L[i] <= R[j]) {
			arr[k] = L[i];
			i++;
		}
		else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	/* Copy the remaining elements of L[], if there
	are any */
	while (i < n1) {
		arr[k] = L[i];
		i++;
		k++;
	}

	/* Copy the remaining elements of R[], if there
	are any */
	while (j < n2) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

/* l is for left index and r is right index of the
sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r)
{
	if (l < r) {
		// Same as (l+r)/2, but avoids overflow for
		// large l and h
		int m = l + (r - l) / 2;

		// Sort first and second halves
		mergeSort(arr, l, m);
		mergeSort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}







//this function decide yes or no
void yesNo(int arr[],int size,int x){//// THE BIGOH OF TH�S FUNCTION �S (NLOGN)
	int i,j;
	int flag=0;
	
	for(i=0;i<size;i++){
		
		for(j=size/2;j<size;j++){
			
			if(x==arr[i]+arr[j]&&i!=j){
				flag=1;
				
			}
		}
	
		
	}
	
	if(flag==1){
		printf("YES");
	}
	if(flag==0){
		printf("NO");
	}
	
	
	
}
//this function decide yes or no


void yesNo2(int arr[],int size,int x){//// THE BIGOH OF TH�S FUNCTION �S (NLOGN)
	int i,j;
	int flag=0;

	for(i=0;i<size;i++){
		
		for(j=size/2;j>=0;j--){
			
			if(x==arr[i]+arr[j]&&i!=j){
				flag=1;
				
			}
		}
	
		
	}
	
	if(flag==1){
		printf("YES");
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
	//WE USE MERGESORT
	mergeSort(array, 0, n - 1);
	

	
	if(array[n/2]+array[n]<x)
	{
	yesNo(array,n,x);//this function decide yes or no	
	}
	
	else
	{
	yesNo2(array,n,x);//this function decide yes or no	
	}
	
	
	
	return 0;
}
