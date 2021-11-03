#include <stdio.h>
#include "NumClass.h"

/* will return if a number is prime*/
int isPrime(int n){
    int i=2;
    while(i*i<=n){
        if (n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int atzeret(int n){
    int i=n;
    int all=1;
    while(i>0){
        all=all*i;
        i--;
    }
    return all;
}
/*Strong number is a special number whose sum of the factorial of digits is equal to the original
number. For Example: 145 is strong number
1! + 4! + 5! = 145
*/
int isStrong(int n){
    int all=0;
    int x=n;
    int y;
    while(x>0){
        y=x%10;
        x=x/10;
        all+= atzeret(y);
    }
    if (all==n){
        return 1;
    }
    return 0;
}