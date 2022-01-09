#include "lib.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    Pilots *head = NULL, *m;
    head = list_init("John Walker", 1998, "Major", 15, 6, "Служит");
    add_in_tail(head, "Bruce Hick", 1985, "General", 32, 9, "В отставке");
    add_in_tail(head, "Joseph Ikop", 1999, "Lieutenant", 2, 0, "Погиб в бою");
    add_in_tail(head, "Kenny Pan", 1990, "Captain", 20, 8, "Пропал без вести");
    add_in_tail(head, "Aaron Sky", 1986, "Colonel", 10, 4, "Служит");
    add_in_tail(head, "Archie Bravee", 1993, "Brigadier", 13, 4, "В отставке");
    add_in_tail(head, "Buck Blessed", 1991, "Sergeant", 21, 9, "Погиб в бою");
    add_in_tail(head, "Gregory Hill", 1987, "Corporal", 3, 1, "Служит");
    add_in_tail(head, "James Jma", 1976, "General ", 50, 17, "Пропал без вести");

    int option;
    int o;
    char name[50];
    int year;
    char rank[50];
    int number;
    int count;
    char status[50];

    do
    {
        menu();
        scanf("%i", &option);
        if (option > 5)
            printf("Error");
        switch (option)
        {
            case 1:
                list_traverse(head);
                break;
            case 2:
                printf("Name: ");
                while ((getchar()) != '\n')
                    ;
                fgets(name, sizeof(name), stdin);
                name[strlen(name) - 1] = name[strlen(name)];
                printf("Year of birth: ");
                scanf("%i", &year);
                printf("Rank: ");
                while ((getchar()) != '\n')
                    ;
                fgets(rank, sizeof(rank), stdin);
                rank[strlen(rank) - 1] = rank[strlen(rank)];
                printf("Number of flights: ");
                scanf("%i", &number);
                printf("Number of aircraft shot down: ");
                scanf("%i", &count);
                printf("Status: ");
                while ((getchar()) != '\n')
                    ;
                fgets(status, sizeof(status), stdin);
                status[strlen(status) - 1] = status[strlen(status)];
                if (m != NULL)
                {
                    add_in_tail(head, name, year, rank, number, count, status);
                }
                else
                {
                    head = list_init(name, year, rank, number, count, status);
                    m = head;
                }
                break;
            case 3:
                printf("Num: ");
                scanf("%i", &o);
                m = delete_smth(head, o);
                break;
            case 4:
                removest(head);
                break;
        }
    } while (option != 0);
    return 0;
}
