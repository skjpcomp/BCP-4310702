// program to make a calendar of 2023

#include <stdio.h>

int main()
{
    int days, start, i;

    printf("\nCalendar of 2023\n\n");

    printf("   January 2023\n");
    printf(" S  M. Tu  W  Th  F  S\n");

    days = 31;
    start = 0;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   February 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 28;
    start = 6;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   March 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 31;
    start = 6;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   April 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 30;
    start = 2;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   May 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 31;
    start = 4;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   June 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 30;
    start = 0;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   July 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 31;
    start = 2;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   August 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 31;
    start = 5;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   September 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 30;
    start = 1;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   October 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 31;
    start = 3;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   November 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 30;
    start = 6;

    for (i = 0; i < start; i++)
    {
        printf("   ");
    }

    for (i = 1; i <= days; i++)
    {
        printf("%2d ", i);

        if ((i + start) % 7 > 0)
            printf(" ");
        else
            printf("\n ");
    }

    printf("\n\n   December 2023\n");
    printf(" S  M Tu  W Th  F  S\n");

    days = 31;
    start = 1;

}
   