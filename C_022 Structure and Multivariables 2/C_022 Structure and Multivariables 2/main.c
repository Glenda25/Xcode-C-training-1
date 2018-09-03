//
//  main.c
//  C_022 Structure and Multivariables 2
//
//  Created by Glenda Mullan on 3/9/18.
//  Copyright © 2018 Glenda Mullan. All rights reserved.
//

#include <stdio.h>
#include <string.h>         // need for the strcpy statements

// use struct to define the variables
struct Books                //note this struct id defined before the int main()
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// declare a void function() that has the struct in lines 27 and 28 as arguments. This is just the name, see the end for what he function does
void printBook(struct Books book);


int main()
{
    struct Books Book1;
    struct Books Book2;
    
//    book 1 data
    strcpy(Book1.title, "Glenda the Great");                // the . is called a 'member access operator'
    strcpy(Book1.author, "Glenda Mullan");                  // strcopy is used in C to copy the string into the destination. That is, it copies the stuff between " " into Book1.author
    strcpy(Book1.subject, "Great Glenda's of Time");
    Book1.book_id = 12345;
    
    //    book 2 data
    strcpy(Book2.title, "Toni the Great");
    strcpy(Book2.author, "Toni Saville");
    strcpy(Book2.subject, "Great Toni's of Time");
    Book2.book_id = 6789;

    //    use the void() and define Book1 or Book2.
    printBook(Book1);
    printf("\n\n");
    printBook(Book2);

    return 0;
}
// define what will be printed in the void function()
void printBook(struct Books book)
{
    printf("Book 1 Title: %s\n",book.title);
    printf("Book 1 Author: %s\n",book.author);
    printf("Book 1 Subject: %s\n",book.subject);
    printf("Book 1 Reference Number: %d\n",book.book_id);
}

