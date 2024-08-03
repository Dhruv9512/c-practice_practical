#include <stdio.h>
struct Book
{
    char title[100];
    char author[50];
    char publisher[50];
    int publishingYear;
    int numberOfPages;
    float price;
};
void displayBookDetails(struct Book book)
{
    printf("Title: %s\n", book.title);
    printf("Author: %s\n", book.author);
    printf("Publisher: %s\n", book.publisher);
    printf("Publishing Year: %d\n", book.publishingYear);
    printf("Number of Pages: %d\n", book.numberOfPages);
    printf("Price: %.2f\n", book.price);
    printf("\n");
}

int main()
{

    struct Book books[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter details for book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Publisher: ");
        scanf("%s", books[i].publisher);
        printf("Publishing Year: ");
        scanf("%d", &books[i].publishingYear);
        printf("Number of Pages: ");
        scanf("%d", &books[i].numberOfPages);
        printf("Price: ");
        scanf("%f", &books[i].price);
        printf("\n");
    }

    printf("List of Book Details:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Book %d:\n", i + 1);
        displayBookDetails(books[i]);
    }

    return 0;
}
