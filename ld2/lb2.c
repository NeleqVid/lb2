#include <stdio.h> 
 
  
 
int max(int masiv[], int s) { 
 
    int max1 = -9999999; 
 
    for (int i = 0; i < s; i++) { 
 
        if (masiv[i] > max1) { 
 
            max1 = masiv[i]; 
 
        } 
 
    } 
 
    return max1; 
 
} 
 
  
 
int min(int masiv[], int s) { 
 
    int min1 = 9999999; 
 
    for (int i = 0; i < s; i++) { 
 
        if (masiv[i] < min1) { 
 
            min1 = masiv[i]; 
 
        } 
 
    } 
 
    return min1; 
 
} 
 
  
 
int diff(int max, int min) { 
 
    return (max - min); 
 
} 
 
  
 
int sum(int masiv[], int s) { 
 
    int index; 
 
    int min2 = 9999999; 
 
    int summ = 0; 
 
    for (int i = (s-1); i >= 0; i--) { 
 
        if (masiv[i] <= min2) { 
 
            min2 = masiv[i]; 
 
            index = i; 
 
        } 
 
    } 
 
    for (int j = 0; j <index; j++) { 
 
        summ = summ + (masiv[j]); 
 
    } 
 
    return summ; 
 
} 
 
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
 
            printf("%d\n", max(masiv, s)); 
 
            break; 
 
        case 1: 
 
            printf("%d\n", min(masiv, s)); 
 
            break; 
 
        case 2: 
 
            printf("%d\n", diff(max(masiv, s), min(masiv, s))); 
 
            break;   
 
        case 3: 
 
            printf("%d\n", sum(masiv, s)); 
 
            break; 
 
        default:  
 
            printf("Данные некорректны\n"); break; 
 
    } 
 
}