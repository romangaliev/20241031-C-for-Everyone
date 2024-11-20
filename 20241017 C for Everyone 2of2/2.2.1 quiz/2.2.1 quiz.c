
#include <stdio.h>

////q1
////#include <stdio.h>
//
//struct point {
//    double x;
//    double y;
//} p1 = { 2.5, 4.0 };
//
//int main()
//{
//    printf("value of p1.x is: %f", p1.x); // 2.5
//    
//    
//    /*int n;
//    scanf_s("%d", &n);
//    *///std::cout << "Hello World!\n";
//}

//////////////////////
////q2
//struct point {
//	double x;
//	double y;
//} p1 = { 2.5, 4.0 };
//
//int main()
//{
//	struct point* ptr = &p1;
//
//	printf("value of ptr->y  is: %f", ptr->y); // 4.00000
//	return 0;
//}

//////////////////////////

////q4
//struct point {
//	double x;
//	double y;
//} p1 = { 4, 4.0 };
//
//int main()
//{
//	printf("p1.x: %f\n", p1.x); //4.000000  <-answear
//	printf("p1.y: %f\n", p1.y); //4.000000
//	printf("p1.x: %2.2f\n", p1.x); //4.00
//	printf("p1.y: %4.4f\n", p1.y); //4.0000
//	//printf("value of ptr->y  is: %f", ptr->y); // 4.00000
//	return 0;
//}
/////////////////

////q5
//struct point {
//	double x;
//	double y;
//} p1 = { 2.5, 4.0 };
//
//int main()
//{
//	printf("p1.x: %f\n", p1.x); //2.500000  <-answear
//	printf("p1.y: %f\n", p1.y); //4.000000
//	printf("p1.x: %2.2f\n", p1.x); //2.50
//	printf("p1.y: %4.4f\n", p1.y); //4.0000
//	//printf("value of ptr->y  is: %f", ptr->y); // 4.00000
//	return 0;
//}
/////////////////

////////////////////////
////q6
//struct point {
//	double x;
//	double y;
//} p1;
//
//int main()
//{
//	struct point* ptr = &p1;
//
//	printf("value of ptr->y  is: %f", ptr->y); // 0.000000
//	return 0;
//}
//
////////////////////////////

////////////////////////
////q7
//struct point {
//	double x;
//	double y;
//} p1 = {2.5};
//
//int main()
//{
//	struct point* ptr = &p1;
//
//	printf("value of ptr->x  is: %f", ptr->x); // 2.500000
//	return 0;
//}
//
////////////////////////////

//////////////////////
////q10
//struct point {
//	double x;
//	double y;
//} p1 = {4, p1.x}; // error E0028	expression must have a constant value
//					// bases on error I answeared "NULL" and it was INCORRECT
//					// most likelly the wnswear is 4
//int main()
//{
//	struct point* ptr = &p1;
//
//	printf("value of ptr->y  is: %f", ptr->y); // 2.500000
//	return 0;
//}

//////////////////////////