//
//  main.c
//  C_009 auto vs static stoarage class
//
//  Created by Glenda Mullan on 16/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

/* there are two static int variables in this program;  count and i  */
 
 
#include <stdio.h>

void doThis(void);      // define the function

static int count = 5;   // first static int

static int i = 5;

int main()
{
    while(count --)     // -- means reduce by one each loop
    {
        doThis();       // go to this function
    }
    return 0;           // must be here inside loop {}
}

void doThis(void)
    {
        
        i++;            // increase by one each lop
        
        printf("i is %d and the count is %d\n",i,count);
        printf("\n");
    }
