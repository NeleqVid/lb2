#include<stdio.h>
#include"min.h"
#include"max.h"
#include"sum.h"
#include"diff.h"

int main() { 
 
	int masiv[100]; 
 
	int znach = 0; 
 
    	int s = 0; 
 
    	char space =' '; 
 
    	scanf("%d", &znach); 
 
    	while (s < 100 && space == ' ') { 
 
        	scanf("%d%c", &masiv[s], &space); 
 
        	s++; 
 
    	} 
 
    	switch (znach) { 
 
        	case 0: 

 			max(masiv, s);
 
            		break; 
 
        	case 1: 
 
            		min(masiv, s); 
 
            		break; 
 
        	case 2: 
 
            		diff(masiv, s); 
 
            		break;   
 
        	case 3: 
 
            		sum(masiv, s); 
 
            		break; 
 
        	default:  
 
            		printf("Данные некорректны\n"); break; 
 
    	} 
 
}
