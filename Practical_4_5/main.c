#include <stdio.h>
#include <stdlib.h>

/*Define a structure called "Book" with members for title, author, and price. Write a program to
create an array of three books, assign values to their members, and print the details of the
books.*/

struct Book /*Initialize structure*/
{
    char title[20];
    char author[20];
    int price;
};

void main()
{
    struct Book book[3]; /*Initialize array of 3*/

    for (int x=0; x<3; x++) /*Assign information of books*/
    {
        printf("What is the book name: ");
        scanf("%s", book[x].title);
        printf("Who is the author: ");
        scanf("%s", book[x].author);
        printf("What is the book price: ");
        scanf("%d", &book[x].price);
    }

    for(int y=0; y<3; y++) /*Display book information*/
    {
        printf("\n'%s' was made by %s and costed %d\n", book[y].title, book[y].author, book[y].price);
    }
    return 0;
}
