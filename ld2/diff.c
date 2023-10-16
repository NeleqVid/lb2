#include<stdio.h>
#include"diff.h"

void diff(int masiv[], int s) { 

	int max1 = -9999999; 
 
	for (int i = 0; i < s; i++) { 
 
        	if (masiv[i] > max1) { 
 
        		max1 = masiv[i]; 
 
        		} 
 
	}
 
	int min1 = 9999999; 
 
	for (int i = 0; i < s; i++) { 
 
        	if (masiv[i] < min1) { 
 
        		min1 = masiv[i]; 
 
        	} 
 
	}
	printf("%d",max1-min1);}
