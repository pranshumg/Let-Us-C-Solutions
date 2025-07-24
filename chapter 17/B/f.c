#include <stdio.h>

struct library {
    int accession_no;
    char title[50];
    char author[50];
    float price;
    int issued; // 0 = No, 1 = Yes
};

void working_of_library() {
    struct library books[100];
    int cnt = 0, c;
    while (1) {
        printf("\nLibrary Menu:\n");
        printf("1. Add book information\n");
        printf("2. Display book information\n");
        printf("3. List all books of given author\n");
        printf("4. List title by accession number\n");
        printf("5. Count of books\n");
        printf("6. List books by accession number\n");
        printf("7. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &c);
        if (c == 1) {
            printf("Enter accession number, title, author, price, issued: ");
            scanf("%d %s %s %f %d", &books[cnt].accession_no, books[cnt].title, books[cnt].author, &books[cnt].price, &books[cnt].issued);
            cnt++;
        } else if (c == 2) {
            for (int i = 0; i < cnt; i++) {
                printf("%d %s %s %.2f %d\n", books[i].accession_no, books[i].title, books[i].author, books[i].price, books[i].issued);
            }
        } else if (c == 3) {
            char author[50];
            getchar();  
            printf("Enter author: ");
            fgets(author, sizeof(author), stdin);
            author[strcspn(author, "\n")] = 0; 
            for (int i = 0; i < cnt; i++) {
                if (strcmp(books[i].author, author) == 0) {
                    printf("%s\n", books[i].title);
                }
            }
        } else if (c == 4) {
            int acc;
            printf("Enter accession number: ");
            scanf("%d", &acc);
            for (int i = 0; i < cnt; i++) {
                if (books[i].accession_no == acc) {
                    printf("%s\n", books[i].title);
                }
            }
        } else if (c == 5) {
            printf("Total books: %d\n", cnt);
        } else if (c == 6) {
            for (int i = 0; i < cnt - 1; i++) {
                for (int j = i + 1; j < cnt; j++) {
                    if (books[i].accession_no > books[j].accession_no) {
                        struct library temp = books[i];
                        books[i] = books[j];
                        books[j] = temp;
                    }
                }
            }
            for (int i = 0; i < cnt; i++) {
                printf("%d %s\n", books[i].accession_no, books[i].title);
            }
        } else if (c == 7) {
            break;
        } else {
            printf("Invalid choice!\n");
        }
    } 
}