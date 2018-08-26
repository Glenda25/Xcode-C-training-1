//
//  main.c
//  C_010 If and else 1
//
//  Created by Glenda Mullan on 20/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

/* aim 1: ask for the value of 2 variables a and b. Compare the variables and IF a is larger than b print statement1 else print statement2
    aim 2: nested if else if and comparison to a static integer
    aim 3: nested else if statements
    aim 4: start the car*/

#include <stdio.h>



int main()
{
    // aim 1
    int a;
    int b;
    
    printf("This is Aim 1: Comparing two variables.\n");
    
    printf("\n\tPlease enter a value for a: ");
    scanf("%d",&a);
    printf("\n\tPlease enter a value for b: ");
    scanf("%d",&b);
    
    if(a>b)
    {
        printf("\n\tThe number entered for a was %d, which is larger than the number %d enetered for b",a,b);
    }
               else
               {
                   printf("\n\tThe number enetred for b was %d, which is larger than the number enetered for a, which was %d ",b,a);
               }
    printf("\n\n");
    
    // aim 2
    int c;
    int d;
    static int e = 10;
    printf("\nThis is Aim 2: Adding two numbers to find the secret number!\n");
    
    printf("\n\tPlease enter a number between 0 and 10: ");

    scanf("%d",&c);
    printf("\n\tPlease enter a number between 0 and 10: ");
    scanf("%d",&d);

    
    if(c+d==e)// must use == and not = because this is a boolean comparison
        // == checks if two operands are equal and returns yes 1 or no 0
        
    {
        printf("\n\tYay! The numbers you entered, %d and %d add up to the secret number which is %d\n",c,d,e);
    }
    else if(c+d>e)
    {
        printf("\n\tYour numbers, %d and %d, are to big and you over-shot the secret number\n",c,d);
    }
    else if(c+d<e)
    {
        printf("\n\tYour numbers, %d and %d, are to small and you didn't get to the secret number\n",c,d);
    }
    else
    {
        printf("\n\tOh my God! what hapened!");
    }
    
    // aim 3
    
    int g;
    int h;
    int i = 2;
    int j = 3;
    int k = 4;
    int l = 5;
    
    printf("\n\nThis is Aim 3: Adding numbers between 1 and 3\n");
    
    printf("\n\tEnter a number from 1 to 3: ");
    scanf("%d",&g);
    printf("\n\tEnter a diferent number from 1 to 3: ");
    scanf("%d",&h);
    printf("\n\n");
    
    if(g+h==i)                  // must use == and not = because this is a boolean comparison
                                // == checks if two operands are equal and returns yes 1 or no 0
        
    {
        printf("\t\ta + b = %d",i);
    }
    else if(g+h==j)
    {
        printf("\t\ta + b = %d",j);
    }
    else if(g+h==k)
    {
        printf("\t\ta + b = %d",k);
    }
    else if(g+h==l)
    {
        printf("\t\ta + b = %d",l);
    }
    else
    {
        printf("\tYour numbers were too big");
    }
    
    
    // aim 4: start the car using is else
    
    int engine;
    int keys;
    int foot;
    int gears;
    int park;
    
    printf("\n\n\nThis is Aim 4: Starting the car. Please enter 1 for yes or 0 for no:\n");
    
    printf("\n\tThe eginie off: ");
    scanf("%d",&engine);
    printf("\n\tThe keys are in the car: ");
    scanf("%d",&keys);
    printf("\n\tYour foot is on the break pedal: ");
    scanf("%d",&foot);
    printf("\n\tThe gears are in Park: ");
    scanf("%d",&gears);
    printf("\n\tThe parking break on: ");
    scanf("%d",&park);
    
    int all = (engine+keys+foot+gears+park);            // must come ofter scanf data inputs otherwise error
    
    
    if(all==5)
    {
        printf("\n\tYou can start the car!");
    }
    else
    {
        printf("\n\tThe car will not start.");
    }
    
    // aim 5: start the car with feedback using if else...if
    
    int engine5;
    int keys5;
    int foot5;
    int gears5;
    int park5;
    
    printf("\n\n\nThis is Aim 5: Starting the car with feed back. Please enter 1 for yes or 0 for no:\n");
    
    printf("\n\tThe eginie off: ");
    scanf("%d",&engine5);
    printf("\n\tThe keys are in the car: ");
    scanf("%d",&keys5);
    printf("\n\tYour foot is on the break pedal: ");
    scanf("%d",&foot5);
    printf("\n\tThe gears are in Park: ");
    scanf("%d",&gears5);
    printf("\n\tThe parking break on: ");
    scanf("%d",&park5);
    
    if(engine5==0)
    {
        printf("\n\tThe engine is already on");
    }
    else if(keys5==0)
    {
        printf("\n\tThe keys are not in the car so the engine wont start");
    }
    else if(foot5==0)
    {
        printf("\n\tYour foot must be on the break for the engine to start");
    }
    else if(gears==0)
    {
        printf("\n\tThe car gears are not in park so the engine wont start");
    }
    else if(park==0)
    {
        printf("\n\tThe parking break must be on before the car will start");
    }
    else
            {
                printf("\n\tThe car started!");
            }
    
    printf("\n\n");
    return 0;
}
