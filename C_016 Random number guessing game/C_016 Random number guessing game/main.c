//
//  main.c
//  C_016 Random number guessing game
//
//  Created by Glenda Mullan on 16/7/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//
/*
 
 */

#include <stdio.h>
#include <stdlib.h>     // library contains script for random numbers
#include <time.h>       // used in time seeding random numbers using the computer clock

int main()
{
    int a;
    int b;
    srand((unsigned)time(NULL));                        // using the computer clock to seed a random number
    int r = rand();                                     // asign the random number to variable r
        r=(r%10)+1;                                     // limit the random number to <=10
    
    for(a=1;a<=5;a++)                                   // loop of 5 guesses
    {
        printf("\nEnter a number between 0 and 10: ");  // instructions
        scanf("%d",&b);                                 // enter a guess and store value as b
        
        if(b==r)                                        // if guess is correct then print message and break (end) loop
        {
            printf("\nYay! You guessed the secret number!");
            break;
        }
        else                                            // else print try agian and restart loop.
        {
            printf("\n\tThat's not it.\n");
        }
    }
    printf("\n\n\t\tThe secret number was %d.\n\n",r);
    
    printf("\n\n");
    return 0;
    
}
    
    

