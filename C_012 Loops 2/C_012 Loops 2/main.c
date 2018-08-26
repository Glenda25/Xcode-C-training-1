//
//  main.c
//  C_012 Loops 2
//
//  Created by Glenda Mullan on 1/7/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//
/*
 aim 1: for loops
 aim 2: nested for loops
 aim 3: while loops
 aim 4: do..while loop
 */

#include <stdio.h>

int main()
{
//aim 1: for loops
    printf("\n");
    int a;
    for(a=0;a<=10;a=a+1)    // this is a function so no ; at the end
    {
        printf("The value of a is %d\n",a);

    }
    printf("\n");
    int b;
    for(b=0;b<=10;b++)  //b++ is the same as b=b+1
    {
        printf("The value of b is %d\n",b);
    }
   
    // break; used to erminate a loop
    printf("\n");
    int c;
    for(c=0;c<=10;c++)  //break to stop a loop
    {
        printf("The loop is terminated when c is %d\n",c);
        if(c==5)
        {
            break;
        }
    }
    // contiune use to skip to next iteration
    printf("\n");
    int d;
    for(d=0;d<=10;d++)  //break to stop a loop
    {
        printf("The loop is terminated when d is %d\n",d);
        continue;       // forces the next iteration (the break statement) to be skipped
        if(c==5)
        {
            break;
        }
    }

//aim 2: nested for loops
    printf("\n");
    int e;
    int f;
    for(e=0;e<=10;e=e+1)
    {
        printf("The value of e is %d.",e);
        
        for(f=0;f<=3;f++)
        {
            printf("%d",f);
        }
        printf(":\n");
    }
    
    printf("\n");
    int g;
    char h;
    for(g=1;g<=10;g++)
    {
        for(h='a';h<='e';h++)       // h must be char and ' ' for single character
        {
            printf("%d.%c  \t",g,h);    // the 2 for statements and then the printf() statement
        }
        printf("\n");
    }
    
    printf("\n");
    int i;
    char j;
    char k;
    for(i=1;i<=10;i++)
    {
        for(j='a';j<='c';j++)
        {
            for(k='a';k<='c';k++)
            {
                printf("%d.%c%c    \t",i,j,k);
            }
        }
        printf("\n");
    }
    printf("\n\n");
// aim 3: while loop
    
    int l = 1;      // these are the initial values
    int m = 1;
    char n = 'a';
    
    while(l<=10)    // the condition
    {
        printf("This while loop is up to %d:\n",l);
        l++;        // the incrementation
    }
   
    
    printf("\n\n");
    // nested while - does not work as well as the do..while loop below
    
    while(m<=5)
    {
        while(n<='g')
        {
            printf("%d.%c\n",m,n);
            m++;
            n++;
        }
    }
    
// aim 4: d..while
    printf("\n\n");
    
    int o = 1;
    char p = 'a';
    
    do
    {
        printf("This do while is up to %d%c.\n",o,p);
        o++;
        p++;
    }
    while(o<=10);
    
    
    
    
    
    
    printf("\n\n");
    return 0;
}
