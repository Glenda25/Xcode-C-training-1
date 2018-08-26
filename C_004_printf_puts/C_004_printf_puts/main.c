//
//  main.c
//  C_004_printf_puts
//
//  Created by Glenda Mullan on 11/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>

int main(){
    
    puts("Puts writes the string and only defined variables and has no formatting");
    puts("Puts inlcudes a new line at the end of the string");
    puts("And you can also put single characters using putchar");
    puts("\n");     // this adds two new lines as puts includes a new line
    
    int ch;         // declare the variable
    
    ch='H';         // assign the variable a value
    putchar(ch);    // do something with the variable
    
    ch='i';
    putchar(ch);
    ch=' ';
    putchar(ch);
    ch='W';
    putchar(ch);
    ch='o';
    putchar(ch);
    ch='r';
    putchar(ch);
    ch='l';
    putchar(ch);
    ch='d';
    putchar(ch);
    ch='!';
    putchar(ch);
    
    printf("\n\nPrintf includes formating and mixed variables. But you need to add the new line\n\n");
    printf("\tThe value is %d\n",3);    // \t tab, \n new line, \r return
    printf("\t\tAnd %d is the value\n",3);
    printf("\t\t\tThe value is not %1.2f\n",2.34);
    printf("\t\t\t\tAnd it is also not %1.6f\n",5.123456987);
    printf("\t\t\t\t\tand certainly not %d\n\n",3*2);
    
    return 0;
}
