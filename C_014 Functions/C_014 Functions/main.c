//
//  main.c
//  C_014 Functions
//
//  Created by Glenda Mullan on 29/6/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>

void function2(void);  // must have the type, in this case void, in the () to be prototyped
void vegas(void);
void graph(int count,char box);  // telling te complier the argument inside () is an integer and the variable is name is count
float convert1(float f);
float convert2(float f);
void limit(int stop);

int main(int argc, const char * argv[])
/*
 main()function contains 2 arguments - but these do not have to be writen every time as it's default in the C language
 argc = the number of Comand lines passed in, including the program name
 argv = contains the actual argument Variables which are stored as argv[0], argv[1], etc
 */

{
    void function2(void); // note that this function is within the {} of the int main()
    {
        printf("\nfunction2 is first used within the main() function and so needs to be prototyped");
        printf("\nand when function2 is used within another funtion it becomes a statement so end it with ;\n\n");
    }

    int a;
    a=365;
    
    printf("\nThe value of a within int main() is %d",a);
    
    void vegas(void);
    {
        int a;
        a=45;
        printf("\nThe value of a within the void vegas() which is within the int main() is %d",a);
        printf("\nThat is, variables in C are local to their function and can not be changed by another function\n\n");
    }
    
    // sending a value to a function - passing and argument to a function
    // void graph(int count,char box);
    int value;
    value =2;
    char test;
    test = 'T';
    while (value<=128)
    {
        graph(value,test);                      // pasing info to the void graph() function below
        printf("Value is %d %c",value,test);
        value = value*2;
        /* line 51 calls the void graph function. The variable is and int and named 'value'
         The variable you pass to a function does not have to match the name used inside the function, in this case int x
         only the variable type must match. In this case int
         */
    }
    // float convert(float f);
    
    float temp_f,temp_c;
    
    printf("\n\nEnter a temperature in degrees Farenheight: ");
    scanf("%f",&temp_f);
    temp_c = convert1(temp_f);                   // passing info to the float convert() function below. Note different variable names temp_f = f
    printf("%.1fF is %.1fC\n",temp_f,temp_c);
    temp_c = convert2(temp_f);                   // in float convert2() below, keyword return is used to return the value back to this statement
    printf("And using the second example, %.1fF is %.1fC\n",temp_f,temp_c);
    
    // using a function to end a program
    int s;
    printf("\n\nEnter a stopping value between 0 and 100: ");
    scanf("%d",&s);         // assigns the entered value to storage position s
    if(s>100)               // if statement used to check the value entered
    {
        printf("\nThis number is too big. You are cheating!\n\n");
        return 0;           // and end the program
    }
    limit(s);               // calls void limit(int stop)

    
    
    
    printf("\n\n");
    return 0;               // END OF INT MAIN()
}
 // these functions are outside the int main()

void graph(int count,char box)
{
    int x;
    for(x=0
        ;x<count;x=x+2)
        putchar('*');
    putchar('\n');
}

// this function returns the value t
float convert1(float f)
{
    float t;
    t = (f-32)/1.8;
    
    return(t);
}

// this function uses the keyword return to return a value back to the statement that caled the function
float convert2(float f)
{
return(f-32)/1.8;           // keyword used to return the value to the statement that called it
}

//this fuction uses a value to end a function
void limit(int stop)        // stop has been assigned s in the statement that calls this function
{
    int x;
    for(x=0;x<=100;x=x+1)
    {                       // careful with {} make sure you use them in the correct place
        printf("%d, ",x);
    if (x==stop)            // if x is the same as stop which is s in the statement that calls the function
    {
        printf("  ..You won!");
        return;
    }
    }
    printf("\n\tI won!");
}


