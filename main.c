#include <stdio.h>
#include "NumClass.h"

int main()    
{  
    int n1, n2, min, max;
    // printf("enter the number=");    
    scanf("%d %d", &n1, &n2);
    if (n1 < n2){
        min = n1;
        max = n2;
    }
    else{
       min = n2;
       max = n1; 
    }

    printf("The Armstrong numbers are:");
    for (int i=min; i<=max; i++){
        if (isArmstrong(i))
            printf(" %d", i);
    }

    printf("\nThe Palindromes are:");
    for (int i=min; i<=max; i++){
        if (isPalindrome(i))
            printf(" %d", i);
    }

    printf("\nThe Prime numbers are:");
    for (int i=min; i<=max; i++){
        if (isPrime(i))
            printf(" %d", i);
    }

    printf("\nThe Strong numbers are:");
    for (int i=min; i<=max; i++){
        if (isStrong(i))
            printf(" %d", i);
    }
    printf("\n");

}