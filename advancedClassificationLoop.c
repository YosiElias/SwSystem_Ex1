#include <stdio.h>
#include <math.h>
/* will return if a number is Armstrong number
An Armstrong number is an n-digit number that is equal to the sum of the nth powers of its digits.
For Example: 407 = 4^3 + 0^3 + 7^3 = 64 + 0 + 343 = 407
*/
int numDigits(int x){
    int count=0,n=x;
    while(n>0){
        n=n/10;
        count++;
    }
    return count;
}
int isArmstrong(int x){
    int d=numDigits(x);
    double sum=0;
    int n=x,i;
    while(n>0){
        i=n%10;
        sum+=pow(i,d);
        n=n/10;
    }
    if (x==sum){
        return 1;
    }
    return 0;
}
/* will return if a number is a palindrome */
int isPalindrome(int x){
    int r=0,m=x;
    while(m>0){
        r=r*10+(m%10);
        m=m/10;
    }
    if (x==r){
        return 1;
    }
    return 0;
}

















// #include <stdio.h>
// #include <math.h>
// int isArmstrong(int n);

// int isArmstrong(int n){
//    int dig,sum=0,temp, pw=0;    
//     temp=n;
//    while (n != 0) {    // save the number of digits of n to power the digit after
//        n /= 10;
//        pw += 1;
//    } 
// //    printf("pw = %d", pw);  
//    n = temp; 
// //    printf("\nn = %d\n", n);  
//     while(n>0)    
//     {    
//         dig=n%10;    
//         sum += pow(dig, pw);    
//         n=n/10;    
//     }    
//     if(temp==sum){
//         return 1;   //n is Armstrong
//     }    
//     else    
//         return 0;   //n is not Armstrong 
// }

