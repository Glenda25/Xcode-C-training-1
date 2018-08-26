//
//  main.c
//  C_20 Test functions plus
//
//  Created by Glenda Mullan on 18/8/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>      // this header file contains text functions
#include <string.h>     // this header file conatins the string functions


int main() {
// Aim 1: Testing CTYPE functions to count the type of elements in a string
    
    char phrase[]="The quick brown fox JUMPED over the 12345 lazy sleeping! DOG"; //array to be analysed
    int index,alpha,blank,punct,lower,upper,print;    // 'gang initialize' the variable names used in the CTYPE functions
    index=alpha=blank=punct=lower=upper=print=0;      // all the variables = each other = 0
    
    index=0;
    
    while(phrase[index])
        // while there is an element, loop thru the if statements below
        // for(x=0;x<?;x++) loop not used because I don't know the total number of elements in the string, and this value could change
    {
        if(isalpha(phrase[index]))      // if the element is an alphabet letter in the array, then add 1 to the alpha count
            alpha++;                    // do not need {} as only this line is part of the if()
        if(isblank(phrase[index]))
            blank++;
        if(ispunct(phrase[index]))
            punct++;
        if(islower(phrase[index]))
            lower++;
        if(isupper(phrase[index]))
            upper++;
        if(isprint(phrase[index]))
            print++;
        index++;
        
    }
    // the array elements are counted, now do something with these counts
    
    printf("The phrase to be analysed is:\n");
    printf("\"%s\"\n",phrase);                      // %s is conversion factor for a string
    printf("\n\nThe statistics of the phrase are:\n");
    printf("%d\talphabet characters\n",alpha);
    printf("%d\tblanks \n",blank);
    printf("%d\tpunctuation characters\n",punct);
    printf("%d\talphabet lower case letters\n",lower);
    printf("%d\talphabet upper case letters\n",upper);
    printf("%d\tThe total number of elements in the string\n",print);
    printf("%d\tThe number of blanks x the number of alphabet character\n",blank*alpha);  // CTYPE functions use int variables and return int values, so you can do math with the int values

    
    
// Aim 2: Conversion/Manipulation functions - compare case sensative - password example
    printf("\n\n");
    
    char password []="PooBum";
    char input [20];
    int match;
    
    printf("Please enter the password: ");
    scanf("%s",input);                      // scanf conversion character for a string is %s, and this does NOT need an & to assign a storage place
    
    match =strcmp(input,password);          // compares 2 strings in a case sensative way and if a match, returns 0
    
    if (match==0)
        printf("\n\tPassword correct, please enter!");      //do not need {} as only one line in if()
    else
        printf("\n\tFuck off!");
    

// Aim 3: Conversion/Manipulation functions - convert text format  ** not working **
    printf("\n\n");
    
    char answer;
    
    printf("Would you like to be a spaceperson: ");
    
    scanf("%c",&answer);                           //  %c conversion code so an & is required place the entry into the 'answer' storage psoition
    

    
    if(answer=='Y')                                 // == is the same as, ' ' to show the expected single character entered
        printf("\n\n\tWelcome space person!");
    else
        printf("\n\n\tGo home earthling!");
            
    
// Aim 4: Adding strings together using CTYPE strcat = string concatenate
        printf("\n\n");
    
    char firstname[20];
    char lastname[20];
    
    printf("\nWhat is your first name: ");
    scanf("%s",firstname);
    
    strcat(firstname," ");                      // add " " white space to the end of firstname
    
    printf("\nWhat is your last name: ");
    scanf("%s",lastname);
    
    strcat(firstname,lastname);                // adds lastname onto the string firstname" "
    
    printf("\n\n\tWelcome %s!",firstname);      // only need to recall firstname
    
    
    
// Aim 5: Floating point formatting. %w.pf  w= width, p=precision f= floating point
    printf("\n\n");
    
    
    float one = 12345.0;                    // using floating point %w.p to format text
    
    printf("%16.1f\n",one);
    printf("%12.1f %5.1f\n",one,one);
    printf("%11.1f %9.1f\n",one,one);
    printf("%10.1f %11.1f\n",one,one);
    printf("%9.1f %13.1f\n",one,one);
    
        printf("\n\n");
    
    printf("%16s\n","hello");               // using %w.ps that is using width and precision with a string conversion string character
    printf("%15s\n","hello");               // space is added on the left when the width is greater than the string. But if the with is less than the string length then the full strung is still dispalyed
    printf("%14s\n","hello");
    printf("%14s\n","hello");
    printf("%15s\n","hello");
    printf("%16s\n","hello");
    
    
//Aim 6: Right alignment
    printf("\n\n");
    
    int value = 1234;
    int value2 = 1234;
    
    printf("%010d",value);              // right aligns by 10 places and pads the the spaces with 0's
    printf("\n\n");
    printf("%10d",value2);              //right aligns by 10 places but does NOT pad with 0's
    printf("\n\n");
    
    printf("\n\n");

    
//Aim 7: Left alignment. Insering a minus before the width will left align
    
    printf("%-8s letter\n","K");        //%-8s will left align K by 8 spaces from letter
    printf("%-6s letter\n","K");
    printf("%-4s letter\n","K");
    printf("%-1s letter\n","K");
    printf("%-4s letter\n","K");
    printf("%-6s letter\n","K");
    printf("%-8s letter\n","K");
    
    
    
    
    
    printf("\n\n");
    return 0;
}
