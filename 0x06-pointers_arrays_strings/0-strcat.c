#include "main.h"
/**
 * print the min and max
 */

int sizeArr(char *a){
    char *p = a;
    while(*a){
        a++;
    }
    return (a-p);
}
char *inverse(char *a, char *b){
    int lenA = sizeArr(a);
    int lenB= sizeArr(b);
    char *p = a;
    char *p2 = b;
    int len= lenA + lenB;
    for(int i =0; i<len; i++){
        if(i < lenA-1){
            continue;
        }else{
            *(a + i+1) = *b;
            b++;
        }
    }
    return a;
}
