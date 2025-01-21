#include <stdio.h>
#include <stdlib.h>

typedef struct No
{
    int key;
    struct No *left;
    struct No *rigth;
} No;

void post_order(No *no);
void pre_order(No *no);
void in_order(No *no);

int heigth(No *no);
int max_number(int a, int b);
No *create_node(int value);

void insert_node(No **node, int value);
No *search(No **node, int value);