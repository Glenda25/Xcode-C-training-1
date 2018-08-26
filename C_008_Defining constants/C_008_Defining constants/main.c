//
//  main.c
//  C_008_Defining constants
//
//  Created by Glenda Mullan on 16/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>

/* Constants are the same as literals and CAPITALS are used to define them */

#define LENGTH 10       // # means PREprocessor, so before int main()
#define WIDTH 8
#define NEWLIND '\n'    //character constants(literals) are enclosed in ' '

int main()
{
    int area;
    area = LENGTH*WIDTH;
    
    printf("%c",NEWLIND);
    printf("The defined area is %d",area);
    printf("%c",NEWLIND);
    printf("%c",NEWLIND);
    
    const int LENGTH2 = 10;     // const is a keyword so it's defined within the function
    const int WIDTH2 = 200;
    
    int area2;
    area2=LENGTH2*WIDTH2;
    
    printf("%c",NEWLIND);
    printf("The constant area is %d",area2);
    printf("%c",NEWLIND);
    printf("%c",NEWLIND);
    
    
    
    return 0;
}
