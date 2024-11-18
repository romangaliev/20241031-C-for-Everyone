///////////////
//// q2
//#include <stdio.h>
//#include <stdlib.h>
//
//enum month next_month(enum month m)
//{
//    return((m + 1) % 12);
//}
//int main()
//{
//    enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
//
//    
//
//    printf("%u\n", next_month(dec));
//
//    return 0;
//}
/////////////


///////////////////
////q5
//#include <stdio.h>
//
//enum fuzzy_logic { false, maybe, true };
//
//int main()
//{
//    
//    enum fuzzy_logic logic;
//    logic = true;
//    
//   /* switch (logic)
//    {
//    case(true): printf("logic integer equals to : %d", logic);
//    default:
//        break;
//    }*/
//    printf("logic integer equals to : %d", logic); // prints 2
//    
//    return 0;
//}
/////////////

///////
////q8
//#include <stdio.h>
//
//enum month get_month(enum month m)
//{
//    return(m);
//}
//
//int main()
//{
//    enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
//
//
//    printf("%u\n", get_month(apr));
//
//    return 0;
//}
////////////

///q9
#include <stdio.h>


enum month { jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };

enum month next_month(enum month m)
{
    return((m + 1) % 12);
}

int main()
{

    printf("next_month(dec + 1) is %d\n", next_month(dec + 1));
    // THE PRINTING RESULT IS 1, not 0, because the 1 added twice !!!!
    // at the function call and inside the function

    return 0;
}