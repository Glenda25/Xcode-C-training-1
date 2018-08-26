//
//  main.c
//  C_012 Lops for 1
//
//  Created by Glenda Mullan on 20/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//
/* for loop syntax  for(initiation ; condition ; increment )
    initiation  - done first, done only once, declare and initialise variables
    condition - second step processed, a condition is evaluated and if true go to body of loop, if false go to the next statement
 increment - after body of loop is executed, jump back to increment and increment, can be left blank but must have ;
 
 aim 1: simplest loop
 aim 2: nested for loop
 */
#include <stdio.h>

// aim 1

int main()
{
    for(int a=10; a<20;a=a+1)                   // a is declared and defined as the first step; keep looping until a !<20; add 1 to a each loop
{
    printf("\n The value of a is %d",a);        // " " string constant

}
    printf("\n\n");
    
    char alpha;
    for(alpha ='a';alpha<='z';alpha=alpha+1)    // ' ' character constant
    {
        printf("%c, ",alpha);                   // " " defines a string constant so use %c becuae we are also printing a comma and a space so it's a string
    }
    
    printf("\n\n");
    
    for(alpha = 'z';alpha>='a';alpha=alpha-1)
    {
        printf("%c, ",alpha);
    }
    
    // aim 2
    
    printf("\n\n");
    int alphab, code;
    
    for(alphab ='A';alphab<='G';alphab=alphab+1)
    {
        for(code = 1;code<=7;code = code +1)
        {
            printf("%c%d ",alphab,code);
        }
    }
    
    printf("\n\n");
    int alphac, code2;
    
    for(alphac ='A';alphac<='G';alphac=alphac+1)
    {
        printf("\n\n");
        for(code2 = 1;code2<=7;code2 = code2 +1)
        {
            printf("%c)%d:\t\t ",alphac,code2);
        }
    }
    
    printf("\n\n");
    return 0;                           // must have outside of for() statement otherwise loop runs once and stops at this termination statement
}


