
#include <stdio.h>

int foobar(int* n) {
    *n = *n + 1;
    return *n;
}
////////////
double fact(int n) {
    double result = 1.0;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int int_fact(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

long long longlong_fact(int n) {
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
/////////////// 31
//int mystery(int p, int q) {
//
//    int r;
//    if ((r = p % q) == 0)
//        return q;
//    else return mystery(q, r);
//}

//////////////////// 32
int mystery(int p, int q) {
    int r;
    if ((r = p % q) == 0)
        return q;
    else return mystery(q, r);
}


int main() {
    /*int num = 20; // q29
    printf("Factorial of %d is %f\n", num, fact(num));

    printf("Integer Factorial of %d is %d\n", num, int_fact(num));

    printf("Long Long Factorial of %d is %lu\n", num+5, longlong_fact(num+5));*/


    //31 printf("q30 Mystery  of 2,6 is %d\n", mystery(2, 6));
    //32 printf("q32 Mystery  of 2,6 is %d\n", mystery(7, 91));

    /*int data[5] = { 0 ,1, 2, 3, 4 }, sum = 0, i; //36

    for (i = 0; i < 5; i++)
        sum = sum + data[i];
    printf(" % d\n", sum);
    */

    //// 37
    //int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i = 6;
    //int* p = &a[0];
    //printf(" % d\n", *(p + i));


    //// 38 Incorrect ( I answered "false" because printf printed abcd not a)
    // 38.
   /* Question 38
        True / False: The declaration char* str = &a[0]; where char a[5] = “abcd”;
    The value of* str is the char ‘a’;*/
    



    ///////////////////////
   /* 41. Incorrect (
        Question 41
        if p and q are pointers to double and x and y are double which of the following is legal :*/

    //char a[5] = "abcd";
    //char* str = &a[0];
    //char* str2 = &a[3];
    //printf(" str: %s\n", str);
    //printf(" str2: %s", str2);

    double *p, *q; // pointers
    double x, y;
    
    
    //chosed this answear:
    //p = (int)q;

    // because copilet told me that &p is iqual to double** (i.e. to pointer to pointer and it sholdn't work)
    printf(" pointer p is type p: %p\n", &p);
    printf(" pointer q is type p: %p\n", &q);

    printf(" pointer p is type d: %d\n", &p);
    printf(" pointer q is type d: %d\n", &q);

    q = &p; // but as I can see, the compiler doesn't give an error here so most likelly this below was legal
   
    printf(" pointer ""q = &p;"" is type p: %p\n", q);

    printf(" pointer ""&q = &p;"" is type p: %p\n", &q);

    printf(" pointer ""q = &p;"" is type d: %d\n", q);

    printf(" pointer ""&q = &p;"" is type d: %d\n", &q);
    return 0;
}

//////////////



//int main()
//{
//    int k = 6;
//    printf("foobar(k) = %d,", foobar(&k));
//    printf(" k = %d\n", k);
//
//    printf("HELLO\t\tWORLD\n");
//
//    int i = 0, j = 1, z = 2;
//    
//    printf("Expression: = %d \n", (i && (j = z)) || (z > j));
//    
//   /* f = a++;
//    printf("f = %d \n", f);*/
//    
//   // scanf_s("%d", &c);
//    //std::cout << "Hello World!\n";
//}