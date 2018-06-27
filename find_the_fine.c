#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T;
    int N, date;
    int *penalties;
    int *cars;
    int fine = 0;
    int i = 0;

    printf("please enter no of test cases : ");
    scanf("%d", &T);
       
    /*If date is odd than collect fine from even number cars
    if date is even than collect fine from odd number cars
    */
    while(T != 0)
    {
        printf("Enter value of N and date");
        scanf("%d %d", &N, &date);

        cars = (int *)(malloc(N * sizeof(int)));
        penalties = (int *)(malloc(N * sizeof(int)));

        printf("Enter car numbers : ");
        //printf("%d", sizeof(cars));
        for (i = 0; i < N; i++)
        {
            scanf("%d", cars + i);
        }

        printf("Enter penalties");
        for (i = 0; i < N; i++)
        {
            scanf("%d", penalties + i);
        }

        if(date % 2 == 0)
        {
            printf("\ncollecting fine from odd cars");
            for (i = 0; i < N; i++)
            {
                if(cars[i] % 2 != 0)
                {
                    fine = fine + *(penalties + i);
                }
            }
        }
        else if(date % 2 != 0)
        {
            printf("collecting fine from even cars");
            for (i = 0; i < N; i++)
            {
                if(cars[i] % 2 == 0)
                {
                    fine = fine + *(penalties + i);
                }
            }
        }
        else
        {
            printf("logic is wrong");
        }
        printf("\ntotal fine : %d\n", fine);
        T--;
        fine = 0;
    }
    
    return 0;
}