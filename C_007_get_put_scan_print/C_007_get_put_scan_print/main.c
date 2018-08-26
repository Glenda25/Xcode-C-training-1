//
//  main.c
//  C_007_get_put_scan_print
//
//  Created by Glenda Mullan on 15/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.

#include <stdio.h>

int main()
{
    /* get and put
    int getchar(void) reads the next available character from the screen and returns it as a integer
    int gets(char *s) reads a line into the buffer pointed to by s, until either a terminating new line or an EOF
    int putchar(int c) puts the passed character character on the screen and returns the same character
    int puts(const char *s) writes the s and a trailing new line to the screen
    get and put read single characters only
    get and put functions can be used in a loop to read more than one character from the screen */
    
    int c;
    printf("Enter a value: ");
    c=getchar();
    printf("\n");
    printf("You entered: ");
    putchar(c);
    printf("\n\n");
    
    char str[100];
    printf("Enter you name: ");
    gets(str);                  // gets() reads unlimted text and is deemed dangerous and not run by compiler
    puts(str);
    printf("\n\n");
    
    /* scanf() and printf()
     int scanf(const char *format, ..) reads the input from the screen, and scans the screen acording to the FORMAT
     int printf(const char *format, ...) writes the out put to the screen, and produces the output acording to the FORMAT
     FORMAT %s string, %d integer, %c character, %f floating point, plus many others */
    
    char str2[100];
    int i;
    printf("Enter your name: ");
    scanf("%s",str2);
    printf("\nEnter your age in years: ");
    scanf("%d",&i);                                     // must have & before i
    printf("Hello %s. You are %d years old!",str2, i);
    printf("\n\n");
    
    char first[100];
    char last[100];
    int a;
    
    printf("\nEnter your first name: ");
    scanf("%s",first);
    printf("\nEnter your last name: ");
    scanf("%s",last);
    printf("\nEnter the year you were born: ");
    scanf("%d",&a);
    int b =(2018-a);
    printf("\n\nHello %s %s. You will be %d this year!",first,last,b);
    printf("\n\n");
    return 0;
}
