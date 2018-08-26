//
//  main.c
//  C_017 Arrays 1
//
//  Created by Glenda Mullan on 22/7/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>

int main() {

// aim 1: create array elements using a for() loop
    
    printf("\n\n");
    
    int n[10];          // an array with 10 elements - if you put [5] them error, if you put [20] then ok but loop defines onn;y 10 element will be generated
    int i;              // i used to create the variables in the array using a for() loop
    int j;              // j used in 2nd loop to calculte the array elemnt number
    
    for(i=0;i<10;i++)   // creat the values of the array elements named starting with 0+100 = 100
    {
        n[i]=i+100;
    }
    for(j=1;j<10;j++)   // j = the elemnt number starting from 0
    {
        printf("Element number [%d] = %d\n",j,n[j]);
    }
    
//aim 2: one for() loop to generate element numbers and to progress from element to element
    printf("\n\n");
    
    float prices[]={23.2,45.789,56.8,5.456,98.214};
    int a=0;                                            // a used to generate day nymbers and to progress along element numbers
    
    for(a=0;a<=4;a++)                                   // initialise a at 0 so you get all the array elements
    {
        printf("\nDay %d: %1.3f",a+1,prices[a]);        // a+1 because array elements start at 0 but want day numbers a to start 1
    }
    
    
//aim 3: multple arrays
    printf("\n\n");
    
    int values1[]={13,14,15,16,17,18,19};
    int values2[]={21,22,23,24,25,26,27};
    int b =0;
    
    
    for(b=0;b<=6;b++)
    {
        printf("\n%d times %d equals %d",values1[b],values2[b],values1[b]*values2[b]);
    }

    
    
//aim 4: string arrays 1 - see STREAMING for more info reading text in C
    printf("\n\n");
    
    char words1[]="Hello world!";
    
    printf("\n\t%s",words1);
    
    
    
//aim 5: string arrays - scanf() does not require & as the memort locator. "%s" is used as the conversion character

    char firstname[15];     // set the size of the array
    char surname[15];
    int year;
    
    printf("\n\nType your first name: ");
    scanf("%s",firstname);                      // there is NO & before array name. %s directs scanf() to look for a string
    printf("\nType your surname: ");
    scanf("%s",surname);
    
    printf("\nWhat year where you born? ");
    scanf("%d",&year);                          // MUST have & as pointer to int variable
    
    printf("\n\tPleased to meet you %s %s. \n\tYou are %d this year!",firstname,surname,2018-year);
    
    
    
// aim 6: Bubble sort
    
    #define SIZE 6
    int array1[]={95,60,6,87,50,24};
    int x;                              // used to display original array
    int inner;                          // used in the outer for()
    int outer;                          // used in the iner for()
    int temp;                           // used as a temp site while sorting
    
    
    // display the orriginal array using x to progress theu the array elements
    printf("\n\nOriginal array =\t");
    for(x=0;x<6;x++)
    {
        printf("%d\t",array1[x]);
    }
    
    //bubble sort
    for(outer=0;outer<SIZE-1;outer++)           // outer for() reads each array element one at a time
    {
        for(inner=outer+1;inner<SIZE;inner++)   // inner for() reads the nexy array element one position along wrt the outer for()
        {
            if(array1[outer]>array1[inner])     // if outer element is > than the inner element (that is the element one along) then,....
            {
                temp=array1[outer];             // then place larger element into temp
                array1[outer]=array1[inner];    // 
                array1[inner]=temp;
            }
        }
    }
    // display sorted array
    printf("\nSorted array =\t\t");
    for(x=0;x<SIZE;x++)
    {
        printf("%d\t",array1[x]);
    }
    
// aim 7: 2 dimensional array
    printf("\n\n");
    
    int e[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};                // 5 rows and 2 columns
    int f,g;
    
    printf("The array is declared as int e[5][2]={{0,0},{1,2},{2,4},{3,6},{4,8}}\nAnd so the array position and it's element is:\n");
    // for()statement used to move element++ thru the array
    for(f=0;f<5;f++)                    // 5 rows
    {
        for(g=0;g<2;g++)                // 2 columns
        {
            printf("\te[%d][%d] = %d\n",f,g,e[f][g]);     // this will print f= row number, g= column number
        }
    }
    printf("\n\n");
    
    int h[5][3]={{0,0,0},{1,2,3},{2,4,5},{3,6,7},{4,8,9}};      // 5 rows and 3 columns
    int k,l;
    

    printf("The array is declared as int h[5][3]={{0,0,0},{1,2,3},{2,4,5},{3,6,7},{4,8,9}};\nAnd so the array position and it's element is:\n");
    // for()statement used to move element++ thru the array
    for(k=0;k<5;k++)                    // 5 rows
    {
        for(l=0;l<3;l++)                // 3 columns
        {
            printf("\te[%d][%d] = %d\n",k,l,h[k][l]);
        }
    }
    printf("\n\n");
    
    int m[5][3]={0,0,0,1,2,3,2,4,5,3,6,7,4,8,9};      // 5 rows and 3 columns
    int p,q;
    
    
    printf("The array can also be declared without the internal {} as int m[5][3]={0,0,0,1,2,3,2,4,5,3,6,7,4,8,9};\nAnd so the array position and it's element is:\n");
    // for()statement used to move element++ thru the array
    for(p=0;p<5;p++)                    // 5 rows
    {
        for(q=0;q<3;q++)                // 3 columns
        {
            printf("\t\te[%d][%d] = %d\n",p,q,m[p][q]);
        }
    }
    
    
// Aim 8: two dimensional tic tac toe
    printf("\n\n");
    // when a for() does not have {} after it, then only the immediate line after the function declaration is used
    
    char tttoe[3][3];
    int v,y;
    
    for (v=0;v<3;v++)           // no {} so only the imediate line after is used in the function
        for (y=0;y<3;y++)
            tttoe[v][y]='.';    // single character so ' ' and not " " (which is for strings)
    
    
    
    
    printf("Lets play 2D tic-tac-toe!");
    printf("\n\n");
    
    tttoe[1][1]='X';
    
    
    for(v=0;v<3;v++)
    {                           // {} used as the next 4 lines are withing the above function
        for (y=0;y<3;y++)
            printf("%c\t",tttoe[v][y]);
        printf("\n\n");
    }
    
// Aim 9: three dimensional tic tac toe
    
    char tttoe3[3][3][3];
    int s,t,u;
    
    for (s=0;s<3;s++)           // no {} so only the imediate line after is used in the function
        for (t=0;t<3;t++)
            for (u=0;u<3;u++)
                tttoe3[s][s][u]='.';    // single character so ' ' and not " " (which is for strings)
    
    tttoe3[1][0][1]='X';            // change array coordinates to move X around the 3 d grid
    
    printf("Lets play 3D tic-tac-toe!");
    printf("\n\n");
    
    
    for(u=0;u<3;u++)
    {
        printf("Level %d\n\n",u+1);
        for (s=0;s<3;s++)
        {
            for(t=0;t<3;t++)
                printf("%c\t",tttoe3[s][t][u]);
            printf("\n\n");
        }
    }
    
    printf("\n\n\n");
    return 0;
}
