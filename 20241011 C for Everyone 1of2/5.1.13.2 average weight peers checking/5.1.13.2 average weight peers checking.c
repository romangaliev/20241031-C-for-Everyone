#include <stdio.h>

int main()
{
    int n;
    double sum = 0.0;
    double average;


    printf("Enter the number of elephant seals: ");
    scanf("%d", &n);


    double weights[n];


    printf("Enter the weights of the elephant seals:\n");
    for (int i = 0; i < n; i++);
    {
        printf("Seal %d weight: ", i + 1);
        scanf("%lf", &weights[i]);
        sum += weights[i];
    }


    average = sum / n;


    printf("The average weight of the elephant seals is: %.2f\n", average);

    return 0;
}

