//
//  main.c
//  C_006_arrays_getchar
//
//  Created by Glenda Mullan on 11/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>

int main()
{
    // define char arrays as strings [] of characters
    char prompt [] = "You would like to sleep at: ";
    char prompt2 [] = "And wake up at: ";
    char prompt3 [] = "And have lunch at: ";
    
    // define variale
    char a;
    char aspace;        // used to accept the return character
    char b;
    char bspace;        // used to accept the return character
    char c;
    int x;
    int y;
    int z;
    
    // assign values
    printf("Please enter the time to sleep: ");
    a=getchar();
    aspace=getchar();                               // used to accept the return character after entering a
    printf("Please enter the time to wake up: ");
    b=getchar();
    bspace=getchar();                               // used to accept the return character after entering b
    printf("Please enter the time for lunch: ");
    c=getchar();
    
    x='a';
    y='p';
    z='m';
    
    // do something with this
    printf("\n\n\t%s%c%c%c",prompt,a,y,z);        // note %s used for the string and %c for the numbers
    printf("\n\t%s%c%c%c",prompt2,b,x,z);
    printf("\n\t%s%c%c%c\n\n",prompt3,c,x,z);
    
    return 0;
}
