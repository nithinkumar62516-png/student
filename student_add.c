#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"
void stud_add(ST **ptr)
{
    ST *temp, *last;

    temp = malloc(sizeof(ST));

    printf("Enter Roll No: ");
    scanf("%d", &temp->rollno);

    printf("Enter Name: ");
    scanf("%s", temp->name);

    printf("Enter Percentage: ");
    scanf("%f", &temp->percentage);

    temp->next = NULL;

    if(*ptr == NULL)
    {
        *ptr = temp;
    }
    else
    {
        last = *ptr;

        while(last->next != NULL)
        {
            last = last->next;
        }

        last->next = temp;
    }
}
