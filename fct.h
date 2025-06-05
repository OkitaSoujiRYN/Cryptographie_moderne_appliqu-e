//
// Created by Yk on 13/09/2023.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define KEYSIZE 16
#ifndef CRYPTOTP1_FCT_H
#define CRYPTOTP1_FCT_H
// create a function that put a value in modulo 26
int mod(int value){
    if(value> 25){
        value = value - 26;
    }
    if(value < 0){
        value = value + 26;
    }
    return value;
};
//create a functon that put a word of six letters in ascii code
int motenaskii(char word[6]){
    int i;
    int ascii[6];
    char uu= 'a';
    int a = uu;
    printf("%d\n",a);
    for(i=0;i<6;i++){
        int unic = word[i];
        printf("%d",unic);
    }
    return 0;
};

#endif //CRYPTOTP1_FCT_H
