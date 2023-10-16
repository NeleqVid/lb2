#include<stdio.h>
#include"min.h"

void min(int masiv[], int s) { 
 
	int min1 = 9999999; 
 
	for (int i = 0; i < s; i++) { 
 
        	if (masiv[i] < min1) { 
 
        		min1 = masiv[i]; 
 
			} 
		}
	printf("%d",min1);}
