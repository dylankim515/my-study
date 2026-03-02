#include <stdio.h>

struct book_info {
    char* name;
    char* author; 
    int pub_year;
};

struct book_list {
    int* collection;
    int num;
};

char copy_str(char *dest, char *src);
void register_book(struct book_list *booklist, char* name, char* author, int pub_year, int num_of_books);
void delete_book();
void Print_book_list();
int main()
{
    int num_of_books,flag=0;
    int input;
    int i;
    struct book_list *bl;

    printf("Welcome to the Book Management Program!\n");
    printf("-----------------Menu-----------------\n");
    printf("1. View all registered books\n");
    printf("2. Register a book\n");
    printf("3. Delete a book\n");
    printf("Enter a number to the following menu : ");
    scanf("%d",&input);

    while(1){
        printf("Enter a number to the following menu : ");
        scanf("%d",&input);
        switch(input){
            case 1:
            {
                
                Print_book_list();
                
                break;
            }
            case 2:
            {
                register_book();
                break;
            }
            case 3:
            {
                delete_book();
                break;
            }
            default:
            {
                printf("Not a valid input. Program Ended\n");
                flag=1;
                break;
            }
        }
        if (flag==1)
        {
            break;
        }
        
    }
}
char copy_str(char *dest, char *src){
    while(*src)
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0';
    return 1;
}

void register_book(struct book_list *booklist, char* name, char* author, int pub_year, int num_of_books){
    struct book_info *pbook = malloc(sizeof(struct book_info));
    copy_str(pbook->name,name);
    copy_str(pbook->author,author);
    pbook->pub_year = pub_year;
    booklist->collection = realloc(booklist, sizeof(struct book_info*) * (num_of_books+1));
    booklist->collection[num_of_books] = pbook;
    num_of_books++;
}
void delete_book(){
    int*temp;

}
void Print_book_list(struct book_list* book_list, int num_of_books){
    int i=1;
    
    while(num_of_books>0)
    {
        printf("%d. Title: \"%s\" Author: \"%s\" Publised Year: %d\n",i,book_list->collection[i-1]->name, book_list->collection[i-1]->author,book_list->collection[i-1]->pub_year);
        i--;
        num_of_books--;
    }    
    
}
