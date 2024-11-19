// usind ADT STACK to reverse a string

#include <stdio.h>
#include <ctype.h>

#define MAX_LEN 1000 // max length of the string to be reversed
#define EMPTY -1 // if a stack is emply we can't pop on it (take from it)
#define FULL (MAX_LEN - 1) // if a stack is full we can't top on it (push to it)
 
typedef struct stack { char s[MAX_LEN]; int top;} stack; // now we can call it simply "stack"

void reset(stack* stk) { stk->top = EMPTY;} //using the pointer to stack we make it empty

void push(char c, stack* stk)
{
    stk->top++; // incrementing number of characters in the stack
    stk->s[stk->top] = c; // addint character c to the top of the stack
    // if instead of char c will be something more complex, 
    // we might need to use some rutine
}

char pop(stack* stk) { return (stk -> s[stk->top--]); } // first we return a top value
                                                       // then we decrement the top

char top(const stack* stk) { return (stk -> s[stk->top]); } // examine the top of the stack
                                                            // that is why it is const here

int is_empty(const stack* stk) { return (stk -> s[stk->top] == EMPTY); } // is it empty?
int is_full(const stack* stk) { return (stk -> s[stk->top] == FULL); } // is it empty?


int main()
{
    stack stack_of_char;

    char* str = "i am atto am i"; // string to be reversed

    char str_back[20] =" "; // the optput will be stored here

    int i = 0;

    reset(&stack_of_char); // reset the stack just in case


    // pushing original string into a temporary holder - our stack for FIFO
    printf("The original string is: \t %s \n\n", str);
    while ((str[i] != '\0')&& i< 20) // i < 20 is additional sequrity
    {
        printf("pushing %d-th char: %c to the stack\n", i, str[i]);
        push(str[i++], &stack_of_char); // first push and then POSTFIX increment i++
    }
    printf("\n\n");


    

    //=+ taking original string out of temporary holder - our stack for FIFO +
    int j = i;//remember how many items pushed not to iterate untill 20
               // otherwise some shit is printed after the needed output to fill the whole 20 chars 
    i = 0;
    
    //while (!is_empty(&stack_of_char) && (i < 20) && (pop(&stack_of_char) != '\0'))
    while (!is_empty(&stack_of_char) && (i < j))
    {
        //printf("%c", pop(&stack_of_char));
        str_back[i++] = pop(&stack_of_char);// first pop and then POSTFIX increment i++
    }

    printf("The reversed string is:\n %s", str_back);
    printf("\n\n");
    //=- taking original string out of temporary holder - our stack for FIFO -
    return 0;
    /*
    printf("hellow C world!");
    int n;
    scanf_s("%d", &n);
    *///std::cout << "Hello World!\n";
}