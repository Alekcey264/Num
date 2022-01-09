#ifndef LIB_H
#define LIB_H

typedef struct Node Pilots;
void menu();
Pilots *list_init(char *name, int year, char *rank, int number, int count, char *status);
void add_in_tail(Pilots *head, char *name, int year, char *rank, int number, int count, char *status);
void list_traverse(Pilots *head);
Pilots* delete_smth(Pilots *head, int o);
Pilots* removest(Pilots *head);
void list_traverse(Pilots *head);

#endif
