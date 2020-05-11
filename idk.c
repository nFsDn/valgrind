#include <stdio.h> 
#include <stdlib.h> 

int main() 
{ 

	int *ptr, *ptr1; 
	int n, i; 
	n = 5; 
	ptr = (int*)malloc(n * sizeof(int)); 
	ptr1 = (int*)calloc(n * sizeof(int)); 
	if (ptr == NULL || ptr1 == NULL) { 
		printf("Memory not allocated.\n"); 
		exit(0); 
	} 
	else { 
		printf("Memory successfully allocated using malloc.\n"); 
		//free(ptr); 
		printf("Malloc Memory successfully freed.\n"); 
		
		printf("\nMemory successfully allocated using calloc.\n"); 
		free(ptr1); 
		printf("ptr1[2]=%d",ptr1[2]);
		printf("Calloc Memory successfully freed.\n"); 
	} 

	return 0; 
} 
