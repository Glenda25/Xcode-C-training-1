//
//  main.c
//  C_015 Maths 1
//
//  Created by Glenda Mullan on 14/7/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>
#include <math.h>       // higher order mathematics library
#include <stdlib.h>     // library contains script for random numbers
#include <time.h>       // used in time seeding random numbers using the computer clock

int main()
{
    printf("\n\n");
// aim 1
int a;

    for(a=1;a<=10;a++)
    {
        printf("Exercise 11-1 printing %d times using a for loop\n",a);
    }
    printf("\n\n");
    
    
// aim 2
    printf("\n\n");
int b = 1;          // note that you need to assign the variable a value before using it the while loop
    while(b<=10)
    {
        printf("Exercise 11-1 printing %d times using a while loop\n",b);
        b++;
    }
    printf("\n\n");
    
    
// aim 3
int c;
    for(c=-5;c<=4;c++)     // not that you stop at 4 as next loop starts with variable+1
    {
        printf("%d ",c);
    }
    for(;c>=-5;c--)     // the for() above ends with c=5 so no need to initiate c in the 2nd for(). note that c starts at 5
    {
        printf("%d ",c);
    }
    printf("\n\n");
    
    
// aim 3
    int d = -10;        // while loop so initialize
    while(d<=9)         // not that you stop at 9 as next loop starts with variable+1
    {
        printf("%d ",d);
        d++;
    }
    while(d>=-10)
    {
        printf("%d ",d);
        d--;
    }
     printf("\n\n");

// aim 4      // which side of variable you place the operator (eg f++ or ++f) matters!
    
    int e,f,g,h,i,j;
    
    f = 16;
    e = f++;        // post incrementing
    
    printf("The value of e=f++ when f is initially 16 is %d\n",e);
    
    printf("and now f = %d\n",f);
    
    g = 16;
    h = ++g;         // prefixing operators
    
    e=++f;
    printf("\nThe value of h=++g when g is initially 16 is %d\n",h);
    printf("and now g = %d\n\n\n",g);
    
    for(i=1;i<=10;i++)
    {
        printf("The value of i++ = %d\n",i);
    }
    printf("\n\n");
    
    for(j=1;j<=10;++j)
    {
        printf("The value of ++j = %d\n",j);  // no difference in result
    }
    
    // aim 5: modulus
    printf("\n\n");
    
    float k = 21;
    float l = 10;
    int m = 21;
    int n = 10;
    int o = m % n;
    printf("The value of 21/10 = %1.2f\n",k/l);
    
    printf("The remainder (modulus) of 21/10 = %d\n",o);

    // aim 6: <math.h> operators
    
    float result,value;
    
    printf("\nInput a vaulue between 0 and 9: ");                   // sqrt = square root
    scanf("%f",&value);
    result = sqrt(value);
    printf("The sqaure root of %1.2f is %1.2f\n",value, result);
    
    printf("\nInput a vaulue between 0 and 9: ");                   // pow = power of
    scanf("%f",&value);
    result = pow(value,3);                                          // note you need to include the power after a ,
    printf("%1.2f to the power 3 is %1.2f\n",value, result);
    
    printf("\nInput a vaulue with decimal placed between 0 and 9: ");                   // floor = rounds up a floating point to the next whole number
    scanf("%f",&value);
    result = floor(value);
    printf("The floor of %1.2f is %1.2f\n",value, result);
    
    printf("\nInput a vaulue  with decimal placed between 0 and 9: ");                   // ceil = rounds down a floating point to the next whole number
    scanf("%f",&value);
    result = ceil(value);
    printf("The ceiling of %1.2f is %1.2f\n",value, result);
    
/* aim 7:trigonometry - all programing languages use radians and not degrees for trig
 a radian is a measure of an arc. It uses pi instead if degrees (eg 45 degrees)
 in degrees a circle has 360 Degrees
 in radians it has 2pi = 6.2831 (2x 3.1415)
 degrees        radians
 90             pi/2
 180            pi
 270            3pi/2
 360            2pi
 */
    printf("\n\n");
   
    float degrees,radians;
    
    printf("Enter an angle in degrees: ");
    scanf("%f",&degrees);                       // use "" because it's a %f and don't forget the &
    radians = 0.0174532925*degrees;
    printf("%f degrees = %f radians\n",degrees,radians);

// aim 8: random numbers using the rand() function
    
    printf("\n\n");
    
    int p,q,r;
    
    printf("50 Random numbers between 0 and 20:\n");
    for(q=0;q<10;q++)                   // this loop for rows = 10 rows
    {
        for(p=0;p<5;p++)                // this loop for columns = 5 coumns
        {
            r=rand();                   // rand() function
            printf("%d\t\t",(r%20)+1);  // (r%20)+1) used to limit number generated to between 0 and 20
        }
        printf("\n");
        
    }
    
    // seeding radnom numbers
    printf("\n");
    
    unsigned seed;
    
    printf("Input a random number seed: ");
    scanf("%u",&seed);
    srand(seed);
    
    printf("50 Seeded random numbers between 0 and 100:\n");
    for(q=0;q<10;q++)                   // this loop for rows = 10 rows
    {
        for(p=0;p<5;p++)                // this loop for columns = 5 coumns
        {
            r=rand();                   // rand() function
            printf("%d\t\t",(r%100)+1);
        }
        printf("\n");
    }
    
    // seeding value pulled from the system clock using the time() function
    
    srand((unsigned)time(NULL));
    
    printf("\n50 Clock-seeded random numbers between 0 and 100:\n");
    for(q=0;q<10;q++)                   // this loop for rows = 10 rows
    {
        for(p=0;p<5;p++)                // this loop for columns = 5 coumns
        {
            r=rand();                   // rand() function
            printf("%d\t\t",(r%100)+1);
        }
        printf("\n");
    }
      
    
    
    
    
    printf("\n\n");
    return 0;
}
