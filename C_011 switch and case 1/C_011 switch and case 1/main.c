//
//  main.c
//  C_011 switch and case 1
//
//  Created by Glenda Mullan on 20/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

/* aim 1: switch case gues the secret number
 aim 2: default case:
 aim 3: start the car
 
 NOTE after the case statement : is used and not ; because it's a case not a statement */

#include <stdio.h>

int main()
{
    // aim 1
    
    int c;      // used to input value

    printf("Guess the secret number! \nEnter a number between 0 and 10: ");
    scanf("%d",&c);     // get he value and store at c

    
    switch(c)
    {
        case 0:         // when 0 is entered for c print this statement
            printf("\n\nTo low. Try again");
            break;
        case 1:         // when 1 is entered for c print this statement  etc
            printf("\n\nTo low. Try again");
            break;
        case 2:
            printf("\n\nTo low. Try again");
            break;
        case 3:
            printf("\n\nTo low. Try again");
            break;
        case 4:
            printf("\n\nTo low. Try again");
            break;
        case 5:
            printf("\n\nYou win. the secret number is 5!");
            break;
        case 6:
            printf("\n\nTo high. Try again");
            break;
        case 7:
            printf("\n\nTo high. Try again");
            break;
        case 8:
            printf("\n\nTo high. Try again");
            break;
        case 9:
            printf("\n\nTo high. Try again");
            break;
        case 10:
            printf("\n\nTo high. Try again");
            break;
    }
    
    // aim 2. default statement and break

    int a;
    
    printf("\n\nGuess the secret number! \nEnter a number between 10 and 20: ");
    scanf("%d",&a);     // get he value and store at a
    
    switch(a)
    {
        case 15:
            printf("\nYou guessed the right number!");
            
            break;      // if you got the right number then stop, otherwise print default statement
            
        default:
            printf("\nThat's not it, try again");
    }
    
    // aim 3. start the car -  too hard!
    
    int engine;
    int keys;
    int foot;
    int gears;
    int park;
    
    printf("\nTo start the car, please answer yes or no to the following questions:");
    printf("\n\tIs the engine off? ");
    scanf("%d",&engine);
    printf("\n\tAre the keys in the car? ");
    scanf("%d",&keys);
    printf("\n\tDo you have your foot on the break pedal? ");
    scanf("%d",&foot);
    printf("\n\tAre the gears in Park? ");
    scanf("%d",&gears);
    printf("\n\tIs the parking break on? ");
    scanf("%d",&park);

    switch(engine)
case'n':
    
    switch(keys)
case'n':

    switch(foot)
case'n':
  
    switch(gears)
case'n':
    
    switch(park)
case'n':
    
    
    
    return 0;
}
