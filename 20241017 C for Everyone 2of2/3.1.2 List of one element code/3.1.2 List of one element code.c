
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* The ADT List by Shelly Sysmom, 29 august 2019*/
// singly linked list

//It essentially defines list as an alias for struct list, 
// making my code cleaner and easier to work with.
typedef struct list { 
    int data; 
    struct list* next; 
} list;

//a function to check whether the l == NULL or no?
int is_empty(const list* l) { return (l == NULL); }

//printing the list one by one
void print_list(list* h, char* title)
{
    printf("%s\n", title);
    while (h!= NULL)
    {
        printf("%d : ", h -> data);
        h = h -> next;
    }

}

int main()
{
    //list my_int_list;
    
    list* head = NULL;
    head = malloc(sizeof(list));
    printf("size of my_int_list = %lu\n", sizeof(list)); // unsigned long

    head -> data = 5;
    head -> next = NULL;

    print_list(head, "single element list");
    printf("\n\n");

    return 0;


    //printf("hellow C world!");
    //int n;
    //scanf_s("%d", &n);
    ////std::cout << "Hello World!\n";
}