
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* The ADT List by Shelly Sysmom, 9 sept 2019*/
// singly linked list

//It essentially defines list as an alias for struct list, 
// making my code cleaner and easier to work with.
typedef struct list {
    int data;
    struct list* next;
} list;

//a function to check whether the l == NULL or no?
int is_empty(const list* l) { return (l == NULL); }

//creating the list
list* create_list(int d) // creating an object of type list*.
                            //I.e. creates one element of the list
{
    list* head = malloc(sizeof(list));
    head->data = d;
    head->next = NULL;
    return head;
}


//addint element to the beginint of the list
list* add_to_front(int d, list* h)
{
    list* head = create_list(d);
    head->next = h; //previous list address becomes a head of just added 1st element
    return head; // returning the pointer to just created 1st element of the list
}


// converting an array to a list
list* array_to_list(int d[], int size)
{
    list* head = create_list(d[0]);
    int i;
    for (i = 1; i < size; i++)
    {
        head = add_to_front(d[i], head);
    }
    return head;
}


//printing the list one by one
void print_list(list* h, char* title)
{
    printf("%s\n", title);
    while (h != NULL)
    {
        printf("%d : ", h->data);
        h = h->next;
    }

}

int main()
{
    //list my_int_list;
    list* head = NULL;
    int data[6] = { 2, 3, 5, 7, 8, 9 };// so 9 shall become the begining of the list
    //head = array_to_list(data, sizeof(data)); // this way it didn't work out
    head = array_to_list(data, 6);

    print_list(head, "my int list");
    printf("\n\n");
    return 0;


    //printf("hellow C world!");
    //int n;
    //scanf_s("%d", &n);
    ////std::cout << "Hello World!\n";
}