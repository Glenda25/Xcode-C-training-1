//
//  main.c
//  C_023 Structure variables and functions 1
//
//  Created by Glenda Mullan on 8/9/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {

    
    struct human
    {
        char firstname[50];
        char lastname[50];
        int yeardob;
        char address[150];
        int postcode;
    } Person_1, Person_2;
        
    
    printf("Enter the following details for the first person.\n");
    printf("First name: ");
    scanf("%s",Person_1.firstname);
    printf("Last name: ");
    scanf("%s",Person_1.lastname);
    printf("Year born: ");
    scanf("%d",&Person_1.yeardob);      // note & used as storage locatore for %d
    printf("Street address: ");
    scanf("%s",Person_1.address);       // scanf reads a string until the first white space, tab, enter etc. so must use_and not a space
    printf("Post code: ");
    scanf("%d",&Person_1.postcode);
    printf("\n");
    
    printf("Enter the following details for the second person.\n");
    printf("First name: ");
    scanf("%s",Person_2.firstname);
    printf("Last name: ");
    scanf("%s",Person_2.lastname);
    printf("Year born: ");
    scanf("%d",&Person_2.yeardob);
    printf("Street address: ");
    scanf("%s",Person_2.address);
    printf("Post code: ");
    scanf("%d",&Person_2.postcode);
    printf("\n");
    
    printf("The people in this array are:\n");
    printf("\t%s %s, %d years of age, and who resides at %s %d.\n",Person_1.firstname,Person_1.lastname,2018-Person_1.yeardob,Person_1.address,Person_1.postcode);
    printf("\n");
    printf("\t%s %s, %d years of age, and who resides at %s %d.\n",Person_2.firstname,Person_2.lastname,2018-Person_2.yeardob,Person_2.address,Person_2.postcode);
    
    
   
    
    printf("\n");
    return 0;
}
