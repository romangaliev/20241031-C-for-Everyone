
/* The ADT Binary Tree by 
Kate Programmer, 29 sept 2019 
*/

#include <stdio.h>
#include <stdlib.h>
//#include <ctype.h>

typedef char DATA;

struct node {
    DATA d;
    struct node* left;
    struct node* right;
};

typedef struct node NODE;
typedef NODE* BTREE; // typedef of a BTREE as a pointer to NODE
    // so in effect we will be able to look at a binary tree
    // as a pointer to its root

/* there are several ways to travese the treee
preorder
inorder 
postorder
we will fosuc on inorder this time
*/

void inorder(BTREE root)
{
    if (root != NULL)
    {
        inorder(root->left); // first we will to the left side of the tree
        printf("%c", root -> d ); // then we will print the left side data recursively
        inorder(root->right); // then we will go and pring the right side recursively
    }
}


void postorder(BTREE root)
{
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("% c", root->d);
    }
}

//creatign a tree nodes
BTREE new_node(void)
{
    //returning the pointer value to this size of memory
    return (malloc(sizeof(NODE)));
}


//method to initialise the data in the new node
BTREE init_node(DATA d1, BTREE p1, BTREE p2) // data, left and right pointers
{
    BTREE t;
    t = new_node(); // allocating memory to the struc
    // assigning data to the members of this struc
    t -> d = d1;
    t->left = p1;
    t->right = p2;
    return t;

}


// creating a tree from an array
BTREE create_tree(DATA a[], int i, int size)
{
    if (i >= size)
        return NULL; // if we went throug all elements of the array
    else
        //at the first iteration we send:init_node(a[0],p1=a[1],p2=a[2])
        //at the second iteration we send:init_node(a[2],p1=a[1],p2=a[2]) ???
        // пройтись дебагером по каждому шагу с заходом! Голова не тянет эту рекурсию
        return(init_node(a[i],
            create_tree(a, 2 * i + 1, size),
            create_tree(a, 2 * i + 2, size)))   ;
        
}


int main()
{
    char d[] = {'a','b','c','d','e'};
    BTREE b; // creating a pointer
    b = create_tree(d, 0, 5); //converting array d to binary tree
    printf("inorder: \n");
    inorder(b); // in order printing of this tree
            //result printed: dbeac

    printf("\n\n");
    printf("postoder: \n");
    postorder(b); // result printed: debca

    return 0;



    //printf("hellow C world!");
    //int n;
    //scanf_s("%d", &n);
    ////std::cout << "Hello World!\n";
}

// this Prints the data stored at the root  as first, middle or last?
// let's try it! (correct answear is the "last")
//void postorder(BTREE root)
//{
//    if (root != NULL) {
//        postorder(root->left);
//        postorder(root->right);
//        printf(“ % c  “, root->d);
//    }
//}