#include "lib.h"

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int y = 0;

typedef struct Node
{
    int u;
    char name[50];
    int year;
    char rank[50];
    int number;
    int count;
    char status[50];
    Pilots *next, *prev;
} Pilots;

Pilots *headgl = NULL;

void menu()
{
    {
        printf("------------------------------------------------------------------------------------------\n");
        printf("Выберите операцию:\n");
        printf("1. Все пилоты\n");
        printf("2. Добавить пилота\n");
        printf("3. Удалить пилота\n");
        printf("4. Удалить пилотов не на службе\n");
        printf("0. Выход\n");
        printf("------------------------------------------------------------------------------------------\n");
    }
}

Pilots *list_init(char *name, int year, char *rank, int number, int count, char *status)
{
    Pilots *p = (Pilots *)malloc(sizeof(Pilots));
    y++;
    p->u = y;
    strcpy(p->name, name);
    //p->name = name;
    p->year = year;
    strcpy(p->rank, rank);
    //p->rank = rank;
    p->number = number;
    p->count = count;
    strcpy(p->status, status);
    //p->status = status;
    p->next = NULL;
    p->prev = NULL;
    headgl = p;
    return p;
}

void add_in_tail(Pilots *head, char *name, int year, char *rank, int number, int count, char *status)
{
    Pilots *tmp = head;
    Pilots *p = (Pilots *)malloc(sizeof(Pilots));
    y++;
    p->u = y;
    strcpy(p->name, name);
    //p->name = name;
    p->year = year;
    strcpy(p->rank, rank);
    //p->rank = rank;
    p->number = number;
    p->count = count;
    strcpy(p->status, status);
    //p->status = status;
    p->next = NULL;
    while (tmp->next != NULL)
        tmp = tmp->next;
    p->prev = tmp;
    tmp->next = p;
    //free(tmp);
}

Pilots *delete_smth(Pilots *head, int o)
{
    Pilots *p = headgl, *m;
    while (p)
    {
        if (p->u == o)
        {
            if ((p->prev == NULL) && (p->next == NULL))
            {
                y = 0;
                head = NULL;
                headgl = NULL;
                p->next = p->prev = p;
                free(p);
                break;
            }
            if (p->prev == NULL)
            {
                headgl = p->next;
                head = p->next;
                m = p;
                while (p->next)
                {
                    p->next->u = (p->next->u) - 1;
                    y = (p->next->u) - 1;
                    p = p->next;
                }
                p = m;
                p->next->prev = NULL;
                p->next = p->prev = p;
                free(p);
                break;
            }
            else
            {
                if (p->next == NULL)
                {
                    p->prev->next = NULL;
                    p->next = p->prev = p;
                    free(p);
                    break;
                }
                else
                {
                    p->next->prev = p->prev;
                    p->prev->next = p->next;
                    m = p;
                    while (p->next)
                    {
                        p->next->u = (p->next->u) - 1;
                        y = (p->next->u) - 1;
                        p = p->next;
                    }
                    p = m;
                    p->next = p->prev = p;
                    free(p);
                    break;
                }
            }
        }
        p = p->next;
    }
    return head;
}

void list_traverse(Pilots *head)
{
    Pilots *p = headgl;
    printf("------------------------------------------------------------------------------------------\n");
    while (p != NULL)
    {
        printf("Num - %i; name - %s; year - %i; rank - %s; number - %i; count - %i; status - %s; prev - %p; next - %p\n", p->u, p->name, p->year, p->rank, p->number, p->count, p->status, p->prev, p->next);
        p = p->next;
    }
}

Pilots *removest(Pilots *head)
{
    char *needed_status = "Служит";
    Pilots *p = headgl, *n, *m;
    while (p)
    {
        if (strcmp(needed_status, p->status) != 0)
        {
            if (p->prev == NULL)
            {
                headgl = p->next;
                m = p;
                while (p->next)
                {
                    p->next->u = (p->next->u) - 1;
                    y = (p->next->u) - 1;
                    p = p->next;
                }
                p = m;
                p->next->prev = NULL;
                p->next = p->prev = p;
                free(p);
                n = headgl;
            }
            else
            {
                if (p->next == NULL)
                {
                    p->prev->next = NULL;
                    p->next = p->prev = p;
                    free(p);
                    break;
                }
                else
                {
                    p->next->prev = p->prev;
                    p->prev->next = p->next;
                    m = p;
                    while (p->next)
                    {
                        p->next->u = (p->next->u) - 1;
                        y = (p->next->u) - 1;
                        p = p->next;
                    }
                    //y = p->next->u;
                    p = m;
                    n = p->prev;
                    p->next = p->prev = p;
                    free(p);
                    p = n;
                }
            }
        }
        else
        {
            n = p->next;
        }
        p = n;
    }
}
