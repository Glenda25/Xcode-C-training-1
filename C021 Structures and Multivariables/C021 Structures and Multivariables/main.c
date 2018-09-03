//
//  main.c
//  C021 Structures and Multivariables
//
//  Created by Glenda Mullan on 26/8/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>

int main() {
    printf("\n\n");
    
//    patient demographics
    struct patient              // note, no ; at end of statement
    {
        char firstname[50];
        char lastname[50];
        char sex[10];
        int dobDD;
        int dobMM;
        int dobYYYY;
    };
        
    struct patient ident[2];    // note, there is a ; at the end of this line. The [2] = and array with 2 elements
    
    int x;                      // used to cycle thru line 25 array
    for(x=1;x<=2;x++)
        {
                                                    //the . is the struct member operator used to access members of the struct
        printf("\nGiven name: ");
        scanf("%s",ident[x].firstname);            // %s so no & required for the memory pointer
    
        printf("\nSurname name: ");
        scanf("%s",ident[x].lastname);
    
        printf("\nSex (Male of Female): ");
        scanf("%s",ident[x].sex);
    
        printf("\nDate of birth\ndd\t: ");
        scanf("%d",&ident[x].dobDD);               // %d so & is required as the memory pointer
    
        printf("mm\t: ");
        scanf("%d",&ident[x].dobMM);
    
        printf("yyyy\t: ");
        scanf("%d",&ident[x].dobYYYY);
    }

    for(x=1;x<=2;x++)                               // cycle thru the array
    {
        printf("\n\tPatient %d: %s %s, %s, dated of birth %d/%d/%d, aged %d years. Lab number 18R%d",x,ident[x].firstname,ident[x].lastname,ident[x].sex,ident[x].dobDD,ident[x].dobMM,ident[x].dobYYYY,(2018-ident[x].dobYYYY),x);
        
        printf("\n\n");
    }
    return 0;
}
