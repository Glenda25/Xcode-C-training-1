//
//  main.c
//  C_013 Operators 1
//
//  Created by Glenda Mullan on 23/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//
/*
 aim:1 Arithmic operators
 aim:2 Relational Operators used with if...else decisions:
 aim:3 Logical Operators used with if...else decisions:
 aim:4 Bitwise operators   And &,   Or |,  XOR ^
 aim:5 Assignment Operators
 aim:6 sizeof(), pointer *, variable address &, ternary conditional ?:
 
 */


#include <stdio.h>

int a = 21;
int b = 10;
int c;

int main()
{
    
//aim:1 Arithmic operators
c=a+b;
    printf("\n%d + %d = %d",a,b,c);
    c=a-b;
    printf("\n%d - %d = %d",a,b,c);
    c=a*b;
    printf("\n%d * %d = %d",a,b,c);
    c=a/b;
    printf("\n%d / %d = %d",a,b,c);
    c=a%b;
    printf(" and the remainder = %d",c);   // % modulus operator and remainder after division
   
    
    a++ ;                                                           // variable++ adds one to the value, and then that is the new value for the next statement
    printf("\n\nThe value of a is 21 and a++ is %d",a);
    a-- ;                                                           // the value in line 27 minus one
    printf("\nThe value of a is now 22 and a-- is %d",a);
    a-- ;                                                           // the value in line 29 minus one
    printf("\nAnd if we a-- again, the value is now %d",a);
    
    
    //aim 2: Relational Operators used with if...else decisions:
    printf("\n\nExamples of Relational Operators used with if...else decisions:");
    printf("\n");
    
    if(a==b)
    {
        printf("\n\tThe value %d, == is equal to, the value of %d",a,b);
    }
    else
    {
        printf("\n\t%d and %d have different values",a,b);
    }
    if(a!=b)
    {
        printf("\n\tThe value %d, != is NOT equal to, the value of %d",a,b);
    }
    else
    {
        printf("\n\t%d and %d have the same values",a,b);
    }
    if(a<b)
    {
        printf("\n\t%d is less than %d",a,b);
    }
    else
    {
        printf("\n\t%d is not less than %d",a,b);
    }
    if(a<=b)
    {
        printf("\n\t%d is less than or equal to %d",a,b);
    }
    else
    {
        printf("\n\t%d is not less than or equal to %d",a,b);
    }
    if(a>b)
    {
        printf("\n\t%d is greater than %d",a,b);
    }
    else
    {
        printf("\n\t%d is not greater than %d",a,b);
    }
    if(a>=b)
    {
        printf("\n\t%d is greater than or equalt to %d",a,b);
    }
    else
    {
        printf("\n\t%d is not greater than or equal to %d",a,b);
    }
    
    //aim 3: Logical Operators used with if...else decisions:
    printf("\n\nExamples of Logical Operators used with if...else decisions:");
    printf("\n");
    
    if(a&&b)    // a AND b are non zero
    {
        printf("\n\t(a&&b)\t\t: %d AND %d both have non-zero values is true the IF statement is executed",a,b);
    }
    else
    {
        printf("\n\t(a&&b)\\tt: %d AND %d both have non-zero values. The ELSE statement is executed when not true",a,b);
    }
    
    if(!(a&&b))    // NOT a&&b   ! used to reverse the logic state of the operand. If a condition is true, ! will make it false
    {
        printf("\n\t(!(a&&b))\t: %d AND %d both have non-zero values ! changes to false",a,b);
    }
    else
    {
        printf("\n\t(!(a&&b))\t: %d AND %d both have non-zero values is changed by the ! to NOT true and the ELSE statement has been executed",a,b);
    }
    
    
    printf("\n");

    if(a||b)    // a OR b are non zero
    {
        printf("\n\t(a||b)\t\t: %d OR %d have non-zero values is true and the IF statement is executed ",a,b);
    }
    else
    {
        printf("\n\t(a||b)\t\t: %d OR %d have non-zero values is false the ELSE statement is executed",a,b);
    }
    if(!(a||b))    // NOT a OR b are non zero
    {
        printf("\n\t(!(a||b)\t: NOT %d OR %d have non-zero values.  ",a,b);
    }
    else
    {
        printf("\n\t(!(a||b)\t: %d OR %d have non-zero values is changed by the ! to NOT true and the ELSE statement is executed",a,b);
    }
    
    
    
    
    /* aim 4: Bitwise operators   And &,   Or |,  XOR ^
     binary     A = 60 =    0011 1100,
                B = 13 =    0000 1101
     
        A&B                 0000 1100  = 12 non zero bits in A and B
        A|B                 0011 1101  = 61 non zero bits in A or B
        A^B                 0011 0001  = 49 XOR the output is true when one or the other but not both are true
        (~A)                1100 1100  =204 Ones complement operator. has the effect of 'fliping' bits to opposite state
        A<<2                1111 0000  =240 left shift operator - bits moved left by the number specified abyer <<
        A>>2                0000 1111  = 15 right shift operator - bits moved right by the number specified after >>
    */
    
    unsigned int a = 60;
    unsigned int b = 13;
    int c = 0;
    
    printf("\n\nExamples of Bitwise Operators");
    printf("\n");
    
    printf("\n\tWhen \ta = \t60 = \t0011 1100, \n\t\tand b = \t13 = \t0000 1101, then:");
    printf("\n");
    
    c= a & b;
    printf("\n\tValue of a & b \tis %d \t0000 1100",c);
    
    c= a | b;
    printf("\n\tValue of a | b \tis %d \t0011 1101",c);
    
    c= a ^ b;
    printf("\n\tValue of a ^ b \tis %d \t0011 0001",c);
    
    c= ~ a;
    printf("\n\tValue of ~a \tis %d \t1100 1100",c);
    
    c= a << 2;
    printf("\n\tValue of a<< \tis %d \t1111 0000",c);
    
    c= a >> 2;
    printf("\n\tValue of a>> \tis %d \t0000 1111",c);

    
    /* aim 5: Assignment Operators
     */
    
    int g = 21;
    int h;
    
    printf("\n\nThe following are examples of different assignment operators");
    
    printf("\n\n\tLet h = g = 21\n");
    
    h=g;
    printf("\n\tOperator value h = g: %d",h);
    
    h+=g;
    printf("\n\tOperator value h += g: %d",h);
    
    h-=g;
    printf("\n\tOperator value h -= g: %d",h);
    
    h*=g;
    printf("\n\tOperator value h *= g: %d",h);
    
    h/=g;
    printf("\n\tOperator value h /= g: %d",h);
    
    h<<=g;
    printf("\n\tOperator value h <<= g: %d",h);
    
    h>>=g;
    printf("\n\tOperator value h >>= g: %d",h);
    
    h&=g;
    printf("\n\tOperator value h &= g: %d",h);
    
    h^=g;
    printf("\n\tOperator value h ^= g: %d",h);
    
    h|=g;
    printf("\n\tOperator value h |= g: %d",h);
    
    // Aim: 6 sizeof(), pointer *, variable address &, ternary conditional ?:
    
    printf("\n\nThe following are examples of misc and the sizeof() operators");
    
    int i = 4;
    int m;
    int n;
    short j;
    double k;
    int* ptr;       // * is a pointer to a variable
    ptr = &i;       // & returns the address of a variable
    
    //
    printf("\n\n\tThe size of an integer is %d bytes",sizeof(i));
    
    printf("\n\tThe size of a short variable is %u bytes",sizeof(j));
    
    printf("\n\tThe size of a double variable is %d bytes",sizeof(k));
    
    printf("\n\tThe value of i is %d",i);
    
    printf("\n\tYou can also find the value of i using * which is a pointer. For example *ptr, where ptr = &i is %d",*ptr);
    
    printf("\n\n\tYou can test if a condition is true or not using the conditional ternary operator ? true:false");
    printf("\n\tFor example:");
    m=10;
    n=(m==1)? 20:30;
    printf("\n\t\tIf m=10, and n=(m==1) if true print 20, otherwise print 30. And the answer is %d",n);
    m=10;
    n=(m==10)? 20:30;
    printf("\n\t\tIf m=10, and n=(m==10) if true print 20, otherwise print 30. And the answer is %d",n);

    
    
    
    printf("\n\n");
    return 0;
    
}
