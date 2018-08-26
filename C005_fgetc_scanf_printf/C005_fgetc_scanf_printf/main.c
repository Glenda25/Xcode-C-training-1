//
//  main.c
//  C005_fgetc_scanf_printf
//
//  Created by Glenda Mullan on 11/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//
//
#include <stdio.h>

int main()
{
    int c,d,e,f;

    printf("1. Please enter 4 letters without spaces and press enter: ");
    // use fgetc and NOT getc as fgetc adds an end of file (EOF). getc just keeps getting data and can overload
    c=fgetc(stdin);
    d=fgetc(stdin);
    e=fgetc(stdin);
    f=fgetc(stdin);
    
    printf("\n\tThank you for typing: %c, %c, %c and %c\n\n",c,d,e,f);
    printf("\tThe ASCII code for these letters is: %d, %d, %d, %d\n\n",c,d,e,f);
    printf("\tIf we add together the ASCII codes for these letters we get: %d,\n\n",c+d+e+f);
    printf("\tAnd if we multiply the codes we get: %d,\n\n",c*d*e*f);
    
    printf("\n2. Please enter your first name: ");
    char name[20];
    scanf("%s",name);                   // ends when it encounters a white space so use_between words
    printf("\n\tHello %s!\n\n",name);
    
    return 0;
}
