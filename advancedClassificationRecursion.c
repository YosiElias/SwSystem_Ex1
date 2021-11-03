#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isArmstrongRec(int n, int sum, int pw) {
    int dig;
    if (n==0){
        return sum;
    }
    dig=n%10;    
    sum += pow(dig, pw);       
    n /= 10;
    return isArmstrongRec(n, sum, pw);
}
int numdig(int n){
    if(n<10){
        return 1;
    }
    else{
        return 1 + numdig(n/10);
    }
}
int isArmstrong(int n){
    int temp, pw=0, sum;    
    temp=n;
    pw = numdig(n);  
//     while (n != 0) {    // save the number of digits of n to power the digit after
//        n /= 10;
//        pw += 1;
//    } 
   n =temp;
    sum = isArmstrongRec(n, 0, pw);    
    if (temp==sum){
        return 1;   //n is Armstrong
    }    
    else    
        return 0;   //n is not Armstrong 
}



int isPalindromeRec(int n, int r){
   if (n == 0){
       return r;
   } 
    r=r*10+(n%10);
    n=n/10;
    return isPalindromeRec(n, r);
}
int isPalindrome(int x){
    int r=0,n=x;
    r = isPalindromeRec(n, r);
    if (x==r){
        return 1;
    }
    return 0;
}
