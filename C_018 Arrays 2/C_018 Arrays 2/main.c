//
//  main.c
//  C_018 Arrays 2
//
//  Created by Glenda Mullan on 8/8/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>     // used in aim 3: random number generation
#include <time.h>       // used in aim 3: random number generation


//Prototyping and array function
/*
 prototype function
    compiler notification
    describes the return value and variables sent to the function
    placed after #include< .n> and before int main()
 */

//used in aim 1
double getAverage(int arr[],int size)
{
    int i;
    double avg;
    double sum;
    sum = 0;
    
    for(i=0;i< size;i++)        // for() statment to move thru the array elements
    {
        sum +=arr[i];           // for each element do this arithmatic sum = sum + arr[i]
    }
    avg = sum/size;             // find the averge
    
    return avg;                 // return the average to the output
}

// used in Aim 2
int *getRandom()
{
    static int r[10];
    int j;
    
    srand((unsigned)time( NULL ));      // using the computer clock to seed a random number
    for(j=0;j<10;j++)
    {
        r[j]=rand();
        printf("r[%d]=%d\n",j,r[j]);
        
    }
    return r;                           // return the random number to the output
}

// used in aim 3

#define SIZE 5                      // define a variable to be used in the void function
void numberArray(int array1[]);    // prototype the function numberArray that uses int array1[] as an argument


int main() {
 printf("\n\n");
    
// Aim 1: passing arrays to a prototyped function
    
    int balance[5] = {2,4,6,8,10};      // declare the array and the elements
    double avg;
    
    avg=getAverage(balance,5);
    
    printf("Average value is: %1.3f ",avg);     // conversion code for double is %f (same as a float)

    printf("\n\n");
    
// Aim 2: returning and array from a function using a pointer to the array
    
    int *p;         // pointer
    int i;
    
    p=getRandom();
    for(i=0;i<10;i++)
    {
        printf("*(p+%d):%d\n",i,*(p+i));
    }

    
    
// Aim 3:passing an array into a function
    printf("\n\n");
    
    int array1[]={1,2,3,4,5,};                          // decalre the elements in the array
    
    printf("These are the elements in the array: ");
    numberArray(array1);                                // address void function below to move thru array elements
    
    printf("\n\n");

}

void numberArray(int array1[])          // this void() must be outside the int mani() function
{
    int z;
    for(z=0;z<SIZE;z++)
        printf("%d\t",array1[z]);
    printf("\n\n");
}
